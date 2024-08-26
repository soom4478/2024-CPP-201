#include <iostream>
using namespace std;

class Monster {
public:
	int hp_= 100;
	int damage_;
	Monster() {}
	Monster(int damage)
		: damage_(damage)
	{
		cout << "monster : hp=" << hp_ << ", damage:" << damage_ << endl;
	}
	void atack() {
		cout << "atack: -" << damage_ << "hp" << endl;
		hp_-=damage_;
		if (hp_ <= 0) {
			cout << "win!" << endl << endl;
		}
		else {
			cout << "³²Àº hp : " << hp_ << endl;
		}
	}
};

class Zombie : public Monster{
public :
	Zombie(int damage) : Monster() {
		hp_ = 20; damage_ = damage;
		cout << "zombie : hp=" << hp_ << ", damage:" << damage << endl;
	}
};

int main() {
	Monster* m = new Monster(20);

	for (int i = 0; i < 5; i++) {
		m->atack();
	}

	Zombie*z = new Zombie(10);
	z->atack();
	z->atack();


	delete m;
	return 0;
}