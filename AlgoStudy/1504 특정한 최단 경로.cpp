//#include <bits/stdc++.h>
//
//#define mx 801
//#define mxV 1e9
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, e, a, b, c, v1, v2;
//int answer1 = mxV, answer2 = mxV;
//
//vector<pl> ed[mx];
//
//int dijkstra(int a1, int a2) {
//    vector<int> chk(mx, mxV);
//    priority_queue<pl, vector<pl>, greater<pl>> pq;
//
//    pq.push({0, a1}), chk[a1] = 0;
//
//    while (!pq.empty()) {
//        int cur = pq.top().second;
//        int val = pq.top().first;
//        pq.pop();
//
//        if (cur == a2)
//            break;
//
//        for (auto i : ed[cur]) {
//            int next = i.second;
//            int nval = i.first + val;
//
//            if (nval < chk[next])
//                chk[next] = nval, pq.push({nval, next});
//        }
//    }
//
//    return chk[a2];
//}
//
//// 미확인 도착지와는 다르게, 정점을 방문 해서 최소거리를 만들어 내는 문제
//// 다익스트라 인데, 어떻게 정점을 고정시키고 최소거리를 구하는지 바로 못떠올렸다.
//// 1 - v1 - v2 - n,  1 - v2 - v1 - n 을 가면서 최소거리를 뽑아서 합하면 된다.
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n >> e;
//
//    for (int i = 0; i < e; i++) {
//        cin >> a >> b >> c;
//
//        ed[a].push_back({c, b});
//        ed[b].push_back({c, a});
//    }
//
//    cin >> v1 >> v2;
//
//    // 세개의 다익스트라가 모두 mxV가 아니라면 정점을 들르면서 갈 수 있다.
//    // 하지만 하나라도 mxV 라면 이어져있지 않은 것이다.
//    if (dijkstra(1, v1) != mxV && dijkstra(v1, v2) != mxV && dijkstra(v2, n) != mxV)
//        answer1 = dijkstra(1, v1) + dijkstra(v1, v2) + dijkstra(v2, n);
//
//    if (dijkstra(1, v2) != mxV && dijkstra(v2, v1) != mxV && dijkstra(v1, n) != mxV)
//        answer2 = dijkstra(1, v2) + dijkstra(v2, v1) + dijkstra(v1, n);
//
//    // 두 가지 방법 모두 갈 수 없다면 -1
//    if (answer1 == mxV && answer2 == mxV)
//        cout << -1 << endl;
//    else // 하나라도 이어져 있거나 둘다 가능하면 최솟값을 구하면 된다.
//        cout << min(answer1, answer2) << endl;
//}
////
//// Created by Mac2 on 2021/07/22.
////
//
