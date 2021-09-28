//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, t;
//int d[101], s[101];
//int dp[101][10001];
//
//int main() {
//    cin >> n >> t;
//
//    for (int i = 1; i <= n; ++i)
//        cin >> d[i] >> s[i];
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= t; ++j) {
//            // 각 공부시간으로 dp 채우기
//            if (d[i] <= j)
//                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - d[i]] + s[i]);
//            else
//                dp[i][j] = dp[i - 1][j];
//        }
//    }
//
//    cout << dp[n][t] << endl;
//}
////
//// Created by Mac2 on 2021/09/26.
////
//
