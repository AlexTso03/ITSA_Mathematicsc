// 請撰寫一個程式，輸入一個整數，計算平方值與立方值。

#include <iostream>

using namespace std;

int main () {
    int number;
    cin >> number;
    
    int square = number * number;
    int cube = number * number * number;

    cout << number << " " << square << " " << cube << endl;
}