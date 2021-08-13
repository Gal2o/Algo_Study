//#include <bits/stdc++.h>
//
//#define mx 1000000009
//using namespace std;
//typedef pair<int, int> pl;
//typedef long long ll;
//int r, c;
//int chk[400][400];
//pl arr[400][400];
//int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1}, dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
//
//int main() {
//    cin >> r >> c;
//
//    queue<pl> q;
//    chk[0][0] = 1;
//    arr[0][0].second = 1; // 시작 가짓수 1
//    q.push({0, 0});
//
//    while (!q.empty()) {
//        int fy = q.front().first, fx = q.front().second;
//        q.pop();
//
//        for (int d = 0; d < 8; d++) {
//            int ny = fy + dy[d], nx = fx + dx[d];
//
//            if (ny < 0 || nx < 0 || ny > r - 1 || nx > c - 1)
//                continue;
//
//            // 방문을 안했거나, 이전 + 1 거리인 위치면,
//            if (!chk[ny][nx] || arr[ny][nx].first == arr[fy][fx].first + 1) {
//                // 가짓수 더해주기
//                arr[ny][nx].second = (ll) (arr[ny][nx].second + arr[fy][fx].second) % mx;
//
//                // 방문처리, 거리 갱신
//                if (!chk[ny][nx]) {
//                    arr[ny][nx].first = arr[fy][fx].first + 1;
//                    q.push({ny, nx});
//                    chk[ny][nx] = 1;
//                }
//            }
//        }
//    }
//
//    // 가짓수가 없다면, 방문 X
//    if (!arr[r - 1][c - 1].second)
//        cout << "None" << endl;
//    else
//        cout << arr[r - 1][c - 1].first << ' ' << arr[r - 1][c - 1].second << endl;
//}
////
//// Created by Mac2 on 2021/08/09.
////
//
