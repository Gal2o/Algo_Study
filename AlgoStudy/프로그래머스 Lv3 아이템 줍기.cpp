//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 201
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//
//int arr[mx][mx], line[mx][mx], chk[mx][mx];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//int ky[8] = {-1, -1, -1, 0, 0, 1, 1, 1}, kx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
//
//// 좌표가 겹치므로, 모두 2배를 해서 정답에 / 2를 하자
//void makeLine(vector<vector<int>> r) {
//    for (auto i: r) {
//        int sx = i[0] * 2, sy = i[1] * 2, ex = i[2] * 2, ey = i[3] * 2;
//
//        // 직사각형 모두 칠하기
//        for (int j = sy; j <= ey; ++j) {
//            for (int k = sx; k <= ex; ++k) {
//                arr[j][k] = 1;
//            }
//        }
//    }
//
//    // 바깥에 있는 0에서 만나는 1만 라인 만들어주기
//    queue<pl> q;
//    q.emplace(0, 0), chk[0][0] = 1;
//    while (!q.empty()) {
//        auto[fy, fx] = q.front();
//        q.pop();
//
//        // 여기서 예외 처리는 1 ~ 100 보다 밖이니까 0이랑 mx - 1 이다
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > mx - 1 || nx > mx - 1 || chk[ny][nx] || arr[ny][nx])
//                continue;
//
//            // 8방향으로 검사해서 1 있으면 라인 그려주기
//            for (int j = 0; j < 8; ++j) {
//                int nny = ny + ky[j], nnx = nx + kx[j];
//
//                if (nny < 0 || nnx < 0 || nny > mx - 1 || nnx > mx - 1)
//                    continue;
//
//                if (arr[nny][nnx])
//                    line[nny][nnx] = 1;
//            }
//
//            chk[ny][nx] = 1, q.emplace(ny, nx);
//        }
//    }
//}
//
//int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
//    int answer = 0;
//
//    makeLine(rectangle);
//    memset(chk, 0, sizeof chk);
//
//    queue<tp> q;
//    q.emplace(characterY * 2, characterX * 2, 0), chk[characterY * 2][characterX * 2] = 1;
//
//    // 라인 따라 bfs가면 끝
//    while (!q.empty()) {
//        auto[fy, fx, cnt] = q.front();
//        q.pop();
//
//        if (fy == itemY * 2 && fx == itemX * 2) {
//            answer = cnt;
//            break;
//        }
//
//        // 여기서의 예외는 1 ~ 100 까지니까 1부터 100으로 예외 처리
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 1 || nx < 1 || ny > 100 || nx > 100 || chk[ny][nx] || !line[ny][nx])
//                continue;
//
//            chk[ny][nx] = 1, q.emplace(ny, nx, cnt + 1);
//        }
//    }
//
//    return answer /= 2;
//}
//
//int main() {
//    cout << solution({{1, 1, 7, 4},
//                      {3, 2, 5, 5},
//                      {4, 3, 6, 9},
//                      {2, 6, 8, 8}}, 1, 3, 7, 8);
//}
//// Created on 2021/11/01.