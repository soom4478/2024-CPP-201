#include <iostream>
using namespace std;

class Animal {
public:
	void PrintMethod() {
		cout << "�θ�����" << endl;
	}
};

// �ڽ� Ŭ����
class Cat : public Animal {
public:
	void PrintMethod() {
		Animal::PrintMethod();
		cout << "�ڽ� �����" << endl;
	}
};

int main() {
	Cat cat;
	cat.PrintMethod();
	return 0;
}