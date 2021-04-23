//#include <iostream>
//
//using namespace std;
//int n, dp;
//int su[1001], dp[1001];
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> su[i];
//
//    for (int i = 1; i <= n; i++) {
//        dp[i] = 1;
//        for (int j = 0; j < i; j++) {
//            if (su[j] < su[i])
//                dp[i] = max(dp[j] + 1, dp[i]);
//        }
//
//        if(dp[i] > dp)
//            dp = dp[i];
//    }
//
//    cout << dp << endl;
//}
////
//// Created by Mac2 on 2021/04/20.
////
//
