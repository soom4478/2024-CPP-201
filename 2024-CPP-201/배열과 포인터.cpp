#include <stdio.h>

int main(void) {
	int arr[4];
	char str[4];

	// 4����Ʈ ����(x86���� ��ġ�ϸ� �� ����)
	printf("%d %d\n", &arr[0], &arr[1]);
	// 1����Ʈ ����
	printf("%d %d\n", &str[0], &str[1]);

	return 0;
}