//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n;
//int arr[5001], dp[5001][5001];
//
//// 흔한 디피지만.. 생각이 안났다
//int dfs(int l, int r) {
//    if (l > r)
//        return 0;
//
//    int &cur = dp[l][r];
//
//    if (cur != 0)
//        return cur;
//
//    cur = 1e9;
//
//    if (arr[l] == arr[r])
//        cur = min(cur, dfs(l + 1, r - 1));
//    else
//        cur = min(cur, min(dfs(l + 1, r) + 1, dfs(l, r - 1) + 1));
//
//    return cur;
//}
//
//int main() {
//    fastio
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    cout << dfs(0, n - 1) << endl;
//}
//// Created on 2021/10/29.