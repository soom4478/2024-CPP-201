#include <stdio.h>

int main(void) {
	int arr[4] = {10,20,30,40};
	char str[4];

	int* pi = arr;
	char* pc = str;

	// �� �ڵ��� ����� ����
	printf("%d %d\n", (&arr[0]), (&arr[1]));	// 4����
	printf("%d %d\n\n", (arr), (arr+1));

	printf("%d %d\n", (pi), (pi + 1));	// 4����
	printf("%d %d\n", (pc), (pc + 1));	// 1����

	return 0;
}