// 有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。

#include <iostream>
#include <cmath> // 用於計算平方和平方根
using namespace std;

int main() {
    int x, y;
    const int radius = 100; // 圓的半徑為 200/2=100

    while (cin >> x >> y) {
        // 計算點(x, y)到圓心(0, 0)的距離
        double distance = sqrt(x * x + y * y);

        // 判斷點是否在圓形範圍內
        if (distance <= radius) {
            cout << "inside" << endl;
        } else {
            cout << "outside" << endl;
        }
    }

    return 0;
}
