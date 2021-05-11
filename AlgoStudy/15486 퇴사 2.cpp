//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int n, t, p;
//pair<int, int> v[1500002];
//int dp[1500002];
//
//int main() {
//    cin >> n;
//
//    dp[0] = -1;
//
//    for (int i = 1; i <= n; i++) {
//        scanf("%d %d", &t, &p);
//
//        v[i] = {t, p}; // 상담이 걸리는 기간, 받는 금액
//    }
//
//    // 뒤에서 부터 확인해야 값을 점점 쌓을 수 있다.
//    for (int i = n ; i > 0; i--) {
//        // 현재 날짜 + 상담 걸리는 날 > 퇴사일 (N + 1) 보다 크면 dp[i + 1]이 가장 크다.
//        if (v[i].first + i > n + 1)
//            dp[i] = dp[i + 1];
//        else {
//            // 현재 날짜 + 상담 걸리는 날이 <= N + 1 이면
//            // 상담 마치면 받는 금액 + 상담 마쳤던 dp, dp[i + 1] 중에 큰 값.
//            dp[i] = max(dp[i + v[i].first] + v[i].second, dp[i + 1]);
//        }
//    }
//
//    cout << dp[1] << endl;
//}
////
//// Created by Mac2 on 2021/05/04.
////
//
