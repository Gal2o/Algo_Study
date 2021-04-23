//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n, m, k, cnt;
//char map[100][100];
//string dp;
//vector <vector <vector <int>>> dp(100, vector <vector <int>> (100, vector <int> (80, -1)));
//vector<pair<int, int>> st;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int dfs(pair<int, int> p, string input, int idx) {
//    if(dp[p.first][p.second][idx] != -1)
//        return dp[p.first][p.second][idx];
//
//    if (input == dp) {
//        cnt++;
//        return 1;
//    }
//
//    dp[p.first][p.second][idx] = 0;
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = 1; j <= k; j++) {
//            int ny = p.first + dy[i] * j, nx = p.second + dx[i] * j;
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
//                continue;
//
//            if (map[ny][nx] != dp[idx])
//                continue;
//
//            dfs({ny, nx}, input + string(1, map[ny][nx]), idx + 1);
//        }
//    }
//
//    return dp[p.first][p.second][idx];
//}
//
//int main() {
//
//    cin >> n >> m >> k;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> map[i][j];
//        }
//    }
//
//    cin >> dp;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (map[i][j] == dp[0])
//                st.push_back({i, j});
//        }
//    }
//
//    for (int i = 0; i < st.size(); i++) {
//        dfs(st[i], string(1, dp[0]), 1);
//    }
//
//    cout << cnt << endl;
//}
////
//// Created by Mac2 on 2021/04/16.
////
//
