//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define INF 1e9
//using namespace std;
//
//typedef pair<double, int> pl;
//
//int n, w;
//double m, chk[1001], dist[1001][1001];
//vector<pl> r;
//
//int main() {
//    fastio
//    cin >> n >> w >> m;
//
//    for (int i = 0; i < n; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        r.emplace_back(a, b);
//    }
//
//    // 틀렸던 부분, -1이면 갈 수 없는 거리
//    memset(dist, -1, sizeof dist);
//
//    for (int i = 0; i < r.size(); ++i) {
//        for (int j = 0; j < r.size(); ++j) {
//            dist[i][j]
//                    = sqrt(pow(abs(r[i].first - r[j].first), 2)
//                           + pow(abs(r[i].second - r[j].second), 2));
//
//        }
//    }
//
//    fill(&chk[0], &chk[n], INF);
//    priority_queue<pl, vector<pl>, greater<>> q;
//
//    for (int i = 0; i < w; ++i) {
//        int a, b;
//        cin >> a >> b;
//        a--, b--;
//
//        // 틀렸던 부분, chk가 아니라 가는 거리를 0으로 만들고 다익스트라
//        dist[a][b] = dist[b][a] = 0;
//    }
//
//    q.emplace(0, 0);
//
//    while (!q.empty()) {
//        auto[val, cur] = q.top();
//        q.pop();
//
//        if (cur == n)
//            break;
//
//        for (int next = 0; next < n; ++next) {
//            if (dist[cur][next] == -1)
//                continue;
//
//            double nval = dist[cur][next];
//
//            if (nval <= m && chk[next] > nval + val) {
//                chk[next] = nval + val;
//                q.emplace(nval + val, next);
//            }
//        }
//    }
//
//    cout << (int) (chk[n - 1] * 1000) << endl;
//}
//// Created on 2021/11/05.