// 試寫一個程式，輸入任意正整數N，並輸出 1*1、2*2、...、N*N 之結果。

#include <iostream>
using namespace std;

int main() {
    int N;
    
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << "*" << i << "=" << i * i << endl;
    }

    return 0;
}
