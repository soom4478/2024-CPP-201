#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Clothes {
public:
	Clothes(string name, int price, int making_time, int beauty)
		: name_(name), price_(price), making_time_(making_time), beauty_(beauty)
	{}

	virtual void show() {
		cout << "이름 : " << name_ << endl;
		cout << "가격 : " << price_ << endl;
		cout << "만드는 시간 : " << making_time_ << endl;
		cout << "아름다움 : " << beauty_ << endl;
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
		 cout << "노리개 : " << norigea_ << endl;
		 cout << "저고리 : " << jugori_ << endl;
	 }

	 void attack(Clothes* target) override
	 {
		 attack_count_++;
		 if (attack_count_ == 3)
		 {
			 target->beauty_ -= beauty_ * 2;
			 attack_count_ = 0;
		 }
		 else
			 target->beauty_ -= beauty_;
	 };
	 
	 int attack_count_ = 0; // 공격 횟수
	 int norigea_;					// 노리개
	 int jugori_;					// 저고리
};

 class Kimono : public Clothes {
 public:
	 Kimono(string name, int price, int making_time, int beauty, int belt)
		 : Clothes(name, price, making_time, beauty), belt_(belt)
	 {}

	 void show()
	 {
		 Clothes::show();
		 cout << "오비 : " << belt_ << endl;
	 }

	 void attack(Clothes* target) override
	 {
		 attack_count_++;
		 if (attack_count_ == 3)
		 {
			 target->beauty_ -= beauty_ * 2;
			 attack_count_ = 0;
		 }
		 else
			 target->beauty_ -= beauty_;
	 };

	 int attack_count_ = 0; // 공격 횟수
	 int belt_;						// 오비
};

 class Chipao : public Clothes {
 public:
	 Chipao(string name, int price, int making_time, int beauty, int embroidery)
		 : Clothes(name, price, making_time, beauty), embroidery_(embroidery)
	 {}

	 void show()
	 {
		 cout << "자수 : " << embroidery_ << endl;
	 }

	 void attack(Clothes* target) override
	 {
		 attack_count_++;
		 if (attack_count_ == 3)
		 {
			 target->beauty_ -= beauty_ * 2;
			 attack_count_ = 0;
		 }
		 else
			 target->beauty_ -= beauty_;
	 };

	 int attack_count_ = 0; // 공격 횟수
	 int embroidery_;
 };

 void main() {
	 Clothes* player = new Hanbok("곤룡포", 100, 10, 9999, 0, 0);
	 Clothes* chingu = new Kimono("기모노", 10, 1, 9, 1);

	 player->show();
	 chingu->show();

	 int choice;

	 while (true)
	 {
		 system("cls");
		 player->show();
		 cout << endl << endl;
		 chingu->show();

		 cout << "---------------------------------" << endl;
		 cout << "1. 공격" << endl;
		 cout << "2. 특수공격1" << endl;
		 cout << "3. 특수공격2" << endl;
		 cout << "4. 도망" << endl;
		 cin >> choice;

		 switch (choice) {
		 case 1:
			 player->attack(chingu);
			 break;
		 case 2:
			 cout << "특수공격1" << endl;
			 break;
		 case 3:
			 cout << "특수공격2" << endl;
			 break;
		 case 4:
			 cout << "도망" << endl;
			 break;
		 default:
			 break;
		 }
	 }

	 delete chingu;
	 delete player;
 }