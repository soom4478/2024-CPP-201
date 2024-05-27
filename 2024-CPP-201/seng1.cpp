#include <iostream>
#include <string>

using namespace std;

class Animal {
    string name;
    int weight;

public:
    // �⺻ ������
    Animal() { // �⺻������ �ʱ�ȭ
        cout << name << "�⺻������" << endl;
    }

    // �Ű����� ������
    Animal(const string name, int weight) : name(name), weight(weight) { // ��� �ʱ�ȭ
        cout << "Animal ����" << endl;
    }
    ~Animal() {
        cout << "Animal ����" << endl;
    }
};

class Cat : public Animal {
public:
    // �Ű����� ������
    Cat(const string name, int weight)
        : Animal() // Animal Ŭ������ �Ű����� ������ ȣ��
    {
        cout << "Cat ����" << endl;
    }
    ~Cat() {
        cout << "Cat ����" << endl;
    }
};

// `main` �Լ� ����
int main() {
    // Cat ��ü ����
    Cat cat("�̸������", 55); // �̶� Animal�� �Ű����� �����ڰ� ȣ���
    return 0;
}
