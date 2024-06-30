// 試寫一個程式，有一家電信公司的計費方式：每個月打800分鐘以下(含第800分鐘)，每分鐘0.9元；撥打時間介於800分鐘～1500分鐘時，所有電話費以9折計算
// ；若是打1500分鐘以上(含第1500分鐘)，則通話費將以79折計算，並於顯示其通話費用。

#include <iostream>
#include <iomanip> // 用於控制輸出格式
using namespace std;

int main() {
    int minutes;
    double cost;

    cin >> minutes;

    if (minutes <= 800) {
        cost = minutes * 0.9;
    } else if (minutes > 800 && minutes < 1500) {
        cost = minutes * 0.9 * 0.9;
    } else {
        cost = minutes * 0.9 * 0.79;
    }

    // 設置輸出格式，保留小數點後一位
    cout << fixed << setprecision(1) << cost << endl;

    return 0;
}
