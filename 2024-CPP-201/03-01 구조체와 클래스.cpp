#include <iostream>
#include <string>
using namespace std;

// Ŭ������ ����Ʈ�� private
class Student {
public:
	// ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	// ��ȯ���� ����.
	Student(int hakbun, string name)
		: hakbun_(hakbun), name_(name)	// �ʱ�ȭ�� ���ÿ� (const�� �� �� �ִ�)
	{
	}

	// ������ �����ε�
	Student() 
		: hakbun_(2121), name_("JWP")
	{
	}

	// ��ü�� ����� ����ϴ� �Լ�
	void print(void) {
		cout << "�й� :" << hakbun_ << " �̸� :" << name_ << endl;
	}

private:
	int hakbun_;
	string name_;
};

void main(void) {
	Student* stu = new Student[3]{
		{2115, "���ֿ�"},
		{2121, "JWP"},
		{2104, "�����"}
	};

	for (int i = 0; i < 3; i++) {
		stu[i].print();
	}

	// �����Ҵ�� �迭 ����
	delete []stu;
}