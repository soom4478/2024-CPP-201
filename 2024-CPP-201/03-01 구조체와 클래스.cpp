#include <iostream>
#include <string>
using namespace std;

// Ŭ������ ����Ʈ�� private
class Student {
	int hakbun_;
	string name_;
};

void main(void) {
	struct Student juyoung;

	juyoung.hakbun_ = 2115;	// ����
	juyoung.name_ = "���ֿ�";
}