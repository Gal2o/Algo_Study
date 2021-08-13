//#include <bits/stdc++.h>
//
//using namespace std;
//typedef tuple<int, int, int> tp;
//int N, M, answer = 1e9;
//int sy, sx, ey, ex;
//int arr[101][101], chk[101][101][3];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//// 3차원 배열 정하는데서 생각이 멈춤..
//// 어차피 가짓수가 3개니까 3개의 주소만 더 주면된다.
//int main() {
//    cin >> N >> M >> sy >> sx >> ey >> ex;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            cin >> arr[i][j];
//
//            for (int k = 0; k < 3; k++)
//                chk[i][j][k] = 1e9;
//        }
//    }
//
//    queue<tp> q;
//    chk[sy][sx][1] = 0;
//    q.push({sy, sx, 1});
//
//    // cnt 값에 맞게 for문 돌려주고
//    // cnt 는 0, 1, 2 이여만 하므로, 다음 cnt 는 (cnt + 1) % 3
//    while (!q.empty()) {
//        int fy = get<0>(q.front()), fx = get<1>(q.front());
//        int cnt = get<2>(q.front());
//        q.pop();
//
//        if (fy == ey && fx == ex) {
//            answer = min(answer, chk[fy][fx][cnt]);
//        }
//
//        if (cnt % 3 == 1) {
//            for (int i = 0; i < 2; i++) {
//                int ny = fy + dy[i], nx = fx + dx[i];
//
//                if (ny < 1 || nx < 1 || ny > N || nx > M || arr[ny][nx] == -1)
//                    continue;
//
//                int next = chk[fy][fx][cnt] + arr[ny][nx];
//                int ncnt = (cnt + 1) % 3;
//                if (chk[ny][nx][ncnt] > next) {
//                    chk[ny][nx][ncnt] = next;
//                    q.push({ny, nx, ncnt});
//                }
//            }
//        } else if (cnt % 3 == 2) {
//            for (int i = 2; i < 4; i++) {
//                int ny = fy + dy[i], nx = fx + dx[i];
//
//                if (ny < 1 || nx < 1 || ny > N || nx > M || arr[ny][nx] == -1)
//                    continue;
//
//                int next = chk[fy][fx][cnt] + arr[ny][nx];
//                int ncnt = (cnt + 1) % 3;
//
//                if (chk[ny][nx][ncnt] > next) {
//                    chk[ny][nx][ncnt] = next;
//                    q.push({ny, nx, ncnt});
//                }
//            }
//        } else {
//            for (int i = 0; i < 4; i++) {
//                int ny = fy + dy[i], nx = fx + dx[i];
//
//                if (ny < 1 || nx < 1 || ny > N || nx > M || arr[ny][nx] == -1)
//                    continue;
//
//                int next = chk[fy][fx][cnt] + arr[ny][nx];
//                int ncnt = (cnt + 1) % 3;
//
//                if (chk[ny][nx][ncnt] > next) {
//                    chk[ny][nx][ncnt] = next;
//                    q.push({ny, nx, ncnt});
//                }
//            }
//        }
//    }
//
//    if (answer == 1e9)
//        answer = -1;
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/09.
////
//
