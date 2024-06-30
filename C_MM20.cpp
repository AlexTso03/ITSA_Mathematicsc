// 十進位轉十六進位

#include <iostream>
#include <iomanip> // 用於設置輸出格式
using namespace std;

int main() {
    int num;

    while (cin >> num) {
        // 設置輸出格式為十六進位，並將字母大寫
        cout << hex << uppercase << num << endl;
    }

    return 0;
}
