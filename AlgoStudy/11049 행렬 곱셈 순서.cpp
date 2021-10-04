//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//int n, r, c;
//pl arr[501];
//int dp[501][501];
//
//int dfs(int s, int e) {
//    if (s == e)
//        return dp[s][e] = 0;
//
//    int &cur = dp[s][e];
//
//    if (cur != 1e9)
//        return cur;
//
//    // 의외로 많이 나오는 형태, 시작 끝에서 s e 만날때까지 dp파기
//    for (int i = s; i <= e; i++)
//        dp[s][e] = min(dp[s][e],
//                       dfs(s, i) + dfs(i + 1, e)
//                       + arr[s].first * arr[i + 1].first * arr[e].second);
//
//    return cur;
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i) {
//        cin >> r >> c;
//        arr[i] = {r, c};
//    }
//
//    fill(&dp[0][0], &dp[n][n + 1], 1e9);
//    cout << dfs(1, n) << endl;
//}
////
//// Created by Mac2 on 2021/10/04.
////
//
