#include <iostream>

using namespace std;

enum CuisineStyle {
    KOREAN = 0,
    CHINESE = 1,
    JAPANESE = 2
};

int main(void) {
    CuisineStyle style = KOREAN;

    switch (style) {
    case KOREAN:
        cout << "�ѽ�" << endl;
        break;
    case CHINESE:
        cout << "�߽�" << endl;
        break;
    case JAPANESE:
        cout << "�Ͻ�" << endl;
        break;
    }

    return 0;
}
