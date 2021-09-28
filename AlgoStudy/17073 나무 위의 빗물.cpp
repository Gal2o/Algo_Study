//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 500001
//using namespace std;
//
//int n, w, leaf;
//vector<int> ed[mx];
//
//// 리프노드의 갯수를 구해서 w를 나누는 문제
//void dfs(int p, int c) {
//    if (ed[c].size() == 1 && ed[c][0] == p) {
//        leaf++;
//        return;
//    }
//
//    for (auto i: ed[c]) {
//        if (i == p)
//            continue;
//
//        dfs(c, i);
//    }
//}
//
//int main() {
//    fastio
//    cin >> n >> w;
//
//    for (int i = 0; i < n - 1; ++i) {
//        int u, v;
//        cin >> u >> v;
//
//        ed[u].push_back(v);
//        ed[v].push_back(u);
//    }
//
//    dfs(-1, 1);
//
//    printf("%.10lf", (double) w / leaf);
//}
////
//// Created by Mac2 on 2021/09/24.
////
//
