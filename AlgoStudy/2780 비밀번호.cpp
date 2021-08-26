//#include <bits/stdc++.h>
//
//#define MOD 1234567
//using namespace std;
//typedef long long ll;
//
//int t, n;
//ll answer;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//ll dp[1001][4][3];
//
//ll DFS(int n, int y, int x) {
//    // 파고들어간 깊이가 n-- => 1이면 끝
//    if (n == 1) {
//        return 1;
//    }
//
//    ll &cur = dp[n][y][x];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 0;
//
//    // 예외 처리하고 DP쌓으면 끝
//    for (int i = 0; i < 4; ++i) {
//        int ny = y + dy[i], nx = x + dx[i];
//
//        if (ny < 0 || nx < 0 || ny > 3 || nx > 2)
//            continue;
//
//        if (ny == 3 && nx > 0)
//            continue;
//
//        cur += DFS(n - 1, ny, nx);
//        cur %= MOD;
//    }
//
//    return cur;
//}
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//
//        answer = 0;
//        memset(dp, -1, sizeof dp);
//
//        // 1부터 0까지 인덱스는 몫과 나머지 하면 딱 맞는다
//        for (int i = 0; i < 10; ++i) {
//            answer += DFS(n, i / 3, i % 3);
//        }
//
//        cout << answer % MOD << '\n';
//    }
//}
////
//// Created by Mac2 on 2021/08/25.
////
//
