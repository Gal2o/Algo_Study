//#include <iostream>
//#include <queue>
//
//using namespace std;
//int n, m, st, fin;
//
//vector<pair<int, int>> connect[5001];
//queue<pair<int, int>> q;
//vector<int> chk(5001, 1e9);
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//
//        scanf("%d %d %d", &a, &b, &c);
//
//        connect[a].push_back({b, c});
//        connect[b].push_back({a, c});
//    }
//
//    cin >> st >> fin;
//
//    chk[st] = 0, q.push({st, 0});
//
//    while (!q.empty()) {
//        int dist = q.front().first, val = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < connect[dist].size(); i++) {
//            int next = connect[dist][i].first;
//            int nval = connect[dist][i].second + val;
//
//            if (nval <= chk[next]) {
//                chk[next] = nval, q.push({next, nval});
//            }
//        }
//    }
//
//    cout << chk[fin] << endl;
//}
////
//// Created by Mac2 on 2021/05/12.
////
//
