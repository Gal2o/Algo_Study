//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, answer = 1e9;
//int arr[1001][3];
//int dp[1001][3];
//
//int dfs(int cnt, int now) {
//    if (cnt == n)
//        return dp[cnt][now] = arr[cnt][now];
//
//    int &cur = dp[cnt][now];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 1e9;
//    for (int i = 0; i < 3; i++) {
//        if (i != now)
//            cur = min(cur, dfs(cnt + 1, i) + arr[cnt][now]);
//    }
//
//    return cur;
//}
//
//int main() {
//    fastio
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    memset(dp, -1, sizeof dp);
//    for (int i = 0; i < 3; i++)
//        dfs(0, i);
//
//    for (int i = 0; i < 3; i++)
//        answer = min(dp[1][i], answer);
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/10/04.
////
//
