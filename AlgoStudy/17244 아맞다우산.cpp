//#include <bits/stdc++.h>
//
//using namespace std;
//typedef tuple<int, int, int> tp;
//typedef pair<int, int> pl;
//char arr[50][50]; // 지도 입력받는 맵
//int r, c, item;
//int chk[50][50][1 << 5]; // 키는 최대 5개 이므로 0 ~ 4 이니까 5비트 밀어준다.
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//queue<tp> q;
//map<pl, int> key; // {좌표}, 키 번호로 넣어두기
//
//// 아직 비트마스킹 부족하다..
//int main() {
//    cin >> c >> r;
//
//    memset(chk, -1, sizeof chk);
//
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            cin >> arr[i][j];
//
//            if (arr[i][j] == 'S')
//                chk[i][j][0] = 0, q.push({i, j, 0});
//
//            if (arr[i][j] == 'X')
//                key[{i, j}] = item++;
//        }
//    }
//
//    while (!q.empty()) {
//        int fy = get<0>(q.front());
//        int fx = get<1>(q.front());
//        int itm = get<2>(q.front()); // 현재 챙긴 물건 비트로 ex. 0,4 챙김 10001
//        q.pop();
//
//        // 도착지 && 물건 다챙겼으면 break
//        if (arr[fy][fx] == 'E' && itm == (1 << item) - 1) {
//            cout << chk[fy][fx][itm] << endl;
//            break;
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > r - 1 || nx > c - 1 || arr[ny][nx] == '#')
//                continue;
//
//            // 챙길 물건을 만났다면,
//            if (arr[ny][nx] == 'X') {
//                auto it = key[{ny, nx}];
//
//                // 키만큼 비트 체크
//                if (chk[ny][nx][itm | (1 << it)] == -1) {
//                    chk[ny][nx][itm | (1 << it)] = chk[fy][fx][itm] + 1;
//                    q.push({ny, nx, itm | (1 << it)});
//                }
//            }
//
//            // 아니면 그냥 방문체크 (time 기록)
//            if (chk[ny][nx][itm] == -1) {
//                chk[ny][nx][itm] = chk[fy][fx][itm] + 1;
//                q.push({ny, nx, itm});
//            }
//        }
//    }
//}
////
//// Created by Mac2 on 2021/08/09.
////
//
