//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//string s1, s2, s3;
//int dp[101][101][101];
//
//int main() {
//    string t1, t2, t3;
//    cin >> t1 >> t2 >> t3;
//
//    s1 = " " + t1, s2 = " " + t2, s3 = " " + t3;
//
//    for (int i = 1; i < s1.size(); i++) {
//        for (int j = 1; j < s2.size(); j++) {
//            for (int k = 1; k < s3.size(); k++) {
//                if (s1[i] == s2[j] && s2[j] == s3[k])
//                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
//                else
//                    dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
//            }
//        }
//    }
//
//    cout << dp[s1.size() - 1][s2.size() - 1][s3.size() - 1] << endl;
//}
//
////
//// Created by Mac2 on 2021/05/14.
////
//
