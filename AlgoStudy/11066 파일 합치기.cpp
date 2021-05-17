//#include <iostream>
//#include <vector>
//
//#define mx 5000002
//
//using namespace std;
//int t, k;
//int file[501];
//int sum[501];
//int dp[501][501];
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        cin >> k;
//
//        for (int i = 1; i <= k; i++)
//            cin >> file[i];
//
//        for (int i = 1; i <= k; i++) { // 파일의 합친 횟수
//            for (int j = 1; j <= i; j++) {
//                int next1 = j + 1;
//                sum[j] = min(sum[j], file[j] + file[j + 1]);
//
//                for (int t = next1 + 1; t < k; t++) {
//                    int next2 = t + 1;
//                }
//            }
//        }
//
//    }
//
//}
////
//// Created by Mac2 on 2021/05/05.
////
//
