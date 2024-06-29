// 假設火車站的自動售票機只能接受10元、5元、以及1元的硬幣，請撰寫一個程式，算出乘客所購買票價N元車票時，所需投入各種幣值硬幣最少的數量？

#include <iostream>
using namespace std;

int main() {
    int ticket;  // 票價

    cin >> ticket;

    int nt10 = ticket / 10;  // 10元硬幣數量
    ticket %= 10;
    int nt5 = ticket / 5;    // 5元硬幣數量
    ticket %= 5;
    int nt1 = ticket;        // 1元硬幣數量

    cout << "NT10=" << nt10 << endl;
    cout << "NT5=" << nt5 << endl;
    cout << "NT1=" << nt1 << endl;

    return 0;
}