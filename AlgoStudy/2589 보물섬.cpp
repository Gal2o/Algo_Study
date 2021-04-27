//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//char map[50][50];
//int n, m;
//int answer = 0;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            cin >> map[i][j];
//
//
//
////  육지인 곳에서 개별 bfs를 돌아서 최단 거리가 가장 긴 것이 답이다.
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (map[i][j] == 'L') {
//                queue<pair<int, int>> q;
//                vector<vector<int>> chk(n, vector<int>(m, 0));
//
//                chk[i][j] = 1;
//                q.push({i, j});
//
//                while (!q.empty()) {
//                    int fy = q.front().first, fx = q.front().second;
//                    q.pop();
//
////                  최단 거리에서 가장 긴 것을 답으로 넣어 준다. chk 시작은 1이니까 1을 빼줘야 틀리지 않는다.
//                    if (answer < chk[fy][fx] - 1)
//                        answer = chk[fy][fx] - 1;
//
//                    for (int i = 0; i < 4; i++) {
//                        int ny = fy + dy[i], nx = fx + dx[i];
//
//                        if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1 || map[ny][nx] == 'W' || chk[ny][nx] != 0)
//                            continue;
//
//                        chk[ny][nx] = chk[fy][fx] + 1;
//                        q.push({ny, nx});
//                    }
//                }
//
//            }
//        }
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/04/26.
////
//
//
