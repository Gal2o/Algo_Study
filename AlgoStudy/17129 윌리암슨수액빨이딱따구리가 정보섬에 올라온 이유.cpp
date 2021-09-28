//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int> pl;
//
//int n, m, sy, sx;
//int arr[3001][3001], chk[3001][3001];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    // 1 장애물, 2 식구, 3 청국장, 4 스시, 5 맥앤치즈
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            char a;
//            cin >> a;
//
//            arr[i][j] = a - '0';
//
//            if (arr[i][j] == 2)
//                sy = i, sx = j;
//        }
//    }
//
//    queue<pl> q;
//    q.push({sy, sx, 0}), chk[sy][sx] = 1;
//
//    while (!q.empty()) {
//        auto[fy, fx, cnt] = q.front();
//        q.pop();
//
//        if (arr[fy][fx] == 3 || arr[fy][fx] == 4 || arr[fy][fx] == 5) {
//            cout << "TAK" << endl << cnt << endl;
//            return 0;
//        }
//
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1 || chk[ny][nx] || arr[ny][nx] == 1)
//                continue;
//
//            q.push({ny, nx, cnt + 1}), chk[ny][nx] = 1;
//        }
//    }
//
//    cout << "NIE" << endl;
//
//}
////
//// Created by Mac2 on 2021/09/24.
////
//
