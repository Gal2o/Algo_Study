//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, q, t, l, v, res, answer;
//vector<vector<int>> arr;
//int rchk[101][101], chk[101][101];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//void rotate(int sy, int sx, int ey, int ex) {
//    queue<int> q;
//
//    // 정방향 배열을 큐에 담아서
//    for (int i = sy; i < ey; ++i)
//        for (int j = sx; j < ex; ++j)
//            q.push(arr[i][j]);
//
//    // 90도 돌려서 q에 있는 값 넣기
//    for (int i = ex - 1; i >= sx; --i)
//        for (int j = sy; j < ey; ++j)
//            arr[j][i] = q.front(), q.pop();
//}
//
//// 격자 구역 정하기
//void dfs(int y, int x, int val) {
//    // 배열 범위 벗어나거나 방문 했던 곳 return
//    if (y < 0 || x < 0 || y > t - 1 || x > t - 1 || rchk[y][x])
//        return;
//
//    // 모든 격자를 val * val 크기만큼 돌려야 한다.
//    // 돌렸던 곳은 안돌리기 위해 rchk 체크
//    rchk[y][x] = 1;
//    rotate(y, x, y + val, x + val);
//
//    // (y + val, x), (y, x + val) 로 dfs
//    dfs(y + val, x, val);
//    dfs(y, x + val, val);
//}
//
//int main() {
//    fastio
//    cin >> n >> q;
//
//    t = pow(2, n);
//    arr.resize(t, vector<int>(t));
//
//    for (int i = 0; i < t; ++i) {
//        for (int j = 0; j < t; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    for (int i = 0; i < q; ++i) {
//        cin >> l;
//
//        v = pow(2, l);
//        // 돌릴 때마다 초기화
//        memset(rchk, 0, sizeof rchk);
//        dfs(0, 0, v);
//
//        queue<pl> q;
//
//        for (int j = 0; j < t; ++j) {
//            for (int k = 0; k < t; ++k) {
//                if (arr[j][k] > 0) {
//                    int cnt = 0;
//
//                    for (int m = 0; m < 4; ++m) {
//                        int ny = j + dy[m], nx = k + dx[m];
//
//                        if (ny < 0 || nx < 0 || ny > t - 1 || nx > t - 1 || arr[ny][nx] == 0)
//                            continue;
//
//                        cnt++;
//                    }
//
//                    // 주변에 얼음 없으면 얼음 감소 시키기
//                    // but 바로 감소시키지 말고 q에 담아서 한번에
//                    if (cnt < 3)
//                        q.emplace(j, k);
//                }
//            }
//        }
//
//        // 얼음 감소 시키기
//        while (!q.empty()) {
//            auto[fy, fx] =q.front();
//            q.pop();
//
//            arr[fy][fx]--;
//        }
//    }
//
//    // 남아있는 얼음의 양 구하기
//    for (int j = 0; j < t; ++j) {
//        for (int k = 0; k < t; ++k) {
//            if (arr[j][k])
//                res += arr[j][k];
//        }
//    }
//
//    // bfs로 가장 큰 얼음 덩어리 구하기
//    for (int j = 0; j < t; ++j) {
//        for (int k = 0; k < t; ++k) {
//            if (arr[j][k] && !chk[j][k]) {
//                int cnt = 1;
//
//                queue<pl> q;
//                q.emplace(j, k), chk[j][k] = 1;
//
//                while (!q.empty()) {
//                    auto[fy, fx] = q.front();
//                    q.pop();
//
//                    for (int m = 0; m < 4; ++m) {
//                        int ny = fy + dy[m], nx = fx + dx[m];
//
//                        if (ny < 0 || nx < 0 || ny > t - 1 || nx > t - 1 || !arr[ny][nx] || chk[ny][nx])
//                            continue;
//
//                        chk[ny][nx] = 1, cnt++, q.emplace(ny, nx);
//                    }
//                }
//                answer = max(answer, cnt);
//            }
//        }
//    }
//    cout << res << endl << answer << endl;
//}
//// Created on 2021/10/18.