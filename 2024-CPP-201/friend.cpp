#include <iostream>
#include <string>

using namespace std;

// ���� ����
class Credits; // 'Student' Ŭ�������� 'Credits'�� �����ϹǷ� ���� ������ �ʿ��մϴ�

class Student {
private:  // ��� ������ �⺻������ �����
    string name;
    string major;
    string hakbun;

public:
    Student(string name, string major, string hakbun) {
        this->name = name;
        this->major = major;
        this->hakbun = hakbun;
    }

    friend void printGrade(Student, Credits); // 'printGrade' �Լ��� ���� ���� �ο�
};

class Credits {
private: // ��� ������ �⺻������ �����
    double grade;

public:
    Credits(double grade) {
        this->grade = grade;
    }

    friend void printGrade(Student, Credits); // 'printGrade' �Լ��� ���� ���� �ο�
};

void printGrade(Student a, Credits b) {
    cout << "�̸� : " << a.name << endl; // ����� ����� ����
    cout << "�а� : " << a.major << endl;
    cout << "�й� : " << a.hakbun << endl;
    cout << "���� : " << b.grade << endl; // ����� ����� ����
}

int main() {
    Student c("�ڹ̸�", "���ַ���а�", "20240505"); // Student ��ü ����
    Credits d(4.4); // Credits ��ü ����
    printGrade(c, d); // Student�� Credits ��ü ���� ���
    return 0;
}
