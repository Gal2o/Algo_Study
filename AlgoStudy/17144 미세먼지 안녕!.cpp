//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int> tp;
//
//int r, c, t, answer;
//int arr[50][50];
//int upcy, upcx, dwcy, dwcx;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//void dust() {
//    // 변경점을 q에 담아서 한번에 맵 초기화
//    // y, x, 먼지 양
//    queue<tp> q;
//
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < c; ++j) {
//            if (arr[i][j]) {
//                int cnt = 0;
//
//                for (int k = 0; k < 4; ++k) {
//                    int ny = i + dy[k], nx = j + dx[k];
//
//                    if (ny < 0 || nx < 0 || ny > r - 1 || nx > c - 1
//                        || arr[ny][nx] == -1)
//                        continue;
//
//                    cnt++;
//                    q.emplace(ny, nx, arr[i][j] / 5);
//                }
//                q.emplace(i, j, arr[i][j] - (arr[i][j] / 5) * cnt);
//            }
//        }
//    }
//
//    memset(arr, 0, sizeof arr);
//    while (!q.empty()) {
//        auto[y, x, val] = q.front();
//        q.pop();
//        arr[y][x] += val;
//    }
//}
//
//void upcondi() {
//    deque<int> q;
//
//    // 오른
//    for (int i = upcx + 1; i < c - 1; ++i)
//        q.emplace_back(arr[upcy][i]), arr[upcy][i] = 0;
//    // 위
//    for (int i = upcy; i > 0; --i)
//        q.emplace_back(arr[i][c - 1]), arr[i][c - 1] = 0;
//    // 왼
//    for (int i = c - 1; i > 0; --i)
//        q.emplace_back(arr[0][i]), arr[0][i] = 0;
//    // 아래
//    for (int i = 0; i < upcy; ++i)
//        q.emplace_back(arr[i][0]), arr[i][0] = 0;
//
//    // 앞에 새로운 공기, 마지막 공기는 정화되니까 빼주기
//    q.emplace_front(0);
//    q.pop_back();
//
//    for (int i = upcx + 1; i < c - 1; ++i)
//        arr[upcy][i] = q.front(), q.pop_front();
//    for (int i = upcy; i > 0; --i)
//        arr[i][c - 1] = q.front(), q.pop_front();
//    for (int i = c - 1; i > 0; --i)
//        arr[0][i] = q.front(), q.pop_front();
//    for (int i = 0; i < upcy; ++i)
//        arr[i][0] = q.front(), q.pop_front();
//}
//
//void downcondi() {
//    deque<int> q;
//
//    // 오른
//    for (int i = dwcx + 1; i < c - 1; ++i)
//        q.emplace_back(arr[dwcy][i]), arr[dwcy][i] = 0;
//    // 아래
//    for (int i = dwcy; i < r - 1; ++i)
//        q.emplace_back(arr[i][c - 1]), arr[i][c - 1] = 0;
//    // 왼
//    for (int i = c - 1; i > 0; --i)
//        q.emplace_back(arr[r - 1][i]), arr[r - 1][i] = 0;
//    // 위
//    for (int i = r - 1; i > dwcy; --i)
//        q.emplace_back(arr[i][0]), arr[i][0] = 0;
//
//    // 앞에 새로운 공기 추가, 마지막 공기는 정화되니까 빼주기
//    q.emplace_front(0);
//    q.pop_back();
//
//    for (int i = dwcx + 1; i < c - 1; ++i)
//        arr[dwcy][i] = q.front(), q.pop_front();
//    for (int i = dwcy; i < r - 1; ++i)
//        arr[i][c - 1] = q.front(), q.pop_front();
//    for (int i = c - 1; i > 0; --i)
//        arr[r - 1][i] = q.front(), q.pop_front();
//    for (int i = r - 1; i > dwcy; --i)
//        arr[i][0] = q.front(), q.pop_front();
//}
//
//int main() {
//    cin >> r >> c >> t;
//
//    int cnt = 0;
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < c; ++j) {
//            cin >> arr[i][j];
//
//            if (arr[i][j] == -1) {
//                if (!cnt)
//                    upcy = i, upcx = j, cnt++;
//                else
//                    dwcy = i, dwcx = j;
//            }
//
//        }
//    }
//
//    while (t--) {
//        // 미세먼지 확산
//        dust();
//
//        // 공기 청정기 실행
//        upcondi();
//
//        downcondi();
//    }
//
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < c; ++j) {
//            if (arr[i][j] != -1)
//                answer += arr[i][j];
//        }
//    }
//
//    cout << answer << endl;
//}
//// Created on 2021/11/17.