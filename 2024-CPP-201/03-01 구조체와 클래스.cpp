#include <iostream>
#include <string>
using namespace std;

// Ŭ������ ����Ʈ�� private
class Student {
public:
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}
private:
	// ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	// ��ȯ���� ����.
	int hakbun_;
	string name_;
};

void main(void) {
	// �Ű������� ���� ������ ȣ��
	// Student juyoung = Student();
	Student juyoung = Student(2115, "���ֿ�");
}