// 撰寫一個程式，要求使用者輸入兩個數字，再從使用者取得這兩個數
// 字，然後印出這兩個數字的總和、乘積、差、商、和餘數。

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // 加法
    cout << a << "+" << b << "=" << (a + b) << endl;

    // 乘法
    cout << a << "*" << b << "=" << (a * b) << endl;

    // 減法
    cout << a << "-" << b << "=" << (a - b) << endl;

    // 除法，並計算餘數
    int quotient = a / b;
    int remainder = a % b;

    if(remainder < 0) {
        // 易錯，若餘數為負數，要讓餘數變回正數
        cout << a << "/" << b << "=" << quotient - 1 << "..." << remainder + b << endl;
    }
    else {
        cout << a << "/" << b << "=" << quotient << "..." << remainder << endl;
    }
    

    return 0;
}
