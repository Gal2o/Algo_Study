//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//int chk[101][101];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int m = 6, n = 4;
//vector<vector<int>> picture = {{1, 1, 1, 0},
//                               {1, 2, 2, 0},
//                               {1, 0, 0, 1},
//                               {0, 0, 0, 1},
//                               {0, 0, 0, 3},
//                               {0, 0, 0, 3}};
//
//int main() {
//    int number_of_area = 0;
//    int max_size_of_one_area = 0;
//
//    memset(chk, 0, sizeof chk);
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            if (!chk[i][j] && picture[i][j]) {
//                int color = picture[i][j];
//                int cnt = 1;
//                number_of_area++;
//
//                queue<pl> q;
//                q.push({i, j}), chk[i][j] = 1;
//
//                while (!q.empty()) {
//                    int fy = q.front().first;
//                    int fx = q.front().second;
//                    q.pop();
//
//                    for (int i = 0; i < 4; i++) {
//                        int ny = fy + dy[i], nx = fx + dx[i];
//
//                        if (ny < 0 || nx < 0 || ny > m - 1 || nx > n - 1 || chk[ny][nx])
//                            continue;
//
//                        if (picture[ny][nx] == color) {
//                            chk[ny][nx] = 1, q.push({ny, nx}), cnt++;
//                        }
//                    }
//                }
//
//                max_size_of_one_area = max(max_size_of_one_area, cnt);
//            }
//        }
//    }
//
//    vector<int> answer(2);
//    answer[0] = number_of_area;
//    answer[1] = max_size_of_one_area;
//    cout << answer[0] << ' ' << answer[1] << endl;
//}
////
//// Created by Mac2 on 2021/09/10.
////
//
