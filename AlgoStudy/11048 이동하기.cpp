//#include <iostream>
//
//using namespace std;
//int n, m;
//int map[1001][1001], dp[1001][1001];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= m; j++)
//            cin >> map[i][j];
//
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            for (int d = 0; d < 4; d++) {
//                int ny = i + dy[d], nx = j + dx[d];
//
//                if (ny < 1 || nx < 1 || ny > n || nx > m)
//                    continue;
//
//                dp[i][j] = max(dp[i][j], dp[ny][nx] + map[i][j]);
//            }
//        }
//    }
//
//    cout << dp[n][m] << endl;
//}
////
//// Created by Mac2 on 2021/05/07.
////
//
