#include <iostream>
#include <string>

using namespace std;

class Clothes {
public:
	Clothes(string name, int price, int making_time, int beauty)
		: name_(name), price_(price), making_time_(making_time), beauty_(beauty)
	{}

	virtual void show() {
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << price_ << endl;
		cout << "����� �ð� : " << making_time_ << endl;
		cout << "�Ƹ��ٿ� : " << beauty_ << endl;
	}

	virtual void attack(Clothes* target) = 0;

	string name_;
	int price_;
	int making_time_;
	int beauty_;
};

 class Hanbok : public Clothes {
 public:
	 Hanbok(string name, int price, int making_time, int beauty, int norigea, int jugori)
		 : Clothes(name, price, making_time, beauty), norigea_(norigea), jugori_(jugori)
	 {}

	 void show()
	 {
		 Clothes::show();
		 cout << "�븮�� : " << norigea_ << endl;
		 cout << "���� : " << jugori_ << endl;
	 }

	 void attack(Clothes* target) {
		 target->beauty_ -= beauty_;
	 };

	 int norigea_;					// �븮��
	 int jugori_;					// ����
};

 class Kimono : public Clothes {
 public:
	 Kimono(string name, int price, int making_time, int beauty, int belt)
		 : Clothes(name, price, making_time, beauty), belt_(belt)
	 {}

	 void show()
	 {
		 Clothes::show();
		 cout << "���� : " << belt_ << endl;
	 }

	 void attack(Clothes* target) {
		 target->beauty_ -= beauty_;
	 };

	 int belt_;						// ����
};

 class Chipao : public Clothes {
 public:
	 Chipao(string name, int price, int making_time, int beauty, int embroidery)
		 : Clothes(name, price, making_time, beauty), embroidery_(embroidery)
	 {}

	 void show()
	 {
		 cout << "�ڼ� : " << embroidery_ << endl;
	 }

	 void attack(Clothes* target) {
		 target->beauty_ -= beauty_;
	 };

	 int embroidery_;
 };

 void main() {
	 Clothes* player = new Hanbok("�����", 100, 10, 9999, 0, 0);
	 Clothes* chingu = new Kimono("����", 10, 1, 9, 1);

	 player->show();
	 chingu->show();

	 cout << "---------------------------------" << endl;
	 cout << "1. ����" << endl;
	 cout << "2. Ư������1" << endl;
	 cout << "3. Ư������2" << endl;
	 cout << "4. ����" << endl;

	 player->attack();

	 delete chingu;
	 delete player;
 }