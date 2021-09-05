//#include <bits/stdc++.h>
//
//#define endl '\n'
//#define mx 100001
//#define MAX 10000000000000
//using namespace std;
//typedef long long ll;
//typedef pair<ll, ll> pl;
//
//int n, m, k;
//ll chk[mx], answer = MAX;
//vector<pl> red[mx];
//pl dist = {0, 0};
//priority_queue<pl, vector<pl>, greater<>> pq;
//
//// n이 10만까지고, 도로의 길이도 10만이므로, long long 선언
//// MAX값도 long long의 최대값으로 해야 맞는다
//void dijkstra() {
//    while (!pq.empty()) {
//        auto[val, cur] = pq.top();
//        pq.pop();
//
//        if (val > chk[cur])
//            continue;
//
//        for (auto n: red[cur]) {
//            auto[nval, next] = n;
//            nval += val;
//
//            if (nval < chk[next]) {
//                pq.push({nval, next});
//                chk[next] = nval;
//            }
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> m >> k;
//
//    // 각 도시에서 면접장까지 최단거리 중 가장 먼 곳,
//    // n과 면접장 수 k과 같은 범위므로 for문으로 다익스트라 돌리면 터지니까,
//    // 간선의 방향을 반대로 바꿔서 면접장에서 각 도시로 가는 최단거리 중 가장 긴 것 찾기
//    for (int i = 0; i < m; ++i) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        // 간선 방향 반대로
//        red[b].emplace_back(c, a);
//    }
//
//    fill(&chk[0], &chk[n + 1], MAX);
//
//    // 각 도시 중, 자기 자신이 면접장 인 곳은 chk를 0으로 초기화 하고,
//    // 우선순위 큐에 해당 노드 번호 넣어주고 다익스트라
//    for (int i = 0; i < k; ++i) {
//        int a;
//        cin >> a;
//
//        pq.push({0, a}), chk[a] = 0;
//    }
//
//    dijkstra();
//
//    // 가장 긴 거리가 정답
//    for (int i = 1; i <= n; i++) {
//        if (dist.second < chk[i])
//            dist = {i, chk[i]};
//    }
//
//    cout << dist.first << endl << dist.second << endl;
//}
////
//// Created by Mac2 on 2021/09/02.
////
//
