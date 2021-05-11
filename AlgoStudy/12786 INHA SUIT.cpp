//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define mx 1e9
//
//using namespace std;
//int n, t, ans = mx;
//vector<vector<int>> dp;
//vector<int> tree[101];
//
//int main() {
//    cin >> n;
//    cin >> t;
//
//    for (int i = 1; i <= n; i++) {
//        int a, b;
//        cin >> a;
//
//        for (int j = 0; j < a; j++) {
//            cin >> b; // 나무 구멍 높이를 벡터로 받기
//            tree[i].push_back(b);
//        }
//    }
//
//    // dp 배열 초기화
//    dp = vector<vector<int>>(21, vector<int>(n + 1, mx));
//
//    // 높이(y), 나무 위치(x)
//    // 시작 위치 dp초기화
//    dp[1][0] = 0;
//    tree[0].push_back(1); // 틀린 원인! 처음 시작 나무위치를 tree에 안넣어줌..
//    for (int i = 1; i <= n; i++) { // 현재 나무 위치
//        for (int j = 0; j < tree[i].size(); j++) { // 나무 위치 별, 구멍 순회
//            int h = tree[i][j]; // j번째 구멍
//
//            // o (이전 높이와 같은 높이)
//            if (dp[h][i - 1] != mx)
//                dp[h][i] = min(dp[h][i - 1], dp[h][i]);
//
//            // a (이전 높이에서 + 1)
//            if (h - 1 >= 1 && dp[h - 1][i - 1] != mx)
//                dp[h][i] = min(dp[h - 1][i - 1], dp[h][i]);
//
//            // b
//            // 2의 배수이고, h/2 높이의 이전 구멍이 존재 한다면
//            if (h % 2 == 0 && dp[h / 2][i - 1] != mx)
//                dp[h][i] = min(dp[h / 2][i - 1], dp[h][i]);
//
//            // 이전 나무에서 높이가 10이상이면 b 기능을 사용하면 무조건 높이가 20이므로,
//            // h가 20이면 이전 나무에서 높이 10 ~ 20 까지 확인 후 dp 갱신
//            if (h == 20) {
//                for (int k = 10; k <= 20; k++) {
//                    if (dp[k][i - 1] != mx)
//                        dp[h][i] = min(dp[k][i - 1], dp[h][i]);
//                }
//            }
//
//            // c (이전 높이에서 - 1)
//            if (h + 1 <= 20 && dp[h + 1][i - 1] != mx)
//                dp[h][i] = min(dp[h + 1][i - 1], dp[h][i]);
//
//            // t
//            // 이전 나무의 높이 배열 순회
//            // 값이 존재 한다면, (t 기능 사용횟수 + 1, 현재 값) 의 최솟값
//            for (int k = 0; k < tree[i - 1].size(); k++)
//                dp[h][i] = min(dp[tree[i - 1][k]][i - 1] + 1, dp[h][i]);
//        }
//    }
//
//    // 마지막 나무의 기능 횟수 중 가장 작은 방법
//    for (int i = 1; i <= 20; i++)
//        ans = min(ans, dp[i][n]);
//
//    // ans(min) 이 t 횟수보다 크면 -1
//    if (ans > t)
//        cout << -1 << endl;
//    else
//        cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/06.
////
