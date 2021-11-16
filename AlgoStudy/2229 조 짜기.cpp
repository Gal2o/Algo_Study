//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, arr[1001], dp[1001];
//
//int main() {
//    fastio
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//
//    // 2 5 7 1 3 4 8 6 9 3
//    // |--||--||---||----|
//    for (int i = 1; i <= n; ++i) {
//        int low = 10000, high = 0;
//
//        // i ~ j 구간별, 최소, 최대 점수를 구하고
//        // dp에 max값을 채워주기
//        for (int j = i; j >= 1; --j) {
//            low = min(low, arr[j]);
//
//            high = max(high, arr[j]);
//
//            // 현재 dp값 과 점수 차 + 이전 dp값 max
//            dp[i] = max(dp[i], high - low + dp[j - 1]);
//        }
//    }
//
//    cout << dp[n] << endl;
//}
//// Created on 2021/11/16.