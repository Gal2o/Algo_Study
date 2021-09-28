//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, mx, arr[4][4], chk[4][4], answer;
//
//// 간만에 해멘 완탐
//// 2차원 => 1차원으로 바꿔서 풀기
//void DFS(int idx, int sum) {
//    if (idx >= (n * m)) {
//        answer = max(answer, sum);
//        return;
//    }
//
//    int y = idx / m, x = idx % m;
//
//    if (chk[y][x])
//        DFS(idx + 1, sum);
//    else {
//        int su = arr[y][x];
//
//        // 현재 좌표만, 길이 1
//        chk[y][x] = 1;
//        DFS(idx + 1, sum + su);
//        chk[y][x] = 0;
//
//        // 세로로 길이 늘리기 2~4
//        for (int k = 1; k < n - y; k++) {
//            su *= 10;
//            su += arr[y + k][x];
//
//            // 길이 늘리면서, 중복 있으면, return
//            if (chk[y + k][x]) return;
//
//            for (int i = 1; i <= k; i++) chk[y + i][x] = 1;
//
//            DFS(idx + 1, sum + su);
//
//            for (int i = 1; i <= k; i++) chk[y + i][x] = 0;
//        }
//
//        su = arr[y][x];
//
//        // 가로로 길이 늘리기 2~4
//        for (int k = 1; k < m - x; k++) {
//            su *= 10;
//            su += arr[y][x + k];
//
//            // 중복 return
//            if (chk[y][x + k]) return;
//
//            for (int i = 1; i <= k; i++) chk[y][x + i] = 1;
//
//            DFS(idx + 1, sum + su);
//
//            for (int i = 1; i <= k; i++) chk[y][x + i] = 0;
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            char s;
//            cin >> s;
//
//            arr[i][j] = s - '0';
//        }
//    }
//
//    DFS(0, 0);
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/09/19.
////
//
//
