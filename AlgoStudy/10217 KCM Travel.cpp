//#include <bits/stdc++.h>
//
//#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
//#define mx 101
//#define mxp 10001
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int> tp;
//int t, n, m, k;
//int chk[mx][mxp];
//
//int main() {
//    fastio
//    cin >> t;
//
//    while (t--) {
//        cin >> n >> m >> k;
//
//        vector<tp> ed[mx];
//
//        // 1부터 N까지 단방향으로 가야한다.
//        // 양방향으로 가면, cost에 따라 값이 겹쳐질 수 있으므로 단방향! 으로 입력 받기
//        // ex. chk[1][0] = 0 ->  chk[2][1] = 1 -> chk[1][2] = 2
//        // 1 -> 2 -> 1 이런식으로 되돌아 올 수 있다.
//        for (int i = 0; i < k; ++i) {
//            int u, v, c, d;
//            cin >> u >> v >> c >> d;
//
//            ed[u].emplace_back(d, v, c);
//        }
//
//        // INF값 초기화
//        fill(&chk[0][0], &chk[n][m + 1], 1e9);
//        priority_queue<tp, vector<tp>, greater<>> pq;
//        // 1부터 시작
//        pq.push({0, 1, 0}), chk[1][0] = 0; // 노드, 지금까지 쓴 비용
//
//        // 거리, 노드, 비용
//        while (!pq.empty()) {
//            auto[val, cur, cost] = pq.top();
//            pq.pop();
//
//            if (val > chk[cur][cost])
//                continue;
//
//            for (auto n: ed[cur]) {
//                auto[nval, next, ncost] = n;
//                nval += val;
//                ncost += cost;
//
//                // 다음 노드의 cost 가 m 이하이고, nval이 [next][ncost] 보다 작으면
//                if (ncost <= m && nval < chk[next][ncost]) {
//                    chk[next][ncost] = nval;
//                    pq.push({nval, next, ncost});
//                }
//            }
//        }
//
//        // n 번째 노드의 최단시간에 0부터 m까지 비용 돌면서
//        // 최소값 찾기
//        int answer = 1e9;
//        for (int i = 0; i <= m; i++)
//            answer = min(chk[n][i], answer);
//
//        if (answer == 1e9)
//            cout << "Poor KCM" << endl;
//        else
//            cout << answer << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/05.
////
//
