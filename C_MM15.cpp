// 有一正方形，長、寬均為100，且起始座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在正方形的範圍內。如果「點」的位置剛好在邊界的話也算是在正方形範圍內(例：x=100，y=10)。

#include <iostream>
using namespace std;

int main() {
    int x, y;

    while (cin >> x >> y) {
        // 判斷點是否在正方形範圍內
        if (x >= 0 && x <= 100 && y >= 0 && y <= 100) {
            cout << "inside" << endl;
        } else {
            cout << "outside" << endl;
        }
    }

    return 0;
}
