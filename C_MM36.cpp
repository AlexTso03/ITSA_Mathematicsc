// 試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

#include <iostream>

using namespace std;

int main() {
    int month;
    cin >> month;

    switch (month) {
        case 3:
        case 4:
        case 5:
            cout << "Spring" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Summer" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Autumn" << endl;
            break;
        case 12:
        case 1:
        case 2:
            cout << "Winter" << endl;
            break;
        default:
            cout << "Invalid month entered!" << endl;
    }

    return 0;
}
