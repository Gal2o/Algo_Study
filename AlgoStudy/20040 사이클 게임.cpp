//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, uf[500000];
//
//int u_f(int idx) {
//    if (uf[idx] != idx)
//        uf[idx] = u_f(uf[idx]);
//
//    return uf[idx];
//}
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        uf[i] = i;
//    }
//
//    for (int i = 1; i <= m; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        int u = u_f(a), v = u_f(b);
//
//        if (u == v) {
//            cout << i << endl;
//            return 0;
//        }
//
//        uf[max(u, v)] = min(u, v);
//    }
//
//    cout << 0 << endl;
//}
////
//// Created by Mac2 on 2021/09/30.
////
//
