#include <iostream>
#include <string>
using namespace std;

// ����ü�� ����Ʈ�� public
struct Student {
	int hakbun_;
	string name_;
};

void main(void) {
	struct Student juyoung;

	juyoung.hakbun_ = 2115;
	juyoung.name_ = "���ֿ�";
}