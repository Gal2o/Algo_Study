//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//int n, m;
//int cnt; // 섬 갯수 카운트
//char land[50][50];
//int chk[50][50]; // 섬 구분 chk
//vector<pl> rc[2555]; // 각 땅의 좌표가 들어있는 벡터
//vector<int> landinfo[2555]; // 땅들이 어디에 속해 있는지 알아내기
//int height[2555]; // 각 섬들의 높이 저장
//int ans[2555];
//int py[8] = {-1, -1, -1, 0, 0, 1, 1, 1}, px[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//// dfs로 자신에게 속해 있는 섬 타고가서 높이 확인
//int chksz(int idx) {
//    if (height[idx] != -1) // 이미 높이가 정해 졌으면 그대로 리턴
//        return height[idx];
//
//    // 섬 높이 0으로 시작
//    height[idx] = 0;
//
//    // landinfo 에는 자신이 감싸고 있는 섬들이 있다.
//    for (auto next : landinfo[idx])
//        // 최대 높이에 + 1이 자신의 섬 높이
//        height[idx] = max(height[idx], chksz(next) + 1);
//
//    return height[idx];
//}
//
//// 각각 어느 섬에 속해 있는지 확인해보기
//void chkinclude() {
//    for (int i = 0; i <= cnt; i++) {
//        queue<pl> q;
//        int ichk[n][m]; // 경계선 찾기
//        int lcnt[cnt + 1]; // 감싸고 있는 섬 갯수 세기
//        memset(ichk, 0, sizeof(ichk));
//        memset(lcnt, 0, sizeof(lcnt));
//        pl mx = {0, 0}; // 섬 번호, 해당 섬 번호의 갯수 = 많이 만난 것이 자신을 감싼 섬이다.
//        bool flag = false; // 밖까지 도달할 수 있으면 감싸져 있지 않다.
//
//        for (auto i : rc[i])
//            q.push({i.first, i.second}), ichk[i.first][i.second] = 1;
//
//        while (!q.empty() && !flag) {
//            int fy = q.front().first, fx = q.front().second;
//            q.pop();
//
//            for (int d = 0; d < 4; d++) {
//                int ny = fy + dy[d], nx = fx + dx[d];
//
//                // 만약 바깥까지 갈 수 있다면 감싸지는 섬이 아니다.
//                if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1) {
//                    flag = true;
//                    break;
//                }
//
//                // '.' 이면 bfs 계속 돌기
//                if (!ichk[ny][nx] && land[ny][nx] == '.')
//                    q.push({ny, nx}), ichk[ny][nx] = 1;
//
//                // 다른 섬을 만나면 ichk = 1 하고 만난 섬의 갯수 ++
//                if (!ichk[ny][nx] && land[ny][nx] == 'x') {
//                    lcnt[chk[ny][nx]]++, ichk[ny][nx] = 1;
//
//                    // 자기 자신 섬이 아닌 가장 많이 만난 섬이 자신을 감싸고 있다.
//                    if (lcnt[chk[ny][nx]] > mx.second)
//                        mx.first = chk[ny][nx], mx.second = lcnt[chk[ny][nx]];
//                }
//            }
//        }
//
//        // 자신을 감싸는 섬에 자신의 섬 번호 push
//        if (!flag)
//            landinfo[mx.first].push_back(i);
//    }
//}
//
//// chk 배열로 섬 구분해주기
//void landsel() {
//    cnt = -1;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (land[i][j] == 'x' && chk[i][j] == -1) {
//                cnt++;
//                queue<pl> q;
//                q.push({i, j}), chk[i][j] = cnt, rc[cnt].push_back({i, j});
//
//                while (!q.empty()) {
//                    int fy = q.front().first, fx = q.front().second;
//                    q.pop();
//
//                    for (int i = 0; i < 8; i++) {
//                        int ny = fy + py[i], nx = fx + px[i];
//
//                        if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1 || land[ny][nx] == '.')
//                            continue;
//
//                        if (chk[ny][nx] == -1) {
//                            chk[ny][nx] = cnt;
//                            q.push({ny, nx});
//                            // 섬 번호에 좌표 넣어주기
//                            rc[cnt].push_back({ny, nx});
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
//
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i)
//        for (int j = 0; j < m; ++j)
//            cin >> land[i][j], chk[i][j] = -1;
//
//    // chk 배열 갱신하기
//    landsel();
//
//    // 섬이 존재하지 않으면 exit
//    if (cnt == -1) {
//        cout << -1 << endl;
//        return 0;
//    }
//
//    // 자신을 감싸는 섬에 자신의 섬 번호 넣어주기
//    chkinclude();
//
//    // 섬의 갯수만큼 for문 돌면서 dp 쌓기
//    memset(height, -1, sizeof(height));
//    for (int i = 0; i <= cnt; i++)
//        height[i] = chksz(i);
//
//    int mx = 0;
//    // 섬 갯수 세기 & 최대 높이 구하기
//    for (int i = 0; i <= cnt; i++) {
//        ans[height[i]]++;
//
//        if (height[i] > mx)
//            mx = height[i];
//    }
//
//    // 최대높이 까지 순서대로 섬 갯수 출력
//    for (int i = 0; i <= mx; i++)
//        cout << ans[i] << ' ';
//}
////
//// Created by Mac2 on 2021/06/11.
////
//
