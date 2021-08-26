//#include <bits/stdc++.h>
//
//#define MAX 100001
//using namespace std;
//
//int n, arr[MAX], answer;
//int dp[2][MAX];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i];
//
//        // 0은 제거 안함, 1은 제거함
//        dp[0][i] = dp[1][i] = arr[i];
//
//        // n이 1일 때는, answer = arr[1] 이므로, 초기화 & dp 쌓을 일 없음
//        if (i == 1) {
//            answer = arr[i];
//            continue;
//        }
//
//        // 제거를 안했을 때는, 이전 dp값 + arr[현재] 최대값 갱신
//        dp[0][i] = max(arr[i], dp[0][i - 1] + arr[i]);
//
//        // 제거 했을 때는, 이전 제거 안한 dp + arr[현재값 최대값 갱신
//        dp[1][i] = max(dp[0][i - 1], dp[1][i - 1] + arr[i]);
//
//        // 두개의 dp, answer 의 max
//        answer = max(answer, max(dp[0][i], dp[1][i]));
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/20.
////
//
