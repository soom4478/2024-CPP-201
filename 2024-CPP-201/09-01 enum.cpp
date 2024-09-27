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
        cout << "한식" << endl;
        break;
    case CHINESE:
        cout << "중식" << endl;
        break;
    case JAPANESE:
        cout << "일식" << endl;
        break;
    }

    return 0;
}
