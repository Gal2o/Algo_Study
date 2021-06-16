//#include <bits/stdc++.h>
//
//#define mx 1000001
//using namespace std;
//
//int n, a, b;
//vector<vector<int>> dp;
//vector<int> ed[mx];
//
//int dfs(int prev, int now, int sel) {
//    if (dp[now][sel] != -1)
//        return dp[now][sel];
//
//    int tmp = 0;
//
//    // 얼리어답터 이다.
//    // 다음 노드는 얼리어답터가 아니다.
//    if (sel) {
//        for (int i = 0; i < ed[now].size(); i++) {
//            if (ed[now][i] == prev)
//                continue;
//
//            tmp += dfs(now, ed[now][i], 0);
//        }
//
//        return dp[now][sel] = tmp;
//    } else {
//        // 얼리 어답터가 아니다.
//        // 다음 노드가 얼리어답터 or 아닐 수도
//        for (int i = 0; i < ed[now].size(); i++) {
//            int next = ed[now][i];
//
//            if (next == prev)
//                continue;
//
//            // 얼리어답터 or 아님 중 최솟값
//            tmp += min(dfs(now, next, 0), dfs(now, next, 1));
//        }
//        // 자신 노드 + 1
//        return dp[now][sel] = tmp + 1;
//    }
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n - 1; i++) {
//        scanf("%d %d", &a, &b);
//
//        ed[a].push_back(b);
//        ed[b].push_back(a);
//    }
//
//    dp = vector<vector<int>>(mx, vector<int>(2, -1));
//
//    // 양방향 그래프로 잡고 하므로 어느 노드를 잡아도 dp를 쌓을 수 있다.
//    cout << min(dfs(-1, 1, 0), dfs(-1, 1, 1)) << endl;
//}
////
//// Created by Mac2 on 2021/05/28.
////
//
