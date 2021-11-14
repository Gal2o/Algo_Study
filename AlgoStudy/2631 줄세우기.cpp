//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, arr[201], dp[201];
//
//int main() {
//    cin >> n;
//
//    int MAX = 0;
//
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        dp[i] = 1;
//
//        for (int j = 1; j < i; ++j) {
//            if (arr[j] < arr[i] && dp[j] + 1 > dp[i]) {
//                dp[i] = dp[j] + 1;
//
//                MAX = max(MAX, dp[i]);
//            }
//        }
//    }
//
//    cout << n - MAX << endl;
//}
//// Created on 2021/11/14.