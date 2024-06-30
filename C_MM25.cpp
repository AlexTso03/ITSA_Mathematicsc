// 試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
