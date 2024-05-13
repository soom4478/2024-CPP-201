#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	// ex) name : "���ֿ�"
	Student(int hakbun, char* name)
	{
		this->hakbun_ = hakbun;
		// �����Ҵ�
		name_ = new char[18];
		// �����Ҵ� �� ��ġ(name_)�� "���ֿ�"(name)�� �����Ѵ�.
		strcpy(name_, name);
		cout << "������ ȣ�� �Ϸ�" << endl;
	}
	
	Student(){}

	Student(const Student& rhs)
		: hakbun_(rhs.hakbun_)
	{
		// �ι��� ������ ���� +1
		name_ = new char[strlen(rhs.name_) + 1];
		strcpy(name_, rhs.name_);
		cout << "��������� ȣ��" << endl;
	}

	// �Ҹ��� : ��ü�� ����� ��(�޸� ������ ������ ��) ȣ��Ǵ� �Լ�
	~Student() {
		delete []name_;
		cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;
	}

	
	void print(void) {
		cout << "�й� :" << hakbun_ << " �̸� :" << name_ << endl;
	}

private:
	int hakbun_;
	char* name_;
};

void main(void) {
	Student stu = Student(2115, (char*)"���ֿ�");
	Student stu2 = stu;

}