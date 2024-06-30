// 試寫一個程式，讓使用者輸入任意正整數 N ，可計算出 1 到 N 之間屬於 5 和 7 的倍數的數值。

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            if(i == 35) {
                cout << i;
            }
            else {
                // 若是35後的數字，前面要加空格
                cout << " " << i;
            }
        }
    }
    cout << endl;

    return 0;
}
