#include <iostream>
#include <string>

using namespace std;


class Animal {
public:
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{
		cout << "ÀÌ¸§ " << name_ << endl;
		cout << "³ªÀÌ " << age_ << endl;
	}

	virtual void  bark()
	{
		cout << "Àß Áþ´Â´Ù" << endl;
	}

	virtual void sleep()
	{
		cout << "Àß ÀÜ´Ù" << endl;
	}

	virtual void eat()
	{
		cout << "Àß ¸Ô´Â´Ù" << endl;
	}

private:
	string name_;
	unsigned int age_;	// ºÎÈ£°¡ ¾øÀ½, +¸¸

};

class Human : public Animal {
public:
	Human(string name, int age, bool right)
		: Animal(name, age), right_(right)
	{
		cout << "ÀÎ±ÇÁ¸Àç¿©ºÎ " << right_ << endl;
	}

	void bark()
	{
		cout << "ÅåÅå" << endl;
	}

	void sleep()
	{
		cout << "ÄðÄð" << endl;
	}

	void eat()
	{
		cout << "¾ä¾ä" << endl;
	}

private:
	bool right_;
};

void main(void) {
	Animal * ani = new Animal("Á¤¹Î", 18);
	ani->bark();
	ani->eat();
	ani->sleep();
	delete ani;

	// aniÀÇ ÀÚ·áÇüÀº Animal*
	ani = new Human("ÁöÇý", 18, true);
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;
}