//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, h;
//int dp[51][1001];
//vector<int> b[51];
//
//// 점화식 생각 못함
//int main() {
//    fastio
//    cin >> n >> m >> h;
//    cin.ignore(); // n, m, h 받고 난 공백을 지워주고 getline을 쓰자
//
//    for (int i = 1; i <= n; ++i) {
//        string s;
//        getline(cin, s);
//
//        // 한 자릿수 이상 입력 오류 발생 안하게 stoi 사용 (ex. 32, 1000)
//        for (int j = 0; j < s.size(); j++) {
//            if (j == 0 || s[j] == ' ')
//                b[i].push_back(stoi(&s[j]));
//        }
//    }
//
//    // 높이를 0을 만드는 경우는 모든 학생이 1번 밖에 없음
//    for (int i = 0; i <= n; ++i)
//        dp[i][0] = 1;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= h; ++j) {
//            for (auto k: b[i]) {
//                // 배낭 문제
//                if (j >= k) {
//                    // i번째 학생이 k번째 블록을 놔서 j가 될 경우
//                    dp[i][j] += dp[i - 1][j - k];
//                    dp[i][j] %= 10007;
//                }
//            }
//
//            // i번째 학생이 블록을 놓지 않을 경우
//            dp[i][j] += dp[i - 1][j];
//            dp[i][j] %= 10007;
//        }
//    }
//
//    cout << dp[n][h] << endl;
//}
////
//// Created by Mac2 on 2021/09/29.
////
//
