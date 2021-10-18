//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int, int, int, int> tp;
//
//int n, ey, ex;
//char arr[21][21];
//int chk[21][21][1 << 10];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//queue<tp> q;
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin >> arr[i][j];
//
//            if (arr[i][j] == 'S')
//                arr[i][j] = '.', q.emplace(i, j, 0, 0, 0, 0), chk[i][j][0] = 1;
//
//            if (arr[i][j] == 'E')
//                arr[i][j] = '.', ey = i, ex = j;
//        }
//    }
//
//    while (!q.empty()) {
//        auto[fy, fx, cnt, mx, coin, bit] = q.front();
//        q.pop();
//
//        if (fy == ey && fx == ex && coin >= 3) {
//            return cout << cnt << endl, 0;
//        }
//
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || arr[ny][nx] == '#')
//                continue;
//
//            // 갈 수 있는 '.' 이라면, 해당 bit, 좌표 체크 후 push
//            if (arr[ny][nx] == '.' && !chk[ny][nx][bit]) {
//                chk[ny][nx][bit] = 1;
//                q.emplace(ny, nx, cnt + 1, mx, coin, bit);
//            }
//
//            // 인자 잘 넘기자 !!
//            if (arr[ny][nx] >= '1' && arr[ny][nx] <= '9') {
//                int nval = arr[ny][nx] - '0';
//
//                // 다음 갈 곳이 동전인데 안줍는 경우에는, cnt++ 하고 가기
//                if (!chk[ny][nx][bit])
//                    chk[ny][nx][bit] = 1, q.emplace(ny, nx, cnt + 1, mx, coin, bit);
//
//                // 동전을 줍는다면 ?
//                // bit 체크 하고
//                if (bit & (1 << nval))
//                    continue;
//
//                // 가능 하면 마스킹
//                int nbt = bit | (1 << nval);
//
//                // 갱신된 정보 push
//                if (nval > mx && !chk[ny][nx][nbt]) {
//                    chk[ny][nx][nbt] = 1;
//                    q.emplace(ny, nx, cnt + 1, nval, coin + 1, nbt);
//                }
//            }
//        }
//    }
//
//    cout << -1 << endl;
//}
//// Created on 2021/10/13.