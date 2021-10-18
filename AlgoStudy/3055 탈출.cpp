//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int> tp;
//
//int r, c, sy, sx;
//char arr[51][51];
//int chk[51][51];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> r >> c;
//
//    queue<tp> q;
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < c; ++j) {
//            cin >> arr[i][j];
//
//            if (arr[i][j] == '*')
//                q.emplace(i, j, 0), chk[i][j] = 1;
//
//            if (arr[i][j] == 'S')
//                arr[i][j] = '.', sy = i, sx = j;
//        }
//    }
//
//    q.emplace(sy, sx, 0), chk[sy][sx] = 1;
//
//    while (!q.empty()) {
//        auto[fy, fx, cnt] = q.front();
//        q.pop();
//
//        if (arr[fy][fx] == 'D')
//            return cout << cnt << endl, 0;
//
//        if (arr[fy][fx] == '*') {
//            for (int i = 0; i < 4; ++i) {
//                int ny = fy + dy[i], nx = fx + dx[i];
//
//                if (ny < 0 || nx < 0 || ny > r - 1 || nx > c - 1 || chk[ny][nx] || arr[ny][nx] == 'X')
//                    continue;
//
//                if (arr[ny][nx] == '.')
//                    arr[ny][nx] = '*', chk[ny][nx] = 1, q.emplace(ny, nx, cnt);
//            }
//        } else {
//            for (int i = 0; i < 4; ++i) {
//                int ny = fy + dy[i], nx = fx + dx[i];
//
//                if (ny < 0 || nx < 0 || ny > r - 1 || nx > c - 1 || chk[ny][nx] || arr[ny][nx] == 'X')
//                    continue;
//
//                if (arr[ny][nx] == '.' || arr[ny][nx] == 'D')
//                    chk[ny][nx] = 1, q.emplace(ny, nx, cnt + 1);
//            }
//        }
//    }
//
//    cout << "KAKTUS" << endl;
//}
//// Created on 2021/10/18.