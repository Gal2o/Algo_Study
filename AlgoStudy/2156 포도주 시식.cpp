//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, arr[10001], dp[10001];
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i)
//        cin >> arr[i];
//
//    dp[1] = arr[1];
//    dp[2] = arr[1] + arr[2];
//
//    // 포도주는 연속으로 세 잔 마실 수 없다.
//    // 세번째 잔의 최대 값은
//    // 첫번째 + 두번째 잔까지 먹었을때 || 첫번째 + 세 번째 먹었을 때 || 두번째 + 세번째 먹었을 때
//    for (int i = 3; i <= n; i++) {
//        dp[i] = max(dp[i - 1], max(dp[i - 2] + arr[i], dp[i - 3] + arr[i] + arr[i - 1]));
//    }
//
//    cout << dp[n] << endl;
//}
////
//// Created by Mac2 on 2021/10/04.
////
//
