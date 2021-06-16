//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//
//int n;
//int w[mx], dp[mx][2], visited[mx];
//vector<int> edge[mx], ans;
//
//void dfs(int cur) {
//    if (visited[cur])
//        return;
//
//    dp[cur][0] = 0, dp[cur][1] = w[cur];
//    visited[cur] = true;
//
//    for (auto next : edge[cur]) {
//        if (visited[next])
//            continue;
//
//        dfs(next);
//
//
//        // 1은 다음 노드 포함 하지 않음 (독립 집합)
//        dp[cur][1] += dp[next][0];
//
//        // 0은 포함 or 안포함
//        dp[cur][0] += max(dp[next][0], dp[next][1]);
//    }
//}
//
//// 몰랐던 부분, 역으로 독립 집합 찾기
//void trace(int cur, int prev, int sel) {
//    if (sel) { // 포함인 경우
//        ans.push_back(cur);
//
//        for (auto next : edge[cur]) {
//            if (next == prev) continue;
//
//            // 인접합 노드는 없어야 하므로 다음 노드는 무조건 안포함
//            trace(next, cur, 0);
//        }
//    } else {
//        for (auto next : edge[cur]) {
//            if (next == prev) continue;
//
//            // 처음 시작 조건과 동일
//            if (dp[next][0] < dp[next][1])
//                trace(next, cur, 1);
//            else
//                trace(next, cur, 0);
//        }
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
//        cin >> w[i];
//
//    for (int i = 0; i < n - 1; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        edge[a].push_back(b);
//        edge[b].push_back(a);
//    }
//
//    dfs(1);
//
//    cout << max(dp[1][0], dp[1][1]) << endl;
//
//    /* 적어서 값을 비교해 보면
//     *          1 (130, 140)
//     *          2 (130, 120)
//     *  3 (20, 60)      6 (70, 20)
//     *  4 (20, 10)      7 (0, 70)
//     *  5 (0, 20)
//     *
//     *  이런 식으로 dp테이블을 채울 수 있다.
//     *  답이 되는 부분은 dp[0][1] < dp[1][1] 이므로
//     *  역추적을 하면서 ans에 노드 번호를 담아주면 된다.
//    */
//    if (dp[1][0] < dp[1][1]) // 양방향 이므로 어느 노드를 들어가도 상관없음. 1 시작
//        trace(1, 0, 1); // 독립 집합에 포함
//    else
//        trace(1, 0, 0); // 포함 X
//
//    sort(ans.begin(), ans.end());
//    for (auto i : ans)
//        cout << i << ' ';
//}
////
//// Created by Mac2 on 2021/06/09.
////
//
