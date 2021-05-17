//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//string s1, s2, ans;
//int dp[1001][1001], res;
//
//int main() {
//    string t1, t2;
//    cin >> t1 >> t2;
//
//    s1 = " " + t1, s2 = " " + t2;
//
//    // dp는 1부터 시작
//    for (int i = 1; i < s1.size(); i++) {
//        for (int j = 1; j < s2.size(); j++) {
//            // 문자가 같다면, dp[i-1][j-1] + 1
//            if (s1[i] == s2[j])
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//                // 다르면 [i-1][j] or [i][j-1] 의 최대값
//            else
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//        }
//    }
//
//    res = dp[s1.size() - 1][s2.size() - 1];
//    cout << res << endl;
//
//    if (res > 0) {
//        int y = s1.size() - 1, x = s2.size() - 1;
//
//        // dp 쌓아왔던 방식대로 맨 끝에서 부터 거슬러 올라간다.
//        // 올라가면서 최초로 dp의 값이 바뀌는 부분이 가장 긴 수열이다.
//        while (dp[y][x] != 0) {
//            if (dp[y][x] == dp[y - 1][x])
//                y--;
//            else if (dp[y][x] == dp[y][x - 1])
//                x--;
//            else
//                ans += s1[y], y--, x--;
//        }
//
//        reverse(ans.begin(), ans.end());
//        cout << ans << endl;
//    }
//}
////
//// Created by Mac2 on 2021/05/13.
////