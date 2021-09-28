//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m, k;
//int vm[301], km[301], dp[101][301][301];
//
//// 냅색 문제, 값이 두 개 이므로 3중 포문을 사용해야 한다
//int main() {
//    fastio
//    cin >> n >> m >> k;
//
//    for (int i = 1; i <= n; ++i)
//        cin >> vm[i] >> km[i];
//
//    for (int i = 1; i <= n; i++) { // 1부터 n까지
//        for (int j = 1; j <= m; j++) { // m 까지
//            for (int l = 1; l <= k; l++) { // k 까지
//                if (vm[i] <= j && km[i] <= l) // i번째 치즈버거가 <= j && 감튀 <= l이면
//                    // max([i-1][j][l],[i-1][j - i 번째 치즈버거][l - i번째 감튀])
//                    dp[i][j][l] = max(dp[i - 1][j][l],
//                                      dp[i - 1][j - vm[i]][l - km[i]] + 1);
//                else // 아니면 이전 값 갱신
//                    dp[i][j][l] = dp[i - 1][j][l];
//            }
//        }
//    }
//
//    cout << dp[n][m][k] << endl;
//}
////
//// Created by Mac2 on 2021/09/26.
////
//
