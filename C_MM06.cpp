// 試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
// 1 英哩= 1.6 公里

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int mile;
    cin >> mile;

    double km = mile * 1.6;
    cout << fixed << setprecision(1) << km << endl;

    return 0;
}