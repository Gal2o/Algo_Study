//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int t, w;
//int arr[1001];
//int dp[3][31][1001];
//
//int dfs(int dir, int rem, int cnt) {
//    if (rem < 0 || cnt > t)
//        return 0;
//
//    int &cur = dp[dir][rem][cnt];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 0;
//
//    // 현재 서 있는 나무에서 자두가 떨어진다
//    if (arr[cnt] == dir) {
//        // 시간만 증가
//        cur = max(cur, dfs(dir, rem, cnt + 1) + 1);
//    } else { // 옆에 나무에서 떨어진다
//        // 그냥 서 있기
//        cur = max(cur, dfs(dir, rem, cnt + 1));
//
//        // 옮겨서 받아먹기
//        // rem이 0보다 작아질 때, 0을 리턴해서 0 + 1 리턴되는 경우가 발생한다
//        if (rem)
//            cur = max(cur, dfs(arr[cnt], rem - 1, cnt + 1) + 1);
//    }
//
//    return cur;
//}
//
//int main() {
//    cin >> t >> w;
//
//    for (int i = 1; i <= t; ++i)
//        cin >> arr[i];
//
//    memset(dp, -1, sizeof dp);
//
//    // max(1번 자두나무 시작, 기회 한번 사용해서 2번에서 시작)
//    cout << max(dfs(1, w, 1), dfs(2, w - 1, 1)) << endl;
//}
//// Created on 2021/10/06.