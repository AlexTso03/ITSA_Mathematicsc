// 輸入兩個數字，找出它們的最大公因數

#include <iostream>
using namespace std;

// 函數用於計算兩個數字的最大公因數
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    cout << gcd(num1, num2) << endl;

    return 0;
}
