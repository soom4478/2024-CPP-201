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
		cout << "Àß Áþ´Â´Ù" << endl;
	}

	void sleep()
	{
		cout << "Àß ÀÜ´Ù" << endl;
	}

	void eat()
	{
		cout << "Àß ¸Ô´Â´Ù" << endl;
	}

private:
	string name_;
	unsigned int age_;	// ºÎÈ£°¡ ¾øÀ½, +¸¸

};

class Human : public Animal {
private:
	string name_;
	unsigned int age_;
};

void main(void) {
	Animal * ani = new Animal("Á¤¹Î", 18);
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;
}