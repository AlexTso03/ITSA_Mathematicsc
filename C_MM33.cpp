// 一個數如果恰好等於它的因數之和，這個數就稱為 " 完美數 " （ perfect number ）。例如 6=1 ＋ 2 ＋ 3 ，因 1 、 2 與 3 都是 6 的因數
// ，因而 6 是完美數。試撰寫一程式，輸入一個正整數 N ，找 1~N 的完美數。

#include <iostream>

using namespace std;

// 檢查一個數是否為完美數
bool isPerfectNumber(int num) {
    if (num <= 1) return false;

    int sum = 1; // 1 是所有正整數的因數
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        if (isPerfectNumber(i)) {
            if(i == 6) {
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
