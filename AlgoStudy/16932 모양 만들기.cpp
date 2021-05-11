//#include <iostream>
//#include <vector>
//#include <queue>
//
//#define mx 1000
//using namespace std;
//int n, m;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//int map[mx][mx], chk[mx][mx], zerochk[mx][mx];
//vector<pair<int, int>> one;
//vector<pair<int, int>> zero;
//int group[1000001];
//
//int ans = -1;
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &map[i][j]);
//
//            if (map[i][j]) // 이중 for문 돌기 X, 시간을 단축시키기 위해 1의 좌표만 모은다.
//                one.push_back({i, j});
//        }
//    }
//
//    int chkcnt = 1; // 블록 마다 인덱스 정해주기
//    for (pair<int, int> o : one) {
//        int y = o.first, x = o.second;
//        if (!chk[y][x]) {
//            queue<pair<int, int>> q;
//            chk[y][x] = chkcnt, q.push({y, x});
//            int size = 1; // 블록 그룹마다의 크기 설정
//
//            while (!q.empty()) {
//                int fy = q.front().first, fx = q.front().second;
//                q.pop();
//
//                for (int i = 0; i < 4; i++) {
//                    int ny = fy + dy[i], nx = fx + dx[i];
//
//                    if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1 || chk[ny][nx] != 0)
//                        continue;
//
//                    // 1인 좌표 4방에 있는 0좌표를 중복 없이 모아준다.
//                    // 이것도 이중 for문 안돌게 하기 위해서
//                    if (!map[ny][nx]) {
//                        if (!zerochk[ny][nx])
//                            zero.push_back({ny, nx}), zerochk[ny][nx] = 1;
//
//                        continue;
//                    }
//                    chk[ny][nx] = chkcnt, q.push({ny, nx}), size++;
//                }
//            }
//            group[chkcnt] = size, chkcnt++;
//        }
//    }
//
//    vector<int> gchk(chkcnt, 0); // 시간 초과 원인!! 초기화는 한번만 해주고 다시 0으로 갱신하는 것이 더 빠르다.
//    for (int k = 0; k < zero.size(); k++) {
//        int res = 1;
//
//        for (int i = 0; i < 4; i++) {
//            int ny = zero[k].first + dy[i], nx = zero[k].second + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
//                continue;
//
//            // 둘러싸고 있는 블럭이 같은 블럭일 수도 있으므로 사방 검색하면서 블록을 체크해줘야 중복 발생 X
//            if (map[ny][nx] == 1 && chk[ny][nx] != 0 && !gchk[chk[ny][nx]])
//                gchk[chk[ny][nx]] = 1, res += group[chk[ny][nx]];
//        }
//
//        // gchk 초기화
//        for (int i = 0; i < 4; i++) {
//            int ny = zero[k].first + dy[i], nx = zero[k].second + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
//                continue;
//
//            gchk[chk[ny][nx]] = 0;
//        }
//
//        if (ans < res)
//            ans = res;
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/07.
////