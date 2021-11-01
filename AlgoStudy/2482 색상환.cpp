//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define MOD 1000000003
//using namespace std;
//typedef long long ll;
//
//int n, k;
//ll dp[1001][1001];
//
//int main() {
//    cin >> n >> k;
//
//    // dp[n][k] : n개의 색 일렬로, k개의 색을 인접 없이 고르기
//    for (int i = 1; i <= n; ++i) {
//        // ex. 5개의 색을 1개 고르는 방법은 5개이다.
//        dp[i][1] = i;
//
//        // 2개 이상 고르기
//        // n개의 절반 이상 고르는 방법은 없으므로 i / 2 까지
//        for (int j = 2; j <= i / 2; ++j) {
//            // n번째 색을 선택 안하는 경우 + n번째 색을 선택하는 경우
//            dp[i][j] = (dp[i - 1][j] + dp[i - 2][j - 1]) % MOD;
//        }
//    }
//
//    cout << dp[n][k] << endl;
//}
//// Created on 2021/10/11.