#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str = "Juyoung";
	// 문자열 길이 ('\0'을 따지지 않음)
	cout << str.size() << endl;
	cout << str.length() << endl;
}