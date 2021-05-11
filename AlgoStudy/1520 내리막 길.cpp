//#include <iostream>
//#include <vector>
//
//#define mx 10001
//using namespace std;
//int n, m, map[500][500];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//vector<vector<int>> dp(500, vector<int>(500, -1));
//
//void dfs(int y, int x) {
//    // 제일 끝점은 무조건 1
//    if (y == n - 1 && x == m - 1) {
//        dp[y][x] = 1;
//        return;
//    }
//
//    // 방문 했었으면 return
//    if (dp[y][x] != -1)
//        return;
//
//    // 방문 표시
//    dp[y][x] = 0;
//
//    for (int i = 0; i < 4; i++) {
//        int ny = y + dy[i], nx = x + dx[i];
//
//        if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
//            continue;
//
//        if (map[ny][nx] < map[y][x]) {
//            dfs(ny, nx);
//
//            // 메모이제이션
//            dp[y][x] += dp[ny][nx];
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            cin >> map[i][j];
//
//    dfs(0, 0);
//
//    cout << dp[0][0] << endl;
//}
////
//// Created by Mac2 on 2021/05/05.
////
//
