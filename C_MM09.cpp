// 請撰寫一個程式，計算2的ｉ次方的值。(提示：利用位移運算元)

#include <iostream>

using namespace std;

int main () {
    int a, b = 1;
    cin >> a;

    if(a > 31) {
        cout << "Value of more than 31" << endl;
    }
    else {
        // 位元運算：每左移1單位等於乘2
        b = b << a;
        cout << b << endl;
    }

    return 0;
}