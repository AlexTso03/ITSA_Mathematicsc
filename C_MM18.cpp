// 撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。

#include <iostream>
#include <bitset> // 用於處理二進制表示
using namespace std;

int main() {
    int num;

    cin >> num;

    // 使用 bitset 將整數轉換為 8 位二進制表示(前面補 0)
    bitset<8> binary(num);

    cout << binary << endl;

    return 0;
}
