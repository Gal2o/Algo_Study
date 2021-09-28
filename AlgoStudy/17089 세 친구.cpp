//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 4001
//using namespace std;
//
//int n, m, answer = 1e9;
//int f[mx][mx], chk[mx];
//vector<int> f_s[mx];
//
//int main() {
//    fastio
//
//    cin >> n >> m;
//
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        f_s[a].push_back(b);
//        f_s[b].push_back(a);
//        f[a][b] = 1, f[b][a] = 1;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = i + 1; j <= n; j++) { // O(N^2)
//            if (f[i][j]) {
//                for (int k = j + 1; k <= n; k++) { // N^2 중에 m번만 걸러지므로
//                    if (f[i][k] && f[j][k]) { // O((N+M)N) 이라서 가능
//                        answer = min(answer, (int) (f_s[i].size() + f_s[j].size() + f_s[k].size()) - 6);
//                    }
//                }
//            }
//        }
//    }
//
//    if (answer == 1e9)
//        answer = -1;
//
//    cout << answer << endl;
//}
//
////
//// Created by Mac2 on 2021/09/20.
////
//
