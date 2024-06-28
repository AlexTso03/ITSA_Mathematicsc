// 請寫一個程式，讀入兩個數字，並求出它們的和。

#include <iostream>

using namespace std;

int main () {
    int a, b;

    // 輸入有多組測資，每一列為一組測資
    while (cin >> a >> b) {
        cout << a + b << endl;
    }

    return 0;
}