//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//string a, b, c;
//// 배열을 하나로 해결하려면 2차원 배열로 하면 값이 꼬이므로, 3차원으로 하자
//int dp[2][101][21];
//
//int dfs(int type, int idx, int cnt) {
//    if (cnt == a.size())
//        return dp[type][idx][cnt] = 1;
//
//    int &cur = dp[type][idx][cnt];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 0;
//
//    for (int i = idx; i < b.size(); i++) {
//        if (!type) {
//            if (b[i] == a[cnt])
//                cur += dfs(1, i + 1, cnt + 1);
//        } else {
//            if (c[i] == a[cnt])
//                cur += dfs(0, i + 1, cnt + 1);
//        }
//    }
//
//    return cur;
//}
//
//int main() {
//    cin >> a >> b >> c;
//
//    memset(dp, -1, sizeof dp);
//
//    cout << dfs(0, 0, 0) + dfs(1, 0, 0) << endl;
//}
//
