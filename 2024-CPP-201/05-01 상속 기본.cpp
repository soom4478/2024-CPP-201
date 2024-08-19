#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person(string name, int age)
		: name_(name), age_(age) 
	{
		cout << "�θ������ ȣ��" << endl;
	}
	~Person()
	{
		cout << "�θ�Ҹ��� ȣ��" << endl;
	} 
	void show_person() {
		cout << name_ << "�� ���̴� " << age_ << "�Դϴ�." << endl;
	}
	
private:
	string name_;
	int age_;
};
// Person�� �ڽ�(�Ļ�)Ŭ����
class Student : public Person {
public:
	// �θ�(�⺻)Ŭ������ �����ڰ� ���� ȣ��Ǿ�� �Ѵ�
	Student(int id, string name, int age) : Person(name, age), id_(id)
	{
		cout << "�ڽĻ����� ȣ��" << endl;
	}
	~Student()
	{
		cout << "�ڽļҸ��� ȣ��" << endl;
	}
	void show_person(void) {
		cout << "�й�" << id_ << endl;
		Person::show_person();
	}
private:
	int id_;
};

int main(void) {
	Student* s = new Student(2100, "�̸�", 18);

	s->show_person();

	delete s;
	return 0;
}