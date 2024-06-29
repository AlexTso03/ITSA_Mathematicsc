// 假設你步行的速度為每秒1公尺，而你朋友小華在你前方，步行的速度則為每秒30英吋，然而你需要幾秒鐘才能超越小華呢?(1英吋=2.54公分)。

#include <iostream>
#include <cmath> // 用於無條件進位的ceil函數
using namespace std;

int main() {
    int distance;
    cin >> distance;

    // 計算小華的速度，單位為公尺/秒
    double speed_hua = 30 * 2.54 / 100;  // 30 英吋轉換為公分，再轉換為公尺
    
    // 計算超越小華所需的秒數
    // 我的速度為 1 公尺/秒，小華的速度為 speed_hua 公尺/秒
    double time = distance / (1 - speed_hua);
    
    // 使用ceil函數進行無條件進位，並輸出結果
    cout << ceil(time) << endl;

    return 0;
}