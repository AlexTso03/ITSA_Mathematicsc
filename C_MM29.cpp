// 試撰寫一個程式，可輸入一個整數，並找出小於此數的最大質數。

#include <iostream>
#include <cmath>

using namespace std;

// 檢查一個數是否為質數
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    // 從N-1開始尋找最接近且小於N的質數
    for (int i = N - 1; i >= 1; i--) {
        if (isPrime(i)) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
