//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, answer;
//int arr[1001][1001];
//int dp[1001][1001];
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            if (arr[i][j] == 0) {
//                int temp = 1e9;
//                temp = min(temp, min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])));
//
//                if (temp == 1e9)
//                    temp = 0;
//
//                dp[i][j] = temp + 1;
//                answer = max(answer, temp + 1);
//            }
//        }
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/10/03.
////
//
