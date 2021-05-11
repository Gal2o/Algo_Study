//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//int n, initd;
//char map[50][50];
//int chk[50][50][2];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//vector<pair<int, int>> tree; // 처음 나무의 시작 좌표
//vector<pair<int, int>> fin;  // 나무의 종점 좌표
//
//// 가운데의 좌표를 저장한다.
//struct mid {
//    int y, x, d; // 0이면 가로, 1이면 세로
//};
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> map[i][j];
//
//            // 좌표만으로 계산을 할 거기 때문에 map상의 B,E는 0으로 초기화 해준다
//            if (map[i][j] == 'B')
//                map[i][j] = '0', tree.push_back({i, j});
//
//            if (map[i][j] == 'E')
//                map[i][j] = '0', fin.push_back({i, j});
//        }
//    }
//
//    queue<pair<int, mid>> q;
//
//    // 입력받은 통나무의 y값이 다르다? 세로 : 가로 -> initd 에 저장
//    tree[0].first != tree[1].first ? initd = 1 : initd = 0;
//    // 초기 값 chk, q.push()
//    q.push({0, {tree[1].first, tree[1].second, initd}});
//    chk[tree[1].first][tree[1].second][initd] = 1;
//
//    // 최종 initd 는 목적지의 방향 값
//    fin[0].first != fin[1].first ? initd = 1 : initd = 0;
//
//    while (!q.empty()) {
//        int cnt = q.front().first;
//        mid m = q.front().second;
//        q.pop();
//
//        // 현재 통나무의 가운데 값이 목적지의 가운데 좌표와 방향까지 맞으면 탈출
//        if (m.d == initd && m.y == fin[1].first && m.x == fin[1].second) {
//            cout << cnt << endl;
//            return 0;
//        }
//
//        for (int i = 0; i < 5; i++) {
//            if (i < 4) { // 상하좌우로 움직이기
//                int ny = m.y + dy[i], nx = m.x + dx[i];
//                // 방향이 가로 일 떄, 나머지 통나무 위치들
//                int uy = m.y - 1 + dy[i], by = m.y + 1 + dy[i];
//                // 방향이 세로 일 때, 나머지 통나무 위치들
//                int lx = m.x - 1 + dx[i], rx = m.x + 1 + dx[i];
//
//                // 맵 밖으로 넘어가거나, 장애물이 있거나, 같은 방향의 chk 가 존재하면 continue
//                if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || map[ny][nx] == '1' || chk[ny][nx][m.d])
//                    continue;
//
//                if (m.d == 0) { // 가로 일 때, 예외처리
//                    if (lx < 0 || map[ny][lx] == '1') continue;
//                    if (rx > n - 1 || map[ny][rx] == '1') continue;
//                } else {        // 세로 일 떄, 예외처리
//                    if (uy < 0 || map[uy][nx] == '1') continue;
//                    if (by > n - 1 || map[by][nx] == '1') continue;
//                }
//
//                // 상하좌우로 움직일 때는 방향이 고정이므로 좌표만 바꿔서 q.push()
//                chk[ny][nx][m.d] = 1, q.push({cnt + 1, {ny, nx, m.d}});
//            } else { // 회전 하기
//                bool availR = true;
//
//                // 3x3 주변에 장애물이 있는지 체크
//                for (int a = m.y - 1; a <= m.y + 1; a++) {
//                    for (int b = m.x - 1; b <= m.x + 1; b++) {
//                        if (map[a][b] == '1' || a < 0 || b < 0 || a > n - 1 || b > n - 1) {
//                            availR = false;
//                            break;
//                        }
//                    }
//                    if (!availR)
//                        break;
//                }
//
//                if (!availR)
//                    continue;
//
//                if (m.d == 0 && !chk[m.y][m.x][1])  // 가로 -> 세로로 돌리기
//                    chk[m.y][m.x][1] = 1, q.push({cnt + 1, {m.y, m.x, 1}});
//                if (m.d == 1 && !chk[m.y][m.x][0])  // 세로 -> 가로로 돌리기
//                    chk[m.y][m.x][0] = 1, q.push({cnt + 1, {m.y, m.x, 0}});
//            }
//        }
//    }
//
//    cout << 0 << endl;
//}
////
//// Created by Mac2 on 2021/04/28.
////
//
