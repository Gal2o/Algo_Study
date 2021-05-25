//#include <bits/stdc++.h>
//
//using namespace std;
//
//// 다시 풀어보기..
//int n;
//int dp[1000001], ans[1000001];
//
//int main() {
//    cin >> n;
//
//    for (int i = 2; i <= n; i++) {
//        dp[i] = dp[i - 1] + 1, ans[i] = i - 1;
//
//        if (i % 3 == 0 && dp[i] > dp[i / 3] + 1)
//            dp[i] = dp[i / 3] + 1, ans[i] = i / 3;
//
//        if (i % 2 == 0 && dp[i] > dp[i / 2] + 1)
//            dp[i] = dp[i / 2] + 1, ans[i] = i / 2;
//    }
//
//    cout << dp[n] << endl;
//
//    while (n != 0) {
//        cout << n << ' ';
//        n = ans[n];
//    }
//}
////
//// Created by Mac2 on 2021/05/20.
////
//
