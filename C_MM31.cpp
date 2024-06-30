// 撰寫一個程式，輸入一正整數 N ， 找出 1 ～ N 的整數裡，可以被 2 與 3 整除，但不能被 12 整除的整數，並將這些數字做加總。

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0 && i % 3 == 0 && i % 12 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
