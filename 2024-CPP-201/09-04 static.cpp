#include <iostream>
#include <string>

using namespace std;

class PrettyJ {
private:
	static int num_;
	int gam_;
	string name_;

public:
	PrettyJ(int gam, string name) : gam_(gam), name_(name) { num_++; }
	static int get_num(void) { return num_; }
	static int get_num(void) {
		// gam_++; // static ����Լ����� �Ϲ� ��������� �� �� ����.
		return num_;
	}
	int get_gam(void) { return gam_; }
	int* get_address_gam(void) { return &gam_;}
	int* get_address_num(void) { return &num_; }
};
// static ������� �ʱ�ȭ
int PrettyJ::num_ = 0;

void main(void) {
	PrettyJ* jihye = new PrettyJ(508, "����");
	PrettyJ* juyoung = new PrettyJ(509, "�ֿ�");
	PrettyJ* jungmin = new PrettyJ(716, "����");
	cout << "���� ��� �ο��� : " << PrettyJ::get_num() << endl;

	PrettyJ* jiwoo = new PrettyJ(601, "����");
	cout << "���� ��� �ο��� : " << PrettyJ::get_num() << endl;

	cout << "���� gam�� �ּ�" << jihye->get_address_gam() << endl;
	cout << "�ֿ� gam�� �ּ�" << juyoung->get_address_gam() << endl;
	cout << "���� gam�� �ּ�" << jungmin->get_address_gam() << endl;
	cout << "���� gam�� �ּ�" << jiwoo->get_address_gam() << endl << endl;

	cout << "���� num�� �ּ�" << jihye->get_address_num() << endl;
	cout << "�ֿ� num�� �ּ�" << juyoung->get_address_num() << endl;
	cout << "���� num�� �ּ�" << jungmin->get_address_num() << endl;
	cout << "���� num�� �ּ�" << jiwoo->get_address_num() << endl << endl;


	delete jiwoo;
	delete jungmin;
	delete juyoung;
	delete jihye;
}