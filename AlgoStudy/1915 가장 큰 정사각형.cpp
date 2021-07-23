//#include <bits/stdc++.h>
//
//#define mx 1001
//using namespace std;
//typedef pair<int, int> pl;
//
//char input;
//int n, m, answer, cnt;
//int arr[mx][mx], dp[mx][mx];
//
//// 많이 안 접해본 문제
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> input;
//
//            arr[i][j] = input - '0';
//
//            // arr 가 1이면 최소 정사각형 1이므로 dp 1로 저장
//            if (arr[i][j])
//                dp[i][j] = 1;
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            // arr 가 1 일때,
//            if (arr[i][j]) {
//                // 위, 대각선 왼쪽 위, 왼쪽 이 모두 1이면 정사각형 만족
//                // 1 1      2 1
//                // 1 1 이면  1 1  이런식으로 쌓아서
//                // 가장 큰 값의 dp 를 제곱하면 제일 큰 정사각형
//                if (dp[i - 1][j] && dp[i][j - 1] && dp[i - 1][j - 1]) {
//                    // 정사각형 끼리 겹치는 경우에는
//                    // 제대로 세주려면 세개의 dp 중 가장 작은 것을 가져와서 + 1 해야
//                    // 최대 정사각형을 구할 수 있다.
//                    dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
//                }
//            }
//
//            if (answer < dp[i][j] * dp[i][j])
//                answer = dp[i][j] * dp[i][j];
//        }
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/23.
////
//
