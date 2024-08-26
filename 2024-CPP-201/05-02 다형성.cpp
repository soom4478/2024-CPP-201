#include <iostream>
#include <string>

using namespace std;


class Animal {
public:
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{
		cout << "이름 " << name_ << endl;
		cout << "나이 " << age_ << endl;
	}

	virtual ~Animal()
	{
		cout << "Animal 소멸자" << endl;
	}

	// 실체가 없으므로 순수가상함수로 처리(자식 클래스에서 구현해야함)
	virtual void  bark() = 0;
	virtual void sleep() = 0;
	virtual void eat() = 0;

private:
	string name_;
	unsigned int age_;	// 부호가 없음, +만

};

class Human : public Animal {
public:
	Human(string name, int age, bool right)
		: Animal(name, age), right_(right)
	{
		cout << "인권존재여부 " << right_ << endl;
	}

	virtual ~Human()
	{
		cout << "Human 소멸 " << endl;
	}

	void bark() override
	{
		cout << "톡톡" << endl;
	}

	void sleep() override
	{
		cout << "쿨쿨" << endl;
	}

	void eat() override
	{
		cout << "얌얌" << endl;
	}

private:
	bool right_;
};

void main(void) {
	// 추상클래스(순수가상함수가 있는)는 객체를 생성할 수 없다
	Animal * ani = new Animal("정민", 18);
	ani->bark();
	ani->eat();
	ani->sleep();
	delete ani;

	// ani의 자료형은 Animal*
	ani = new Human("지혜", 18, true);
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;
}