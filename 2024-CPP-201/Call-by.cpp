#include <iostream>

using namespace std;

void call_by_value(int a) {
	// ���ο� �������� a�� ����� �ű⿡ ���� �ִ´�.
	a = 10;

}

int main(void) {
	int num = 3;

	// num�� ���� �ٳ��� �ʴ´�.
	call_by_value(num);
	cout << num;
	return 0;
}