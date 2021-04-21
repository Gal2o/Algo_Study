//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//int w, h, mirror = 987654321;
//char map[100][100];
//pair<int, int> st, fin;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> w >> h;
//
//    int tmp = 0;
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            cin >> map[i][j];
//
//            if (tmp == 0 && map[i][j] == 'C')
//                st.first = i, st.second = j, tmp++;
//
//            if (tmp == 1 && map[i][j] == 'C')
//                fin.first = i, fin.second = j;
//        }
//    }
//
//    queue<tuple<int, int, int, int>> q;
//    vector<vector<int>> chk(h, vector<int>(w, 987654321));
//
//    chk[st.first][st.second] = 0;
//    for(int i = 0; i <4; i ++ )
//        q.push({st.first, st.second, i, 0});
//    // cnt를 따로 둬야 큐에 들어간 객체 마다 cnt를 가질 수 있음
//
//    while (!q.empty()) {
//        int fy = get<0>(q.front()), fx = get<1>(q.front()),
//                fd = get<2>(q.front()), fcnt = get<3>(q.front());
//        q.pop();
//
//        if (fy == fin.first && fx == fin.second) {
//            if (mirror > chk[fy][fx])
//                mirror = chk[fy][fx];
//            continue;
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > h - 1 || nx > w - 1 || map[ny][nx] == '*')
//                continue;
//
//            if (fd != i) {
//                if (chk[ny][nx] > fcnt) {
//                    chk[ny][nx] = fcnt + 1;
//                    q.push({ny, nx, i, fcnt + 1});
//                }
//            } else {
//                if (chk[ny][nx] >= fcnt) {
//                    chk[ny][nx] = fcnt;
//                    q.push({ny, nx, i, fcnt});
//                }
//            }
//        }
//    }
//    cout << mirror << endl;
//}