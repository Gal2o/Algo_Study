//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, cnt;
//char arr[100][100];
//int chk[100][100];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//void bfs(int color) {
//    memset(chk, 0, sizeof chk);
//    cnt = 0;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (!chk[i][j]) {
//                char st = arr[i][j];
//                queue<pl> q;
//                q.push({i, j}), chk[i][j] = ++cnt;
//
//                while (!q.empty()) {
//                    int y = q.front().first, x = q.front().second;
//                    q.pop();
//
//                    for (int d = 0; d < 4; d++) {
//                        int ny = y + dy[d], nx = x + dx[d];
//
//                        if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1
//                            || chk[ny][nx] != 0)
//                            continue;
//
//                        if (color) {
//                            if (st == 'R' || st == 'G') {
//                                if (arr[ny][nx] == 'B')
//                                    continue;
//                            } else {
//                                if (arr[ny][nx] != st)
//                                    continue;
//                            }
//                        } else {
//                            if (arr[ny][nx] != st)
//                                continue;
//                        }
//
//                        q.push({ny, nx}), chk[ny][nx] = cnt;
//                    }
//                }
//            }
//        }
//    }
//}
//
//int main() {
//
//    cin >> n;
//    // 적록 색약 RG 같음
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            cin >> arr[i][j];
//    }
//
//    bfs(0); // 적록색약 없음
//    cout << cnt << ' ';
//    bfs(1); // 적록색약 있음
//    cout << cnt << endl;
//}
////
//// Created by Mac2 on 2021/08/05.
////
//
