//#include <bits/stdc++.h>
//
//#define mx 1001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m, chk[mx], minV, answer;
//vector<pl> ed[mx];
//vector<int> red;
//priority_queue<pl, vector<pl>, greater<>> pq;
//
//void dijkstra() {
//    priority_queue<pl, vector<pl>, greater<>> q;
//    fill(&chk[0], &chk[n + 1], 1e9);
//    q.push({0, 1}), chk[1] = 0;
//
//    while (!q.empty()) {
//        auto[val, cur] = q.top();
//        q.pop();
//
//        if (val > chk[cur])
//            continue;
//
//        for (auto n: ed[cur]) {
//            auto[nval, next] = n;
//            nval += val;
//
//            if (nval < chk[next]) {
//                q.push({nval, next}), chk[next] = nval;
//            }
//        }
//    }
//}
//
//void BFS() {
//    queue<pl> q;
//    q.push({chk[n], n});
//
//    while (!q.empty()) {
//        auto[val, cur] = q.front();
//        q.pop();
//
//        red.push_back(cur);
//        for (auto n: ed[cur]) {
//            auto[nval, next] = n;
//
//            if (chk[cur] - nval == chk[next]) {
//                q.push({chk[next], next});
//            }
//        }
//    }
//}
//
//// 1. 다익스트라로 최단거리 구하기
//// 2. BFS - 역추적으로 최단거리의 경로를 구하기
//// 3. 구한 경로들을 하나씩 막아보면서 걸린 거리 - 최단거리 해서 가장 큰 것
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n >> m;
//
//    for (int i = 0; i < m; ++i) {
//        int a, b, c;
//
//        cin >> a >> b >> c;
//
//        ed[a].emplace_back(c, b);
//        ed[b].emplace_back(c, a);
//    }
//
//    // 처음 최단거리 시간구하기
//    dijkstra();
//    minV = chk[n];
//
//    // 역추적으로 최단거리로 가는 루트 저장하기
//    BFS();
//
//    // 역추적으로 최단거리 경로 하나씩 막으면서 다익스트라
//    for (auto i: red) {
//        priority_queue<pl, vector<pl>, greater<>> q;
//        fill(&chk[0], &chk[n + 1], 1e9);
//        q.push({0, 1}), chk[1] = 0, chk[i] = 0;
//
//        while (!q.empty()) {
//            auto[val, cur] = q.top();
//            q.pop();
//
//            if (val > chk[cur])
//                continue;
//
//            for (auto n: ed[cur]) {
//                auto[nval, next] = n;
//                nval += val;
//
//                if (nval < chk[next]) {
//                    q.push({nval, next}), chk[next] = nval;
//                }
//            }
//        }
//
//        if (chk[n] == 1e9)
//            return cout << -1, 0;
//
//        answer = max(answer, chk[n] - minV);
//    }
//
//    cout << answer;
//}
////
//// Created by Mac2 on 2021/09/05.
////
//
