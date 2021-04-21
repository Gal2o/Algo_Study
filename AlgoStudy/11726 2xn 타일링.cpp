//#include <iostream>
//using namespace std;
//#define mx 10007
//int n;
//int dp[1001];
//
//int main() {
//    cin >> n;
//
//    dp[1] = 1; // |
//    dp[2] = 2; // ||, =
//
//    // dp[3] => ||| , |= ,  =|
//    // dp[4] => |||| , == , ||= , =|| , |=|
//    // 2xn 직사각형 채우는 법 -> 2x(n-1) or 2x(n-2)
//    for(int i = 3; i <=n; i ++){
//        dp[i] = (dp[i - 2] + dp[i - 1]) % mx;
//    }
//
//    cout << dp[n] << endl;
//}
////
//// Created by Mac2 on 2021/04/19.
////
//
