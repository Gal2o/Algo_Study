//#include <bits/stdc++.h>
//
//#define mx 100001
//#define k 17 // mx <= 2^n 의 최소 값 2^17 = 131072
//using namespace std;
//
//int n, m, a, b;
//vector<vector<int>> dp(mx, vector<int>(k, 1e9 + 1));
//
//// Range Minimum Queries (RMQ)
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> dp[i][0];
//    }
//
//    for (int j = 1; j < k; j++) {
//        for (int i = 1; i <= n; i++) {
//            if (i + (1 << (j - 1)) <= n) // Out Of Bounds 방지
//                // sparse table 만들기
//                // 구간 최소값 저장
//                dp[i][j] = min(dp[i][j - 1], dp[i + (1 << (j - 1))][j - 1]);
//        }
//    }
//
//    for (int i = 0; i < m; i++) {
//        cin >> a >> b;
//
//        // b 와 a의 구간 길이는 b - a + 1
//        int x = (int) log2(b - a + 1);
//
//        cout << min(dp[a][x], dp[b - (1 << x) + 1][x]) << "\n";
//    }
//}
////
//// Created by Mac2 on 2021/07/20.
////
//
