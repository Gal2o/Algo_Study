//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m, st, fin;
//vector<int> chk(1001, 1e9);
//vector<pair<int, int>> v[1001];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n;
//    cin >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        v[a].push_back({b, c}); // 출발, 도착, 비용
//    }
//
//    cin >> st >> fin;
//
//    priority_queue<pl, vector<pl>, greater<pl>> q; // 다음으로 갈 노드, 비용
//    chk[st] = 0, q.push({st, 0});
//
//    while (!q.empty()) {
//        int s = q.top().first;
//        int value = q.top().second;
//        q.pop();
//
//        if (value > chk[s])
//            continue;
//
//        for (int i = 0; i < v[s].size(); i++) {
//            int next = v[s][i].first;
//            int nval = value + v[s][i].second;
//
//            // 지금까지 온 비용 + 다음 비용 < 다음 노드의 최소 비용(처음엔 1e9) 이면 초기화
//            if (nval < chk[next])
//                chk[next] = nval, q.push({next, nval});
//        }
//    }
//
//    cout << chk[fin] << endl;
//}
////
//// Created by Mac2 on 2021/05/10.
////
//
