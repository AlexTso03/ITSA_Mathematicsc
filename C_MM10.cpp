// 請撰寫一個程式，依據代表攝氏溫度的變數ｃ的值，顯示華氏溫度(已知攝氏溫度等於華氏溫度減32度再乘上5/9)。

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double celsius;
    cin >> celsius;

    double fahrenheit = celsius * 9 / 5 + 32;
    
    // 設置輸出格式為固定小數點表示法，並保留一位小數
    cout << fixed << setprecision(1) << fahrenheit << endl;

    return 0;
}