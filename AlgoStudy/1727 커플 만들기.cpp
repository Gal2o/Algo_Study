//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, a;
//int men[1001], wom[1001], dp[1001][1001];
//
//// 다시 풀기
//// 어려운 디피..
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> men[i];
//    }
//
//    for (int i = 0; i < m; ++i) {
//        cin >> wom[i];
//    }
//
//    // 남자 여자 모두 오름차순으로 정렬
//    // 남 : 1 2 3 4
//    // 여 : 5 6 7 8
//    sort(men, men + n);
//    sort(wom, wom + m);
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            dp[i][j] = dp[i - 1][j - 1] + abs(men[i - 1] - wom[j - 1]);
//
//            if (i > j)
//                dp[i][j] = min(dp[i][j], dp[i - 1][j]);
//            else if (i < j)
//                dp[i][j] = min(dp[i][j], dp[i][j - 1]);
//
//            cout << dp[i][j] << ' ';
//        }
//        cout << endl;
//    }
//
//    cout << dp[n][m] << endl;
//}
////
//// Created by Mac2 on 2021/10/01.
////
//
