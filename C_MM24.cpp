// 試寫一個程式，讓使用者可輸入整月的工時數及每月的固定時薪，並將其所應獲得的工資顯示在螢幕上。工資計算方法如下：

// (1) 60 小時 ( 含 ) 以下的薪水部份，以固定時薪計算。 
// (2) 61 ～ 120 小時之間的薪水部份，以固定時薪的 1.33 倍計算。 
// (3) 第 121 小時以上的薪水部份，以固定時薪的 1.66 倍計算。

#include <iostream>
#include <iomanip> // 用於控制輸出格式
using namespace std;

int main() {
    int hours, wage;

    while (cin >> hours >> wage) {
        double salary = 0.0;

        if (hours <= 60) {
            salary = hours * wage;
        } else if (hours > 60 && hours <= 120) {
            salary = 60 * wage + (hours - 60) * wage * 1.33;
        } else {
            salary = 60 * wage + 60 * wage * 1.33 + (hours - 120) * wage * 1.66;
        }

        cout << fixed << setprecision(1) << salary << endl;
    }

    return 0;
}
