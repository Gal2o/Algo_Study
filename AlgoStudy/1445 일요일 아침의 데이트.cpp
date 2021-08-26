//#include <bits/stdc++.h>
//
//#define MAX 51
//using namespace std;
//typedef tuple<int, int, int, int> tp;
//typedef pair<int, int> pl;
//
//int n, m;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//char arr[MAX][MAX];
//pl chk[MAX][MAX];
//
//priority_queue<tp, vector<tp>, greater<tp>> q;
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> arr[i][j];
//
//            chk[i][j] = {1e9, 1e9};
//
//            if (arr[i][j] == 'S')
//                q.push({0, 0, i, j}), chk[i][j] = {0, 0}, arr[i][j] = '.';
//        }
//    }
//
//    // chk = {쓰레기를 밟음, 쓰레기 주변 지나침}
//    // q = {쓰레기 밟음, 쓰레기 주변 지나침, y, x}
//    while (!q.empty()) {
//        auto[g, gx, fy, fx] = q.top();
//        q.pop();
//
//        // 우선순위 큐이므로 종료 만나면 아웃
//        if (arr[fy][fx] == 'F') {
//            cout << chk[fy][fx].first << ' ' << chk[fy][fx].second << endl;
//            break;
//        }
//
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
//                continue;
//
//            // 다음 좌표가 쓰레기면, g + 1 이 chk보다 작으면 갈 수 있다.
//            if (arr[ny][nx] == 'g') {
//                if (chk[ny][nx].first > g + 1)
//                    chk[ny][nx].first = g + 1, q.push({g + 1, gx, ny, nx});
//            } else {
//                // . 또는 F 일 때,
//                int ngx = gx;
//
//                // F를 만나면 주변 쓰레기 안세고 바로 큐에 넣는다
//                if (arr[ny][nx] == 'F') {
//                    chk[ny][nx] = {g, gx}, q.push({g, gx, ny, nx});
//                    continue;
//                }
//
//                // .일 경우 nny, nnx 로 주변을 검색하고
//                for (int j = 0; j < 4; ++j) {
//                    int nny = ny + dy[j], nnx = nx + dx[j];
//
//                    if (nny < 0 || nnx < 0 || nny > n - 1 || nnx > m - 1)
//                        continue;
//
//                    // 만약 하나라도 있다면 횟수 추가
//                    if (arr[nny][nnx] == 'g') {
//                        ngx++;
//                        break;
//                    }
//                }
//
//                // ! 쓰레기 밟은 횟수와 같거나 작을때 !
//                // 주변 지나치는 횟수가 chk보다 작으면 넣기
//                if (chk[ny][nx].first >= g && chk[ny][nx].second > ngx)
//                    chk[ny][nx] = {g, ngx}, q.push({g, ngx, ny, nx});
//            }
//        }
//    }
//}
////
//// Created by Mac2 on 2021/08/23.
////
//
