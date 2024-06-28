// 請撰寫一個程式，其可計算正方形面積。

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    double a;
    cin >> a ;

    // 四捨五入到小數第一位
    // round() : 四捨五入到個數位
    // 乘 10.0 後 round，再除 10.0 回來
    double area = round(a * a * 10.0) / 10.0;
    cout << fixed << setprecision(1) << area << endl;

    return 0;
}