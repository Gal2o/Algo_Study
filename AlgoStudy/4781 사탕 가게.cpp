//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m;
//double a;
//int kal[5001], price[5001], dp[10001];
//
//int main() {
//    // 100만 곱하면 오차가 생긴다..
//    // 2.39 238  /  2.4 239
//    // 0.5를 더해주는 이유
////    for (double i = 0.01; i <= 100.; i += 0.01)
////        cout << i << " " << int(i * 100) << '\n';
//
//    while (1) {
//        memset(kal, 0, sizeof kal);
//        memset(price, 0, sizeof price);
//        memset(dp, 0, sizeof dp);
//
//        cin >> n >> a;
//
//        if (n == 0)
//            break;
//
//        m = (int) (a * 100 + 0.5);
//
//        for (int i = 1; i <= n; ++i) {
//            cin >> kal[i] >> a;
//
//            price[i] = (a * 100 + 0.5);
//        }
//
//        for (int i = 1; i <= n; i++)
//            for (int j = price[i]; j <= m; j++)
//                dp[j] = max(dp[j], dp[j - price[i]] + kal[i]);
//
//        cout << dp[m] << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/26.
////
//
