#include <iostream>
#include <string>

using namespace std;


class Animal {
public:
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{

	}

	void bark()
	{
		cout << "�� ���´�" << endl;
	}

	void sleep()
	{
		cout << "�� �ܴ�" << endl;
	}

	void eat()
	{
		cout << "�� �Դ´�" << endl;
	}

private:
	string name_;
	unsigned int age_;	// ��ȣ�� ����, +��

};

class Human : public Animal {
private:
	string name_;
	unsigned int age_;
};

void main(void) {
	Animal * ani = new Animal("����", 18);
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;
}