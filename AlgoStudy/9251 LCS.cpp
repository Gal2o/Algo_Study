//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string s1, s2;
//int dp[1001][1001];
//
////    A  C  A  Y  K  P
//// C  0  1  1  1  1  1
//// A  1  1  2  2  2  2
//// P  1  1  2  2  2  3
//// C  1  2  3  3  3  3
//// A  1  2  3  3  3  3
//// K  1  2  3  3  4  4
//
//int main() {
//    cin >> s1 >> s2;
//
//    // dp는 1부터 시작
//    for (int i = 0; i < s1.size(); i++) {
//        for (int j = 0; j < s2.size(); j++) {
//            // 문자가 같다면, dp[i-1][j-1] + 1
//            if (s1[i] == s2[j])
//                dp[i + 1][j + 1] = dp[i][j] + 1;
//            // 다르면 [i-1][j] or [i][j-1] 의 최대값
//            else
//                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
//        }
//    }
//
//    cout << dp[s1.size()][s2.size()] << endl;
//}
////
//// Created by Mac2 on 2021/05/13.
////
