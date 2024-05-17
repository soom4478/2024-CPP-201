#include <iostream>
using namespace std;

class Animal {
public:
	void PrintMethod() {
		cout << "부모고양이" << endl;
	}
};

// 자식 클래스
class Cat : public Animal {
public:
	void PrintMethod() {
		Animal::PrintMethod();
		cout << "자식 고양이" << endl;
	}
};

int main() {
	Cat cat;
	cat.PrintMethod();
	return 0;
}