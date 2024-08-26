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

	virtual ~Animal()
	{
		cout << "Animal �Ҹ���" << endl;
	}

	// ��ü�� �����Ƿ� ���������Լ��� ó��(�ڽ� Ŭ�������� �����ؾ���)
	virtual void  bark() = 0;
	virtual void sleep() = 0;
	virtual void eat() = 0;

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

	virtual ~Human()
	{
		cout << "Human �Ҹ� " << endl;
	}

	void bark() override
	{
		cout << "����" << endl;
	}

	void sleep() override
	{
		cout << "����" << endl;
	}

	void eat() override
	{
		cout << "���" << endl;
	}

private:
	bool right_;
};

void main(void) {
	// �߻�Ŭ����(���������Լ��� �ִ�)�� ��ü�� ������ �� ����
	Animal * ani = new Animal("����", 18);
	ani->bark();
	ani->eat();
	ani->sleep();
	delete ani;

	// ani�� �ڷ����� Animal*
	ani = new Human("����", 18, true);
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;
}