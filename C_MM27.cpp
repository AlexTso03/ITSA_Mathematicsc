// 試寫一個程式，輸入兩個整數，並計算兩整數間所有整數的總和。

#include <iostream>
#include <algorithm> // for swap()

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        swap(a, b);
    }

    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}
