#include <iostream>
#include <map>
#include <string>

using namespace std;

void main(void) {

	map<string, int> guardian;
	

	// ��� �߰�
	guardian["���"] = 939;
	guardian["����Ź"] = 19;
	guardian["���»���"] = 300;
	guardian["���"] = 29;
	guardian["����ȭ"] = 25;

	// ��� ����
	cout << "����� ���� : " << guardian["���"] << endl;
	cout << "���»����� ���� : " << guardian["���»���"] << endl;

	// ��� ����
	guardian["����Ź"] = 29;

	// ��� ����
	cout << guardian.size() << endl;

	// ��� ��� ���(first:key, second:value)
	map<string, int>::iterator iter;
	for (iter = guardian.begin(); iter!= guardian.end(); iter++)
		cout << iter->first << "�� " << iter->second << "��" << endl;
}