#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str = "Juyoung";
	// ���ڿ� ���� ('\0'�� ������ ����)
	cout << str.size() << endl;
	cout << str.length() << endl;
}