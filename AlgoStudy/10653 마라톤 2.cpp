//#include <bits/stdc++.h>
//
//#define MAX 501
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, k;
//vector<pl> cp;
//
//int arr[MAX][MAX], dp[MAX][MAX];
//
//int dist(pl p1, pl p2) {
//    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
//}
//
//int DP(int idx, int cnt) {
//    if (idx == 1) // 1까지 왔으면 0 부터 최솟값 쌓기
//        return 0;
//
//    int &cur = dp[idx][cnt];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 1e9; // 최소값 찾기
//
//    // 남은 횟수로 for문 돌기
//    // i => 0 ~ cnt (건너 뛰지 않거나, cnt만큼 건너 뛸 수 있다
//    for (int i = 0; i <= cnt; i++) {
//        // 다음 idx => idx - 1
//        // 건너 뛴 칸 => i
//        // 이 1보다 작으면 더 이상 안해도 된다 (맵 밖을 나감)
//        if (idx - 1 - i < 1)
//            break;
//
//        // cur = dp[5][2] => 5까지 두번 뛰고 온 최소값은
//        // 이렇게 점화식으로 나타낼 수 있다
//        // dp[5][2] == dp[4][2] + arr[4][5]
//        // => 4까지 2칸 뛰어서 온 최소값 + 4에서 5까지 거리
//        cur = min(cur, DP(idx - 1 - i, cnt - i)
//                       + arr[idx - 1 - i][idx]);
//    }
//
//    return cur;
//}
//
//// 0, N-1은 안건너뛴다
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n >> k;
//
//    for (int i = 0; i < n; ++i) {
//        int x, y;
//        cin >> x >> y;
//
//        cp.emplace_back(x, y);
//    }
//
//    memset(dp, -1, sizeof dp);
//
//    // 1부터 N까지 채우기
//    // 0 11 2 15 4
//    // 0  0 9 10 7
//    // 0  0 0 15 2
//    // 0  0 0 0 15
//    // arr[1][2] => 1에서 2로 가는 거리
//    // arr[3][4] => 3에서 4로 가는 거리
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            arr[i + 1][j + 1] = dist(cp[i], cp[j]);
//        }
//    }
//
//    // n, k부터 시작해서 n이 1까지 탑다운으로 간다
//    cout << DP(n, k);
//}
////
//// Created by Mac2 on 2021/08/25.
////
//
