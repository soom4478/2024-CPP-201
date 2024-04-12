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
	// �����Ҵ� : heap ������ �Ҵ�. ����ð�(run time)�� �޸� ũ�� ����
	Student* juyoung = new Student(2115, "���ֿ�");
	// �����Ҵ� : stack ������ �Ҵ�. ������ �ð��� �޸� ũ�� ����
	Student jwp = Student();

	(*juyoung).print(); // ������ �켱������ ���� ()�� ����
	jwp.print();

	// �����Ҵ�� �޸� ����
	delete juyoung;
}