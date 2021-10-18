//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//
//int n, m, t, dist, answer;
//int uf[10001];
//vector<pl> ed[10001];
//
//int u_f(int idx) {
//    if (uf[idx] != idx)
//        uf[idx] = u_f(uf[idx]);
//
//    return uf[idx];
//}
//
//int main() {
//    fastio
//    cin >> n >> m >> t;
//
//    for (int i = 0; i < m; ++i) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        ed[a].emplace_back(c, b);
//        ed[b].emplace_back(c, a);
//    }
//
//    for (int i = 1; i <= n; i++)
//        uf[i] = i;
//
//    // 1번 노드만 선처리
//    // 비용이 작은 간선을 찾기 위해서 정렬
//    sort(ed[1].begin(), ed[1].end());
//
//    priority_queue<tp, vector<tp>, greater<>> pq;
//    // 1번에서 비용이 가장 적은 노드 찾아서
//    // union-find 이어주고
//    // answer에 간선 값 더해주고, t만큼 도로비용 증가
//    uf[ed[1][0].second] = uf[1], answer += ed[1][0].first, dist += t;
//
//    // 그리고 나머지 모든 간선 pq에 넣어주기
//    // *prim*
//    for (int i = 2; i <= n; i++) {
//        for (auto j: ed[i]) {
//            auto[val, cur] = j;
//            pq.push({val, i, cur});
//        }
//    }
//
//    // 연결 안된 노드 중에 비용 작은 것 우선으로 처리해준다.
//    while (!pq.empty()) {
//        auto[val, prev, cur] = pq.top();
//        pq.pop();
//
//        int u = u_f(prev), v = u_f(cur);
//
//        if (u == v)
//            continue;
//
//        uf[max(u, v)] = min(u, v);
//        answer += dist + val;
//        dist += t;
//    }
//
//    cout << answer << endl;
//}
//// Created on 2021/10/11.