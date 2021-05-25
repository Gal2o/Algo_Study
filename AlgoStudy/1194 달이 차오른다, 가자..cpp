//#include <iostream>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//
//int n, m, sy, sx, ans = -1;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//int chk[50][50][100]; // a,b,c,d,e,f 비트마스킹 사용 1 ~ 2^5 까지
//char map[50][50];
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> map[i][j];
//
//            if (map[i][j] == '0')
//                sy = i, sx = j, map[i][j] = '.';
//        }
//    }
//
//    queue<tuple<int, int, int, int >> q;
//    chk[sy][sx][0] = 1, q.push({sy, sx, 0, 0});
//
//    while (!q.empty()) {
//        int fy = get<0>(q.front()), fx = get<1>(q.front());
//        int cnt = get<2>(q.front()), key = get<3>(q.front());
//        q.pop();
//
//        if (map[fy][fx] == '1') {
//            ans = cnt;
//            break;
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//            char next = map[ny][nx];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1 || next == '#' || chk[ny][nx][key])
//                continue;
//
//            // . , 1 또는 A~F 일 때, a~f 키가 있으면 가능
//            if ((next == '.' || next == '1') ||
//                (next - 'A' >= 0 && next - 'F' < 6 && key & (1 << (next - 'a'))))
//                chk[ny][nx][key] = 1, q.push({ny, nx, cnt + 1, key});
//
//            // a~f 일 때, 이진법으로 키 갱신해주고 chk 해주고 q.push
//            if (next - 'a' >= 0 && next - 'f' < 6) {
//                int nkey = key | (1 << (next - 'a'));
//
//                if (!chk[ny][nx][nkey])
//                    chk[ny][nx][nkey] = 1, q.push({ny, nx, cnt + 1, nkey});
//            }
//        }
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/17.
////