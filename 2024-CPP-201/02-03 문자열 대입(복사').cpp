#include <stdio.h>

int main(void) {

	char str[100] = "Juyoung";
	char str2[100];

	int i = 0;
	// str�� �ִ� ������ str2�� �����ϱ�
	for (; i < str[i] != '\0'; i++) {
		str2[i] = str[i];
	}

	str2[i] = str[i];	// '\0'

	printf("%s", str2);
}