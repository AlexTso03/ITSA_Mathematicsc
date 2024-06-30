// 所謂 " Armstrong數 " 是指一個三位數的整數，其各位數字之立方和等於該數本身。例如： 153 是一個  Armstrong數，因為 153 =1 3 + 53 + 33 。
// 試撰寫一程式，判斷是否為  Armstrong 數。

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cin >> num;

    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if (sum == originalNum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
