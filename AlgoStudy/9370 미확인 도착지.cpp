//#include <bits/stdc++.h>
//
//#define mx 2001
//using namespace std;
//typedef pair<int, int> pl;
//int T, n, m, t, s, g, h;
//vector<int> dest;
//vector<pl> ed[mx];
//
//// 이런 아이디어 떠올리지 못함.
//void dijkstra() {
//    vector<int> visited(mx, 1e9);
//    queue<pl> q;
//    visited[s] = 0, q.push({0, s});
//
//    while (!q.empty()) {
//        int now = q.front().second;
//        int val = q.front().first;
//        q.pop();
//
//        for (auto n : ed[now]) {
//            int next = n.first;
//            int nval = val + n.second;
//
//            if (nval < visited[next])
//                visited[next] = nval, q.push({nval, next});
//        }
//    }
//
//    vector<int> answer;
//    // 최단 거리를 구하는 다익스트라를 돌았을 때,
//    // 만약 거리의 합이 홀수이면, g-h 를 포함하고 돌았다.
//    for (auto v : dest) {
//        if (visited[v] % 2 != 0)
//            answer.push_back(v);
//    }
//
//    sort(answer.begin(), answer.end());
//
//    for (auto i : answer)
//        cout << i << ' ';
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> T;
//
//    while (T--) {
//        cin >> n >> m >> t >> s >> g >> h;
//
//        dest.clear();
//        for (int i = 0; i <= n; i++)
//            ed[i].clear();
//
//        for (int i = 0; i < m; i++) {
//            int a, b, d;
//            cin >> a >> b >> d;
//
//            // 나머지 가중치는 짝수
//            d *= 2;
//
//            // g, h 사이의 가중치는 홀수로 만들어 버린다.
//            if ((a == g && b == h) || (b == g && a == h))
//                d -= 1;
//
//            ed[a].push_back({b, d});
//            ed[b].push_back({a, d});
//        }
//
//        for (int i = 0; i < t; i++) {
//            int a;
//            cin >> a;
//            dest.push_back(a);
//        }
//
//        dijkstra();
//        // 또는 각 도착지 까지 다익스트라를 돌고
//        // 각 도착지에서 출발점으로 역추적을 했을 때, 같다면 그것 또한 답이다.
//    }
//}
////
//// Created by Mac2 on 2021/07/01.
////
//
