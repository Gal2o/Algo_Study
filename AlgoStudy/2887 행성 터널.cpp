//#include <bits/stdc++.h>
//
//#define mx 100000
//using namespace std;
//typedef tuple<int, int, int> tp;
//typedef pair<int, int> pl;
//
//int n, answer;
//vector<pl> X, Y, Z;
//
//int uf[mx];
//priority_queue<tp, vector<tp>, greater<tp>> pq;
//
//int u_find(int idx) {
//    if (uf[idx] != idx)
//        uf[idx] = u_find(uf[idx]);
//
//    return uf[idx];
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a, b, c;
//
//        cin >> a >> b >> c;
//
//        X.push_back({a, i});
//        Y.push_back({b, i});
//        Z.push_back({c, i});
//
//        uf[i] = i;
//    }
//
//    // 모든 점과 점 사이에 거리를 n*n 으로 구하게 되면 시간초과.
//    // x, y, z 좌표를 각각 인덱스 번호와 같이 입력 받아서
//    // 각각 좌표들을 오름차순으로 정렬한다.
//    sort(X.begin(), X.end());
//    sort(Y.begin(), Y.end());
//    sort(Z.begin(), Z.end());
//
//    // 좌표 오름차순으로 정렬을 했으므로 i, i + 1 번째의 거리가 가장 짧은 거리, 가장 짧은 거리들이 오름차순으로 나타내어 있고
//    for (int i = 0; i < n - 1; i++) {
//        pq.push({abs(X[i].first - X[i + 1].first), X[i].second, X[i + 1].second});
//        pq.push({abs(Y[i].first - Y[i + 1].first), Y[i].second, Y[i + 1].second});
//        pq.push({abs(Z[i].first - Z[i + 1].first), Z[i].second, Z[i + 1].second});
//    }
//
//    // A1  -  A2
//    // x = 1, idx = 1, idx = 2
//    // y = 2, idx = 1, idx = 2
//    // z = 3, idx = 1, idx = 2
//    // x에서의 최단 거리가 가장 위로 오니까 A1 - A2 행성 간 가장 짧은 거리는 x를 선택 했을 때,
//    // idx 1 - 2 간은 사이클 만들지 않기 위해 유니온파인드 만들어 주기
//    // 이 거리들은 x,y,z 가 각각 어떤 행성을 갈 때 가장 짧은 거리 이므로 MST를 구성하면 행성간 최단 거리를 구할 수 있다.
//    while (!pq.empty()) {
//        int val = get<0>(pq.top());
//        int p1 = get<1>(pq.top());
//        int p2 = get<2>(pq.top());
//        pq.pop();
//
//        int u = u_find(p1);
//        int v = u_find(p2);
//
//        if (u == v)
//            continue;
//
//        uf[max(u, v)] = min(u, v);
//
//        answer += val;
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/16.
////
//
