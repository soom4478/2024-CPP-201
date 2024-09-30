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
        cout << "한식" << endl;
        break;
    case FoodStyle::CHINESE:
        cout << "중식" << endl;
        break;
    case FoodStyle::JAPANESE:
        cout << "일식" << endl;
        break;
    }

    return 0;
}
