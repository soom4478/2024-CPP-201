#include <stdio.h>
#include <string.h>

using namespace std;

int main(void) {
	char str[100] = "Juyoung";
	// ���ڿ� �߰�
	strcat(str, " is pretty");

	printf("%s", str);
}