//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 300001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, uf[mx], chk[mx];
//vector<int> v[mx];
//
//int u_f(int idx) {
//    if (uf[idx] != idx) {
//        uf[idx] = u_f(uf[idx]);
//    }
//
//    return uf[idx];
//}
//
//void DFS(int idx) {
//    for (auto i: v[idx]) {
//        if (!chk[i]) {
//            int u = u_f(idx), v = u_f(i);
//            if (u == v)
//                continue;
//
//            chk[i] = 1;
//            uf[max(u, v)] = min(u, v);
//            DFS(i);
//            chk[i] = 0;
//        }
//    }
//}
//
//int main() {
//    fastio
//
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i)
//        uf[i] = i;
//
//    for (int i = 0; i < n - 2; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        v[a].push_back(b);
//        v[b].push_back(a);
//
//        int u = u_f(a), v = u_f(b);
//
//        // 초기 union_find를 해도 갱신이 안되는 부분이 생긴다.
//        if (u == v)
//            continue;
//
//        uf[max(u, v)] = min(u, v);
//    }
//
//    // 1~n 까지 DFS를 해서 다리로 이어져 있다면 u_f 갱신을 해주자
//    for (int i = 1; i <= n; i++) {
//        chk[i] = 1;
//        DFS(i);
//        chk[i] = 0;
//    }
//
//    // 만약 달라지는 곳이 안이어져 있는 곳이므로 출력
//    for (int i = 1; i < n; i++) {
//        if (uf[i] != uf[i + 1])
//            return cout << i << ' ' << i + 1, 0;
//    }
//}
////
//// Created by Mac2 on 2021/09/28.
////
//
