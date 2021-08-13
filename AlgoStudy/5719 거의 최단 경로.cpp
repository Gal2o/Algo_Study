//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//typedef pair<int, int> pl;
//int n, m, s, d;
//
//vector<pl> ed[mx], red[mx];
//vector<int> chk(mx, 1e9);
//priority_queue<pl, vector<pl>, greater<>> pq;
//map<pl, int> visited;
//
//void init() {
//    for (int i = 0; i < n; i++)
//        ed[i].clear(), red[i].clear();
//
//    visited.clear();
//}
//
//void dijkstra() {
//    pq.push({0, s}), chk[s] = 0;
//    while (!pq.empty()) {
//        int cur = pq.top().second;
//        int val = pq.top().first;
//        pq.pop();
//
//        if (val > chk[cur])
//            continue;
//
//        for (auto i: ed[cur]) {
//            int next = i.second;
//            int nval = i.first + val;
//
//            // 처음 다익스트라를 할 때는, visited가 비어있으므로 신경 안써도 된다.
//            if (visited.count({cur, next}))
//                continue;
//
//            if (nval < chk[next])
//                chk[next] = nval, pq.push({nval, next});
//        }
//    }
//}
//
//void bfs() {
//    vector<vector<int>> rchk(n, vector<int>(n, 0));
//    queue<int> q;
//    q.push(d), rchk[d][d] = 1;
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        for (auto i : red[cur]) {
//            int next = i.second;
//            int nval = i.first;
//
//            if (rchk[cur][next])
//                continue;
//
//            // 방문 체크 cur -> next (역방향이다)
//            rchk[cur][next] = 1;
//
//            // 역추적이므로,
//            // 시작은 도착지 => 도착지에는 최단 거리가 저장 되어 있다.
//            // chk[도착지] - 반대로 가는 간선 길이 == chk[이전노드] 가 성립하면,
//            // 최단 거리로 온 것이고, 그것만 q.push해준다
//            if (chk[cur] - nval == chk[next]) {
//                q.push(next);
//                // 최단 거리 경로 저장용 visited
//                visited[{next, cur}] = 1;
//            }
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    while (1) {
//        cin >> n >> m;
//
//        if (!n && !m)
//            break;
//
//        cin >> s >> d;
//
//        // ed, red, map<>visited 초기화 해주기
//        init();
//
//        for (int i = 0; i < m; i++) {
//            int a, b, c;
//
//            cin >> a >> b >> c;
//
//            // 다익스트라 최단 거리용 입력 방향 간선들
//            ed[a].emplace_back(c, b);
//            // 역추적용 뒤집은 방향 간선들
//            red[b].emplace_back(c, a);
//        }
//
//        // 최단거리용 chk 최대값 초기화
//        chk = vector<int>(mx, 1e9);
//        // 처음 최단 거리를 구한다.
//        dijkstra();
//
//        // 반대 방향을 저장한 red를 사용해서 역추적을 한다.
//        // 정점으로 방문 체크를 하면, 거리가 같은 최단경로가 입력이 안될 수 있으므로,
//        // 2차원으로 rchk[start][end] 로 방문 체크를 한다.
//        // 이 작업을 안하면 메모리 초과가 난다.
//        bfs();
//
//        // 이제 visited 가 갱신 되었으니, visited에 있는 경로를 제외하고
//        // 최단거리를 저장하면 답이다.
//        chk = vector<int>(mx, 1e9);
//        dijkstra();
//
//        if (chk[d] == 1e9)
//            cout << -1 << endl;
//        else
//            cout << chk[d] << endl;
//    }
//}
////
//// Created by Mac2 on 2021/08/04.
////
//
//
