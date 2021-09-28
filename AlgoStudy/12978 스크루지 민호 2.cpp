//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 100001
//using namespace std;
//
//vector<int> ed[mx];
//
//int n, answer;
//int dp[2][mx];
//
//int DFS(int prev, int now, int flag) {
//    int &cur = dp[flag][now];
//
//    if (dp[flag][now] != -1)
//        return dp[flag][now];
//
//    cur = 0;
//
//    // 경찰서 설치
//    if (flag) {
//        for (auto n: ed[now]) {
//            if (prev == n)
//                continue;
//
//            // 다음은 설치 안함
//            cur += DFS(now, n, 0);
//        }
//
//        return cur;
//
//    } else { // 설치 안했다면, 설치한다
//        for (auto n: ed[now]) {
//            if (prev == n)
//                continue;
//
//            // 분기를 두개 나눠서 (설치 안함, 설치) 중에 최솟값 가져오기
//            cur += min(DFS(now, n, 0), DFS(now, n, 1));
//        }
//
//        // 최소값에 + 1 해서 설치한다
//        return cur += 1;
//    }
//}
//
//int main() {
//    fastio
//    cin >> n;
//
//    for (int i = 0; i < n - 1; ++i) {
//        int u, v;
//        cin >> u >> v;
//
//        ed[u].push_back(v);
//        ed[v].push_back(u);
//    }
//
//    memset(dp, -1, sizeof dp);
//
//    cout << min(DFS(-1, 1, 0), DFS(-1, 1, 1)) << endl;
//}
////
//// Created by Mac2 on 2021/09/19.
////
//
