//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//typedef pair<int, int> pl;
//
//int ntn[mx], chk[mx], uf[mx];
//vector<pl> roads[mx];
//int n, p, val = 1e9;
//
//int union_find(int idx) {
//    if (idx != uf[idx])
//        uf[idx] = union_find(uf[idx]);
//
//    return uf[idx];
//
//    /* Kruskal
//     * d = 가중치, u, v
//     * for(int i = 0; i < road.size(); i++)
//     * if (u == v)
//     *  continue;
//     *
//     * uf[max(u,v)] = min(u,v);
//     * ans += d;
//     */
//}
//
//int main() {
//    cin >> n >> p;
//
//    for (int i = 1; i <= n; i++) {
//        scanf("%d", &ntn[i]);
//
//        if (ntn[i] < val) // 나라에 도착했을 때, 가장 작은 가중치 저장
//            val = ntn[i];
//    }
//
//    for (int i = 0; i < p; i++) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//
//        // 양방향 간선 저장
//        roads[a].push_back({c, b});
//        roads[b].push_back({c, a});
//    }
//
//    priority_queue<pl, vector<pl>, greater<pl>> pq;
//
//    pq.push({0, 1});
//
//    int ans = 0;
//    while (!pq.empty()) { // 각 간선의 최소 값만 뽑아서 ans 에 더해주기
//        int now = pq.top().second;
//        int val = pq.top().first;
//        pq.pop();
//
//        if (chk[now]) // 이미 방문 처리 된 간선은 continue
//            continue;
//
//        chk[now] = 1, ans += val;
//
//        // 가중치 값을 비교하면서 넣는 것이 아니라, 이미 간선의 값을 알고 있으므로, 방문체크만 하면 된다.
//        for (auto ed : roads[now]) {
//            int next = ed.second, nval = ed.first * 2 + ntn[now] + ntn[next];
//
//            pq.push({nval, next});
//        }
//    }
//
//    // 가장 작은 마을 가중치 더해주면 끝.
//    cout << ans + val << endl;
//}
////
//// Created by Mac2 on 2021/05/25.
////
//
