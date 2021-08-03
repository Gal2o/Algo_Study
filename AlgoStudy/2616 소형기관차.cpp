//#include <bits/stdc++.h>
//
//#define mx 50001
//using namespace std;
//int n, m, answer;
//int sum[mx];
//
//// dp[i][j] => 소형기관차 i개가 있을 때, j 객체를 골랐을 때, 최대 운송 승객
//int dp[4][mx];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        int temp;
//        cin >> temp;
//
//        // 누적합 쌓기
//        sum[i] = sum[i - 1] + temp;
//    }
//
//    cin >> m;
//
//    // 열차는 세개
//    for (int i = 1; i <= 3; i++) {
//        // m개 만큼 연속되어야 하니까 i * m 이 시작부분이다
//        for (int j = i * m; j <= n; j++) {
//            // 점화식
//            // dp[i][j] 는
//            // 이전 최대값 -> dp[i][j - 1]
//            // 현재 선택한 객실 j의 구간합 -> sum[j] - sum[j-m]
//            // 이전 소형기관차가 객실 j-m 까지 봤을 때, 최대값 -> dp[i - 1][j - m]
//            dp[i][j] = max(dp[i][j - 1],
//                           dp[i - 1][j - m] + sum[j] - sum[j - m]);
//        }
//    }
//
//    cout << dp[3][n] << endl;
//}
////
//// Created by Mac2 on 2021/08/03.
////
//
