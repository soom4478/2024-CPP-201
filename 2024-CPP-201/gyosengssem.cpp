#include <iostream>
#include <string>

using namespace std;

class Animal {
    string name;
    int weight;

public:
    // �⺻ ������
    Animal() { // �⺻������ �ʱ�ȭ
    }

    // �Ű����� ������
    Animal(const string name, int weight) : name(name), weight(weight) { // ��� �ʱ�ȭ
        cout << " Animal �θ� Ŭ����" << endl;
    }

    ~Animal() {
        cout << " Animal �Ҹ� " << endl;
    }
};

class Cat : public Animal {
public:
    // �Ű����� ������
    Cat(const string name, int weight)
        : Animal(name, weight) // Animal Ŭ������ �Ű����� ������ ȣ��
    {
        cout << " Cat ���� " << endl;
    }
    ~Cat() {
        cout << " Cat �Ҹ� " << endl;
    }
};

// `main` �Լ� ����
int main() {
    // Cat ��ü ����
    Cat cat("�̸������", 55); // �̶� Animal�� �Ű����� �����ڰ� ȣ���
    return 0;
}
