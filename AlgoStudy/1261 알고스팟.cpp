//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int> tp;
//
//int n, m;
//int arr[101][101];
//int chk[101][101];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//int answer = 1e9;
//
//// 방문 표시하려고 3차원 [101][101][10001] 했는데 메모리 초과,
//// 다익스트라로 풀면 된다.
//int main() {
//    cin >> m >> n;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            char a;
//            cin >> a;
//            arr[i][j] = a - '0';
//        }
//    }
//
//    fill(&chk[0][0], &chk[n][m + 1], 1e9);
//
//    queue<tp> q;
//    chk[0][0] = 0;
//    q.emplace(0, 0, 0);
//
//    while (!q.empty()) {
//        auto[fy, fx, cnt] = q.front();
//        q.pop();
//
//        if (fy == n - 1 && fx == m - 1) {
//            answer = min(answer, cnt);
//            continue;
//        }
//
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
//                continue;
//
//            if (!arr[ny][nx]) {
//                if (chk[ny][nx] > cnt) {
//                    chk[ny][nx] = cnt;
//                    q.emplace(ny, nx, cnt);
//                }
//            } else {
//                if (chk[ny][nx] > cnt + 1) {
//                    chk[ny][nx] = cnt + 1;
//                    q.emplace(ny, nx, cnt + 1);
//                }
//            }
//        }
//    }
//
//    cout << answer << endl;
//}
//// Created on 2021/11/08.