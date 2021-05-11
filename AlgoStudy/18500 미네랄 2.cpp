//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//int r, c, n;
//char map[100][100];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//queue<vector<pair<int, int>>> cluster() {
//    queue<vector<pair<int, int>>> tmp;
//    vector<vector<int>> chk(r, vector<int>(c, 0));
//
//    for (int i = r - 1; i > -1; i--) {
//        for (int j = c - 1; j > -1; j--) {
//            if (map[i][j] == 'x' && chk[i][j] == 0) {
//                vector<pair<int, int>> chunk;
//                queue<pair<int, int>> q;
//                q.push({i, j}), chunk.push_back({i, j}), chk[i][j] = 1;
//
//                while (!q.empty()) {
//                    int fy = q.front().first, fx = q.front().second;
//                    q.pop();
//
//                    for (int i = 0; i < 4; i++) {
//                        int ny = fy + dy[i], nx = fx + dx[i];
//
//                        if (ny < 0 || nx < 0 || ny > r - 1 || nx > c - 1 || chk[ny][nx] || map[ny][nx] == '.')
//                            continue;
//
//                        q.push({ny, nx}), chunk.push_back({ny, nx}), chk[ny][nx] = 1;
//                    }
//                }
//
//                tmp.push(chunk);
//            }
//        }
//    }
//
//    return tmp;
//};
//
//int main() {
//    cin >> r >> c;
//
//    for (int i = 0; i < r; i++)
//        for (int j = 0; j < c; j++)
//            cin >> map[i][j];
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//
//        if (i % 2 == 0) {
//            for (int k = 0; k < c; k++) {
//                if (map[r - a][k] == 'x') {
//                    map[r - a][k] = '.';
//                    break;
//                }
//            }
//        } else {
//            for (int k = c - 1; k > -1; k--) {
//                if (map[r - a][k] == 'x') {
//                    map[r - a][k] = '.';
//                    break;
//                }
//            }
//        }
//
//        queue<vector<pair<int, int>>> q = cluster();
//
//        while (!q.empty()) {
//            bool flag = false;
//            vector<pair<int, int>> chunk = q.front();
//            q.pop();
//
//            for (pair<int, int> c : chunk) {
//                if (c.first == r - 1) {
//                    flag = true;
//                    break;
//                }
//            }
//
//            if (flag)
//                continue;
//            else {
//                int height = 1e9;
//                vector<vector<int>> chk(r, vector<int>(c, 0));
//
//                for (pair<int, int> c : chunk)
//                    chk[c.first][c.second] = 1, map[c.first][c.second] = '.';
//
//                for (pair<int, int> c : chunk) {
//                    for (int y = c.first + 1; y < r; y++) {
//                        if (chk[y][c.second] == 1)
//                            break;
//
//                        if (map[y][c.second] == 'x') {
//                            if (height > y - c.first - 1) {
//                                height = y - c.first - 1;
//                                break;
//                            }
//                        }
//
//                        if (map[y][c.second] == '.' && y == r - 1) {
//                            if (height > y - c.first) {
//                                height = y - c.first;
//                                break;
//                            }
//                        }
//                    }
//                }
//
//                for (pair<int, int> c : chunk)
//                    map[c.first + height][c.second] = 'x';
//            }
//        }
//    }
//
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++)
//            cout << map[i][j];
//        cout << endl;
//    }
//}
////
//// Created by Mac2 on 2021/05/05.
////
//
