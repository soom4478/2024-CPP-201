#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	// ex) name : "���ֿ�"
	Student(int hakbun, char* name)
		: hakbun_(hakbun), name_(name)
	{
		this->hakbun_ = hakbun;
		// �����Ҵ�
		name_ = new char[18];
		// �����Ҵ� �� ��ġ(name_)�� "���ֿ�"(name)�� �����Ѵ�.
		strcpy(name_, name);
		cout << "������ ȣ�� �Ϸ�" << endl;
	}
	
	Student(){}

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
	Student* stu = new Student(2115, (char*)"���ֿ�");

	cout << "���ʱ���" << endl;

	delete stu;

	cout << "��������" << endl;
}