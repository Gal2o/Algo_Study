//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n;
//int dp[2001][2001], val[2001];
//
//int DFS(int s, int e, int cnt) {
//    if (s > e)
//        return 0;
//
//    int &cur = dp[s][e];
//
//    if (cur)
//        return cur;
//
//    return cur = max(DFS(s + 1, e, cnt + 1) + (cnt * val[s]),
//                     DFS(s, e - 1, cnt + 1) + (cnt * val[e]));
//}
//
//int main() {
//    fastio
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i)
//        cin >> val[i];
//
//    cout << DFS(1, n, 1) << endl;
//}
////
//// Created by Mac2 on 2021/09/23.
////
//
