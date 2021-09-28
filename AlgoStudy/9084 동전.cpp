//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int t, n, m, c[21];
//int dp[10001];
//
//int main() {
//    fastio
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//
//        for (int i = 1; i <= n; ++i)
//            cin >> c[i];
//
//        cin >> m;
//
//        memset(dp, 0, sizeof dp);
//
//        dp[0] = 1;
//
//        // 1부터 n까지 동전 크기 탐색
//        for (int i = 1; i <= n; i++) {
//            // i번째 동전으로 m을 만들 수 있는지 확인
//            for (int j = c[i]; j <= m; j++)
//                // 현재 금액 - 현재 동전으로 dp쌓기
//                dp[j] += dp[j - c[i]];
//        }
//
//        // dp[0] = 1 은 만약 현재 동전이 5이면 5원일 때, 무조건 1이다
//        //              현재 동전이 7일 때도 마찬가지
//        // ex. 5 7
//        //     22
//        // j = 10이면 이고 현재 동전이 5이면 j - c[i] = 5 dp[5] = dp[10] = 1
//        // j = 12이면 이고 현재 동전이 7이면 j - c[i] = 5 dp[5] = dp[12] = 1
//        // 이렇게 누적된 값을 쌓으면 된다
//        cout << dp[m] << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/26.
////
//
