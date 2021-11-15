//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int t, n;
//int arr[1001], dp[1001];
//
//int main() {
//    fastio
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//
//        memset(dp, 0, sizeof dp);
//
//        for (int i = 0; i < n; ++i) {
//            cin >> arr[i];
//        }
//
//        dp[0] = arr[0];
//
//        // 음수도 있으므로 초기 값은 가장 작게
//        int MAX = -1e9;
//
//        for (int i = 1; i < n; ++i) {
//            dp[i] = max(arr[i], dp[i - 1] + arr[i]);
//        }
//
//        for (int i = 0; i < n; ++i) {
//            MAX = max(dp[i], MAX);
//        }
//
//        cout << MAX << endl;
//    }
//}
//// Created on 2021/11/15.