// 試撰寫一程式，由鍵盤輸入一個正整數，然後求其所有的因數，例如輸入 24 ，則印出 24 的所有因數 1 、 2 、 3 、 4 、 6 、 8 、 12 與 24 。

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            if(i == 1) {
                cout << i;
            }
            else {
                cout << " " << i;
            }
        }
    }
    cout << endl;

    return 0;
}
