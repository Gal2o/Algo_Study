//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int, int> tp;
//
//int n, t, r, c;
//char arr[500][500];
//int chk[500][500][2];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> n >> t >> r >> c;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    memset(chk, 0x3f3f3f, sizeof chk);
//
//    queue<tp> q;
//    q.emplace(0, 0, 0, 0);
//    chk[0][0][0] = 0;
//
//    while (!q.empty()) {
//        auto[fy, fx, cnt, type] = q.front();
//        q.pop();
//
//        if (fy == r - 1 && fx == c - 1)
//            continue;
//
//        // 일반 모드에서 움직이기
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//                continue;
//
//            if (chk[ny][nx][0] > cnt + 1) {
//                chk[ny][nx][0] = cnt + 1;
//                q.emplace(ny, nx, cnt + 1, 0);
//            }
//        }
//
//        // 틀렸던 부분,
//        // 큐에 (fy, fx, cnt + t, 1) 을 넣어서
//        // 변신 모드에서 이동을 하면 틀리다.
//        if (!type)
//            cnt += t;
//
//        // 변신 모드에서 워프 타고 가기
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            // 상하좌우 별, 워프에 도달할 수 있으면 다익스트라
//            while (true) {
//                if (arr[ny][nx] == '#')
//                    break;
//
//                if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//                    break;
//
//                ny += dy[i], nx += dx[i];
//            }
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//                continue;
//
//            if (chk[ny][nx][1] > cnt + 1) {
//                chk[ny][nx][1] = cnt + 1;
//                q.emplace(ny, nx, cnt + 1, 1);
//            }
//        }
//    }
//
//    cout << min(chk[r - 1][c - 1][0], chk[r - 1][c - 1][1]) << endl;
//}
//// Created on 2021/11/18.