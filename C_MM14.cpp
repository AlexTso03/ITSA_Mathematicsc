// 寫一程式要求使用者輸入代表秒數的整數值，並且經計算以天數、小時數、分鐘數、與秒數的組合來顯示對等的時間值。請使用符號常數表示一天內的小時數；一小時內的分鐘數，以及一分鐘內的秒數。

#include <iostream>
using namespace std;

int main() {

    long long total_seconds;

    cin >> total_seconds;

    // 計算天數
    int days = total_seconds / (60 * 60 * 24);
    total_seconds %= (60 * 60 * 24);

    // 計算小時數
    int hours = total_seconds / (60 * 60);
    total_seconds %= (60 * 60);

    // 計算分鐘數
    int minutes = total_seconds / 60;

    // 剩餘的秒數
    int seconds = total_seconds % 60;

    // 輸出結果
    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;

    return 0;
}
