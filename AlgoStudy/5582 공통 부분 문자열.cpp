//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int dp[4001][4001], ans;
//string s, t;
//
//int main() {
//    string t1, t2;
//    cin >> t1 >> t2;
//
//    s = " " + t1, t = " " + t2;
//
//    for (int i = 1; i < s.size(); i++) {
//        for (int j = 1; j < t.size(); j++) {
//            if (s[i] == t[j])
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//
//            if (ans < dp[i][j])
//                ans = dp[i][j];
//        }
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/17.
////
//
