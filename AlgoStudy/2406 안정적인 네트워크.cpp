//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//
//int n, m;
//int arr[1001][1001], uf[1001];
//
//int u_find(int idx) {
//    if (uf[idx] != idx)
//        uf[idx] = u_find(uf[idx]);
//
//    return uf[idx];
//}
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++)
//        uf[i] = i;
//
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        int u = u_find(a), v = u_find(b);
//
//        if (u == v)
//            continue;
//
//        uf[max(u, v)] = min(u, v);
//    }
//
//    priority_queue<tp, vector<tp>, greater<>> pq;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            cin >> arr[i][j];
//
//            // 1 을 제외한 것만 크루스칼 돌리면 된다
//            if (i != 1 && j != 1)
//                pq.push({arr[i][j], i, j});
//        }
//    }
//
//    vector<pl> ed;
//    int res = 0;
//
//    while (!pq.empty()) {
//        auto[val, i, j] = pq.top();
//        pq.pop();
//
//        int u = u_find(i), v = u_find(j);
//
//        if (u == v)
//            continue;
//
//        uf[max(u, v)] = min(u, v);
//        res += val;
//        ed.emplace_back(i, j);
//    }
//
//    cout << res << ' ' << ed.size() << endl;
//
//    for (auto i: ed)
//        cout << i.first << ' ' << i.second << endl;
//}
////
//// Created by Mac2 on 2021/09/21.
////
//
