//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n, m;
//vector<pair<int, int>> com[1001];
//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//vector<int> chk(1001, 1e9), route(1001, 0);
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//
//        com[a].push_back({c, b});
//        com[b].push_back({c, a});
//    }
//
//    pq.push({0, 1});
//    chk[1] = 0, route[1] = 0;
//
//    while (!pq.empty()) {
//        int now = pq.top().second, val = pq.top().first;
//        pq.pop();
//
//        if (chk[now] < val)
//            continue;
//
//        for (auto ed: com[now]) {
//            int next = ed.second, nval = ed.first + val;
//
//            if (nval < chk[next]) {
//                chk[next] = nval;
//                // 이전 출발한 루트 저장용
//                route[next] = now;
//                pq.push({nval, next});
//            }
//        }
//    }
//
//    // 경로는 n - 1 개
//    cout << n - 1 << endl;
//
//    for (int i = 2; i <= n; i++)
//        cout << route[i] << ' ' << i << endl;
//}
////
//// Created by Mac2 on 2021/05/12.
////
//
//
