#include <iostream>

using namespace std;

enum FoodStyle {
    KOREAN,
    CHINESE,
    JAPANESE
};

int main(void) {
    FoodStyle style = FoodStyle::KOREAN;

    switch (style) {
    case FoodStyle::KOREAN:
        cout << "�ѽ�" << endl;
        break;
    case FoodStyle::CHINESE:
        cout << "�߽�" << endl;
        break;
    case FoodStyle::JAPANESE:
        cout << "�Ͻ�" << endl;
        break;
    }

    return 0;
}
