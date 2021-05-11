//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//int n, m, st, fin;
//vector<int> chk(1001, 1e9);
//vector<pair<int, int>> v[1001];
//
//int main() {
//    cin >> n;
//    cin >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//
//        v[a].push_back({b, c}); // 출발, 도착, 비용
//    }
//
//    cin >> st >> fin;
//
//    queue<pair<int, int>> q; // 다음으로 갈 노드, 비용
//    chk[st] = 0, q.push({st, 0});
//
//    while (!q.empty()) {
//        int s = q.front().first, value = -q.front().second;
//        q.pop();
//
//        for (int i = 0; i < v[s].size(); i++) {
//            int next = v[s][i].first, nextval = value + v[s][i].second;
//
//            // 지금까지 온 비용 + 다음 비용 < 다음 노드의 최소 비용(처음엔 1e9) 이면 초기화
//            if (nextval < chk[next])
//                chk[next] = nextval, q.push({next, -nextval});
//        }
//    }
//
//    cout << chk[fin] << endl;
//}
////
//// Created by Mac2 on 2021/05/10.
////
//
