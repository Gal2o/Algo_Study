//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef long long ll;
//
//int t, n;
//ll dp[65][65];
//
//ll dfs(int idx, int cnt) {
//    if (cnt == n) {
//        return dp[idx][cnt] = 1;
//    }
//
//    ll &cur = dp[idx][cnt];
//
//    if (cur != -1)
//        return dp[idx][cnt];
//
//    cur = 0;
//
//    for (int i = idx; i <= 9; ++i) {
//        if (i >= idx)
//            cur += dfs(i, cnt + 1);
//    }
//
//    return cur;
//}
//
//int main() {
//    fastio
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//
//        memset(dp, -1, sizeof dp);
//
//        cout << dfs(0, 0) << endl;
//    }
//}
//// Created on 2021/11/10.