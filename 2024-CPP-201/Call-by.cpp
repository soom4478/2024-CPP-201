#include <iostream>

using namespace std;

void call_by_value(int* a) {
	// ���ο� �������� a�� ����� a�� ����Ű�� �ִ� ����� ���� �ٲ۴�
	*a = 10;
}

int main(void) {
	int num = 3;

	// num�� ���� �ٲ��
	call_by_value(&num);
	cout << num;
	return 0;
}