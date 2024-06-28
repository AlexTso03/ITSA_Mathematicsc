// 請以 JAVA 運算式計算下面梯形面積，並輸出面積結果。 
// 梯形面積公式為：（上底 + 下底） × 高 ÷ 2 。

#include <iostream>
// 用setprecision
#include <iomanip>

using namespace std;

int main () {
    int top, bottom, height;
    cin >> top >> bottom >> height;

    double area = (top + bottom) * height / 2.0;
    // 四捨五入取到小數點第一位
    // fixed：這是個操縱符，表示輸出浮點數時使用固定小數點表示法，而不是科學記數法。
    // setprecision()：這個操縱符設置浮點數輸出的精度，即小數點後顯示的位數。
    cout << fixed << setprecision(1) << "Trapezoid area:" << area << endl;

    return 0;
}