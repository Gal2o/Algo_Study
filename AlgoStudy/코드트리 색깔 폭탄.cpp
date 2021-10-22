//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int, int, int> tp;
//
//int n, m, answer, bcnt;
//int arr[20][20], chk[20][20], rchk[20][20];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//vector<tp> bomb; // 폭탄 묶음 크기, -red, mxW, -mnH
//vector<queue<pl>> bmem; // 폭탄 묶음 좌표
//
//void gravity() {
//    for (int x = 0; x < n; ++x) {
//        deque<int> q;
//
//        for (int y = 0; y < n; ++y) {
//            if (arr[y][x] == -1) {
//                int init = y - 1;
//
//                if (q.empty())
//                    continue;
//
//                for (int yy = init; yy >= 0; --yy) {
//                    if (q.empty())
//                        break;
//
//                    arr[yy][x] = q.back(), q.pop_back();
//                }
//            } else {
//                if (arr[y][x] != 9)
//                    q.push_back(arr[y][x]), arr[y][x] = 9;
//            }
//        }
//
//        int init = n - 1;
//        while (!q.empty()) {
//            arr[init--][x] = q.back();
//            q.pop_back();
//        }
//    }
//}
//
//void rotate() {
//    deque<int> q;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j)
//            q.push_back(arr[i][j]);
//    }
//
//    for (int x = 0; x < n; ++x)
//        for (int y = n - 1; y >= 0; --y)
//            arr[y][x] = q.front(), q.pop_front();
//}
//
//// 폭탄 묶음의 크기는 q.size()
//// 빨간색 폭탄 갯수 red 가장 적은 것 > 행이 가장 큰 것 > 열이 가장 작은 것
//void search() {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (arr[i][j] != 9 && arr[i][j] > 0 && !chk[i][j]) {
//                memset(rchk, 0, sizeof rchk);
//
//                int mxH = i, mnW = j;
//
//                queue<pl> q, mem;
//                q.emplace(i, j), mem.emplace(i, j), chk[i][j] = 1;
//                int red = 0, color = arr[i][j];
//
//                while (!q.empty()) {
//                    auto[fy, fx] = q.front();
//                    q.pop();
//
//                    for (int k = 0; k < 4; ++k) {
//                        int ny = fy + dy[k], nx = fx + dx[k];
//
//                        if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1
//                            || chk[ny][nx] || arr[ny][nx] == -1 || arr[ny][nx] == 9)
//                            continue;
//
//                        if (arr[ny][nx] == color) {
//                            chk[ny][nx] = 1;
//                            q.emplace(ny, nx), mem.emplace(ny, nx);
//
//                            mxH = max(ny, mxH);
//                            mnW = min(nx, mnW);
//                        }
//
//                        if (arr[ny][nx] == 0 && !rchk[ny][nx]) {
//                            rchk[ny][nx] = 1;
//                            q.emplace(ny, nx), mem.emplace(ny, nx);
//
//                            red++;
//                        }
//                    }
//                }
//
//                bmem.push_back(mem);
//                bomb.emplace_back(-mem.size(), red, -mxH, mnW, bcnt++);
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    // 터트리기 & 중력 & 돌리고 중력
//    while (true) {
//        memset(chk, 0, sizeof chk);
//        bcnt = 0;
//        search();
//
//        if (bmem.empty())
//            break;
//
//        sort(bomb.begin(), bomb.end());
//
//        int size = -get<0>(bomb[0]);
//        int idx = get<4>(bomb[0]);
//
//        if (size < 2)
//            break;
//
//        answer += (size * size);
//
//        while (!bmem[idx].empty()) {
//            auto[fy, fx] = bmem[idx].front();
//            bmem[idx].pop();
//
//            arr[fy][fx] = 9;
//        }
//
//        gravity();
//        rotate();
//        gravity();
//
//        bomb.clear();
//        bmem.clear();
//    }
//
//    cout << answer << endl;
//}
//// Created on 2021/10/22.