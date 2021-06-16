//#include <bits/stdc++.h>
//
//#define mx 1001
//using namespace std;
//int n, m, k, ans = 1e9;
//int sy, sx, finy, finx;
//
//char gym[mx][mx];
//int chk[mx][mx];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
//
//    cin >> n >> m >> k;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> gym[i][j];
//
//            chk[i][j] = 1e9;
//        }
//    }
//
//    cin >> sy >> sx >> finy >> finx;
//    sy--, sx--, finy--, finx--;
//
//    queue<tuple<int, int, int>> q;
//    q.push({sy, sx, 0}), chk[sy][sx] = 0;
//
//    while (!q.empty()) {
//        int fy = get<0>(q.front()), fx = get<1>(q.front());
//        int tm = get<2>(q.front()); // 시간
//        q.pop();
//
//        if (fy == finy && fx == finx) {
//            ans = tm;
//            break;
//        }
//
//        for (int i = 0; i < 4; i++) {
//            for (int j = 1; j <= k; j++) {
//                // 방향 마다 최대 갈 수 있는 거리 까지
//                int ny = fy + dy[i] * j, nx = fx + dx[i] * j;
//
//                // 만약 가는 길이 예외이면 그 방향 중단
//                if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1 || gym[ny][nx] == '#')
//                    break;
//
//                // 처음 방문 하는 지점 & 1 ~ k 만큼 더 갈 수 있으면 체크 & 갱신
//                if (chk[ny][nx] == 1e9) {
//                    chk[ny][nx] = tm + 1;
//                    q.push({ny, nx, tm + 1});
//                } else if (chk[ny][nx] == tm + 1)
//                    // 이전에 길이 끊기거나 최대 거리라서 끝났는데
//                    // 다른 경로를 통해서 이어 갈 수 있다면 이어가기
//                    continue;
//                else // 갈 수 없으면 break
//                    break;
//            }
//        }
//    }
//
//    if (ans == 1e9)
//        cout << -1 << endl;
//    else cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/10.
////
//
//
