#include <stdio.h>

int main(void) {
	int arr[4];
	char str[4];

	// 4����Ʈ ����(x86���� �����ϸ� �� ����)
	printf("%d %d\n", &arr[0], &arr[1]);
	// ���� �ڵ�� ����� ����
	printf("%d %d\n", arr, arr+1);

	return 0;
}