//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 5001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, q;
//int usado[mx][mx], chk[mx];
//vector<pl> ed[mx];
//
//int main() {
//    fastio
//    cin >> n >> q;
//
//    fill(&usado[0][0], &usado[n][n + 1], 1e9);
//
//    for (int i = 0; i < n - 1; ++i) {
//        int p, q, r;
//        cin >> p >> q >> r;
//
//        // 양방향 간선 및 usado 양방향으로 초기화
//        ed[p].emplace_back(q, r);
//        ed[q].emplace_back(p, r);
//        usado[p][q] = usado[q][p] = r;
//    }
//
//    // bfs - 1부터 n까지 usado 최솟값 갱신
//    for (int i = 1; i <= n; ++i) {
//        queue<pl> q;
//        memset(chk, 0, sizeof chk);
//        q.push({i, 1e9}), chk[i] = 1;
//
//        while (!q.empty()) {
//            auto[cur, val] = q.front();
//            q.pop();
//
//            for (auto n: ed[cur]) {
//                auto[next, nval] = n;
//
//                if (!chk[next]) {
//                    chk[next] = 1, q.push({next, min(val, nval)});
//                    usado[i][next] = usado[next][i] = min(val, nval);
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < q; ++i) {
//        int k, v, res = 0;
//        cin >> k >> v;
//
//        // v 행에서 INF 제외하고 k 이상이면 res++
//        for (int i = 1; i <= n; i++) {
//            if (usado[v][i] != 1e9 && usado[v][i] >= k)
//                res++;
//        }
//
//        cout << res << endl;
//    }
//}
////
//// Created by Mac2 on 2021/10/01.
////
//
