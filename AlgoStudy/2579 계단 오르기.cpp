//#include <iostream>
//
//using namespace std;
//
//int n;
//int stair[301], answer[301];
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> stair[i];
//
//    answer[1] = stair[1]; // 첫번째 계단의 최대치는 첫번째 계단이 최대치
//    answer[2] = stair[1] + stair[2]; // 두번째 계단의 최대치는 1 + 2 계단이 최대치
//
//    for (int i = 3; i <= n; i++) {
//        // 1. 마지막 계단 전의 계단을 밟은 경우 -> 전전칸 총합 + 현재칸
//        // 2. 마지막 계단 전의 계단을 밟지 않은 경우 -> 전전전칸 총합 + 전칸 + 현재칸
//        answer[i] = max(answer[i - 3] + stair[i - 1] + stair[i], answer[i - 2] + stair[i]);
//    }
//
//    cout << answer[n] << endl;
//}
//
////
//// Created by Mac2 on 2021/04/19.
////
//
