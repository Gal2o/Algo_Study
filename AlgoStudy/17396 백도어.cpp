//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define nx 100001
//#define INF 987654321000
//using namespace std;
//typedef long long ll;
//typedef pair<ll, ll> pl;
//
//int n, m, a, b, t;
//int ward[nx];
//ll chk[nx];
//vector<pl> ed[nx];
//
//// 100000^2 므로 최대 값은 100억 이상
//int main() {
//    fastio
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i)
//        cin >> ward[i];
//
//    for (int i = 0; i < m; ++i) {
//        cin >> a >> b >> t;
//
//        ed[a].emplace_back(t, b);
//        ed[b].emplace_back(t, a);
//    }
//
//    fill(&chk[0], &chk[n + 1], INF);
//
//    priority_queue<pl, vector<pl>, greater<>> pq;
//    pq.push({0, 0}), chk[0] = 0;
//
//    while (!pq.empty()) {
//        auto[val, cur] = pq.top();
//        pq.pop();
//
//        if (val ^ chk[cur])
//            continue;
//
//        for (auto nt: ed[cur]) {
//            auto[nval, next] = nt;
//            nval += val;
//
//            if (nval < chk[next]) {
//                if (next == n - 1) {
//                    chk[next] = nval;
//                    pq.push({nval, next});
//                } else {
//                    if (!ward[next])
//                        chk[next] = nval, pq.push({nval, next});
//                }
//            }
//        }
//    }
//
//    if (chk[n - 1] == INF)
//        cout << -1 << endl;
//    else
//        cout << chk[n - 1] << endl;
//}
////
//// Created by Mac2 on 2021/09/28.
////
//
