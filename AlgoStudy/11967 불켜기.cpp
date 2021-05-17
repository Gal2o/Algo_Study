//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//int n, m, ans = 1;
//int map[101][101], lchk[101][101];
//vector<pair<int, int>> light[101][101];
//vector<vector<int>> chk(101, vector<int>(101, 0));
//
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int x, y, a, b;
//        scanf("%d %d %d %d", &x, &y, &a, &b);
//
//        // 해당 좌표가 가지고 있는 스위치 좌표를 받는다.
//        light[x][y].push_back({a, b});
//    }
//
//    queue<pair<int, int>> q;
//    lchk[1][1] = 1, chk[1][1] = 1, q.push({1, 1});
//
//    // (1,1) 부터 시작
//    while (!q.empty()) {
//        int fy = q.front().first, fx = q.front().second;
//        q.pop();
//
//        // 해당 좌표에서 가지고 있는 스위치 좌표들을 탐색
//        for (int i = 0; i < light[fy][fx].size(); i++) {
//            int ny = light[fy][fx][i].first, nx = light[fy][fx][i].second;
//
//            // 만약 꺼져있는데 켰을 때, ans ++ 하고 방문 체크를 초기화 해준다.
//            if(!lchk[ny][nx]) {
//                lchk[ny][nx] = 1, ans++;
//                chk = vector<vector<int>>(n + 1, vector<int>(n + 1, 0));
//            }
//        }
//
//        // 불 켜진 곳에서 상하좌우 갈 수 있는 곳을 탐색
//        for (int i = 0; i < 4; i++) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 1 || nx < 1 || ny > n || nx > n || !lchk[ny][nx] || chk[ny][nx])
//                continue;
//
//            chk[ny][nx] = 1, q.push({ny, nx});
//        }
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/14.
////
//
