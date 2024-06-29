//假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費，停車不能超過當天晚上12點。
//如果您從早上10點23分停到下午3點20分，共計4小時57分，停車費為30 X 4 + 40 X 4 + 60 = 340(元)
//請撰寫程式計算共需繳交的停車費。

#include <iostream>
using namespace std;

int main() {
    int start_hour, start_minute;
    int end_hour, end_minute;

    cin >> start_hour >> start_minute;
    cin >> end_hour >> end_minute;

    int total_minutes = (end_hour * 60 + end_minute) - (start_hour * 60 + start_minute);

    // 計算總停車時間（半小時數）
    int half_hours = total_minutes / 30; // 未滿半小時不計

    // 計算停車費
    int fee = 0;
    if (half_hours <= 4 && half_hours >= 1) {
        // 停車2小時內
        fee = half_hours * 30;
    } else if (half_hours > 4 && half_hours <= 8) {
        // 超過2小時，但未滿4小時
        fee = 4 * 30 + (half_hours - 4) * 40;
    } else if (half_hours > 8){
        // 超過4小時
        fee = 4 * 30 + 4 * 40 + (half_hours - 8) * 60;
    }
    else {}

    cout << fee << endl;

    return 0;
}
