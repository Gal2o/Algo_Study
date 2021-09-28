//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 50001
//using namespace std;
//
//int n, chk[2][mx];
//vector<int> ed[mx];
//
//int dfs(int prev, int now, int cow) {
//    int &cur = chk[cow][now];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 0;
//
//    for (auto n: ed[now]) {
//        if (prev == n)
//            continue;
//
//        if (cow) {
//            cur += dfs(now, n, 0);
//        } else {
//            cur += min(dfs(now, n, 0), dfs(now, n, 1));
//        }
//    }
//
//    if (cow)
//        return cur;
//    else
//        return cur += 1;
//}
//
//int main() {
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
//    memset(chk, -1, sizeof chk);
//
//    // 최솟값을 n에서 빼준다
//    cout << n - min(dfs(-1, 1, 0), dfs(-1, 1, 1));
//}
////
//// Created by Mac2 on 2021/09/19.
////
//
