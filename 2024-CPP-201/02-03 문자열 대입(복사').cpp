#include <stdio.h>
#include <string.h>

int main(void) {

	char str[100] = "Juyoung";
	char str2[100];

	// str�� �ִ� ������ str2�� �����ϱ�
	strcpy(str2, str);

	printf("%s", str2);
}