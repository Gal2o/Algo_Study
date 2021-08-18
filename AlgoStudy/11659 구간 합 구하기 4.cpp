//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, m;
//int arr[100001], dp[100001];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i];
//
//        dp[i] = arr[i] + dp[i - 1];
//    }
//
//    // 5 9 12 14 15
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//        cout << dp[b] - dp[a - 1] << '\n';
//    }
//}
//
////
//// Created by Mac2 on 2021/08/17.
////
//
