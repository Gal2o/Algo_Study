//#include <bits/stdc++.h>
//
//using namespace std;
//typedef tuple<int, int, int> tp;
//
//int n, uf[1025];
//vector<int> ed[1025];
//
//int union_find(int idx) {
//    if (uf[idx] != idx)
//        uf[idx] = union_find(uf[idx]);
//
//    return uf[idx];
//}
//// Prim 으로 하면 틀린다.
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n;
//
//    priority_queue<tp, vector<tp>, greater<tp>> q;
//
//    for (int i = 1; i <= n; i++)
//        uf[i] = i;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = i + 1; j <= n; j++) {
//            int a;
//            cin >> a;
//            q.push({a, i, j});
//        }
//    }
//
//    while (!q.empty()) {
//        int f = get<1>(q.top()), e = get<2>(q.top());
//
//        int u = union_find(f);
//        int v = union_find(e);
//        q.pop();
//
//        if (u == v)
//            continue;
//
//        uf[min(u, v)] = max(u, v);
//
//        // 노드를 넣어야 하는데, 유니온 파인드 한 값을 넣어서 자꾸 틀렸음
//        ed[f].push_back(e);
//        ed[e].push_back(f);
//    }
//
//    for (int i = 1; i <= n; i++) {
//        cout << ed[i].size();
//
//        sort(ed[i].begin(), ed[i].end());
//        for (auto e : ed[i])
//            cout << ' ' << e;
//        cout << endl;
//    }
//}
////
//// Created by Mac2 on 2021/07/05.
////
//
