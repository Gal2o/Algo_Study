//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, char> pl;
//
//int n, m, r, cnt;
//pl arr[101][101];
//int dy[4] = {0, 0, 1, -1}, dx[4] = {1, -1, 0, 0};
//
//void go(int y, int x, int d) {
//    // 넘어져 있으면 return
//    if (arr[y][x].second == 'F')
//        return;
//
//    // 세워져 있으면
//    if (arr[y][x].second == 'S') {
//        // 넘어뜨리고 cnt++
//        arr[y][x].second = 'F', cnt++;
//
//        // k-1 만큼 연쇄적으로 넘어뜨리기
//        for (int i = 1; i <= arr[y][x].first - 1; ++i) {
//            int ny = y + (dy[d] * i), nx = x + (dx[d] * i);
//
//            if (ny < 1 || nx < 1 || ny > n || nx > m)
//                continue;
//
//            go(ny, nx, d);
//        }
//    }
//}
//
//// F: 넘어짐, S: 안넘어짐
//int main() {
//    cin >> n >> m >> r;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            int a;
//            cin >> a;
//
//            // 도미노 길이, 세우기 S로 초기화
//            arr[i][j] = {a, 'S'};
//        }
//    }
//
//    // 라운드만큼 시작
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < 2; ++j) {
//            int a, b;
//            char c;
//            int d;
//
//            cin >> a >> b;
//
//            // 넘어 트리기
//            if (!j) {
//                cin >> c;
//
//                if (c == 'E') d = 0;
//                else if (c == 'W') d = 1;
//                else if (c == 'S') d = 2;
//                else d = 3;
//
//                // 도미노 넘어뜨리기
//                go(a, b, d);
//            } else { // 세우기
//                arr[a][b] = {arr[a][b].first, 'S'};
//            }
//        }
//    }
//
//    cout << cnt << endl;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cout << arr[i][j].second << ' ';
//        }
//        cout << endl;
//    }
//}
//// Created on 2021/10/18.