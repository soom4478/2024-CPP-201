#include <iostream>
using namespace std;

int main(void) {
	int num = 3;
	cout << num << endl;				// 3 (������ ����ִ� ��)
	cout << &num << endl;				// ������ �޸� ������ �Ҵ�Ǿ� �ִ� �ּ�

	int arr[5] = { 10,20,30,40,50 };
	cout << arr << endl;				// �迭�� �޸� ������ �Ҵ�Ǿ� �ִ� �ּ�

	return 0;
}