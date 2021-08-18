//#include <bits/stdc++.h>
//
//#define MAX 1000001
//using namespace std;
//typedef long long ll;
//
//int n, k;
//ll MOD = 1000000009;
//ll dp[MAX];
//
//int main() {
//    cin >> n;
//
//    dp[1] = 1;
//    // dp[2] = 1 + 1, 2
//    dp[2] = 2;
//    // dp[3] = 1 + 1 + 1, 1 + 2, 2 + 1, 3
//    dp[3] = 4;
//
//    for (int i = 4; i < MAX; i++) {
//        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
//    }
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//
//        cout << (ll) dp[a] << '\n';
//    }
//}
////
//// Created by Mac2 on 2021/08/17.
////
//
