//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//
//int n;
//int people[mx];
//bool visited[mx];
//
//vector<int> edge[mx];
//vector<vector<int>> dp;
//
//void good(int cur) {
//
//    // 두 가지 값을 누적하는 문제가 아니므로 visit 사용
//    if (visited[cur])
//        return;
//
//    // 일반 마을은 0, 우수 마을은 people 값
//    dp[cur][0] = 0, dp[cur][1] = people[cur];
//    visited[cur] = true;
//
//    for (auto i : edge[cur]) {
//        if (visited[i])
//            continue;
//
//        // 끝까지 dfs를 타서
//        good(i);
//
//        // 만약 현재 노드가 우수 노드라면 일반마을
//        dp[cur][1] += dp[i][0];
//
//        // 일반 마을이라면, 둘 중 하나 max
//        dp[cur][0] += max(dp[i][1], dp[i][0]);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
//
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> people[i];
//
//    for (int i = 0; i < n - 1; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        edge[a].push_back(b);
//        edge[b].push_back(a);
//    }
//
//    dp = vector<vector<int>>(mx, vector<int>(2, -1));
//
//    good(1);
//
//    cout << max(dp[1][0], dp[1][1]) << endl;
//}
////
//// Created by Mac2 on 2021/06/08.
////
//
