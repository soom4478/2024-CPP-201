#include <iostream>
#include <string>
using namespace std;

// Ŭ������ ����Ʈ�� private
class Student {
public:
	// ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	// ��ȯ���� ����.
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}

	// ������ �����ε�
	Student() {
		hakbun_ = 2121;
		name_ = "JWP";
	}
private:
	int hakbun_;
	string name_;
};

void main(void) {
	Student juyoung = Student(2115, "���ֿ�");
	Student jwp = Student();
}