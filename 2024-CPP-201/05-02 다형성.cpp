#include <iostream>
#include <string>

using namespace std;


class Animal {
public:
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{
		cout << "�̸� " << name_ << endl;
		cout << "���� " << age_ << endl;
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
public:
	Human(string name, int age, bool right)
		: Animal(name, age), right_(right)
	{
		cout << "�α����翩�� " << right_ << endl;
	}

	void bark()
	{
		cout << "����" << endl;
	}

	void sleep()
	{
		cout << "����" << endl;
	}

	void eat()
	{
		cout << "���" << endl;
	}

private:
	bool right_;
};

void main(void) {
	Animal * ani = new Animal("����", 18);

	ani->bark();
	ani->eat();
	ani->sleep();

	Human* hum = new Human("����", 18, true);
	hum->bark();
	hum->eat();
	hum->sleep();

	delete hum;
	delete ani;
}