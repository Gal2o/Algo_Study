//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//typedef pair<int, int> pl;
//
//vector<pl> ed[mx];
//int dp[mx];
//bool visited[mx];
//int cnt = 0, ans;
//
//// 트리 dp로 풀면 된다.
//void dfs(int node, int val) {
//    if (visited[node])
//        return;
//
//    visited[node] = true;
//    dp[node] = val;
//
//    for (auto n : ed[node]) {
//        if (visited[n.first])
//            continue;
//
//        dfs(n.first, n.second + val);
//
//        dp[node] = max(val, dp[node]);
//    }
//
//    if (dp[node] > ans)
//        ans = dp[node];
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
//
//    string s;
//
//    while (getline(cin, s)) { // 입력의 끝이 어디일지 모를 때 이렇게 쓰면 된다.
//        if (s.empty()) // 입력 값이 없으면 종료
//            break;
//
//        stringstream os(s); // stringstream은 알아서 int형으로 파싱 해준다.
//
//        int a, b, c;
//        os >> a >> b >> c;
//
//        ed[a].push_back({b, c});
//        ed[b].push_back({a, c});
//
//        cnt++;
//    }
//
//    memset(dp, -1, sizeof(dp));
//
//    // 어느 것이 루트인지 몰라서 입력 받은 값 중 최대 까지 다 돌면서 dp 돌기
//    for (int i = 1; i <= cnt; i++) {
//        memset(visited, 0, sizeof(visited)); // visited 초기화 하고
//        dfs(i, 0); // 루트의 합은 0으로 dp 시작
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/14.
////
//
