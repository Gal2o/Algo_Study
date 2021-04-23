//#include <iostream>
//#include <queue>
//#include <vector>
//#include <tuple>
//
//using namespace std;
//int n, answer = 987654321;
//int map[100][100];
//int initchk[100][100];
//vector<pair<int, int>> land[10001]; // 처음에 100으로 잡아줬었는데 영토는 100*100 까지 생길수 있다
//
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> map[i][j];
//
//
//    int cnt = 1; // 영토를 구분할 변수
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (map[i][j] == 1 && initchk[i][j] == 0) { // initchk는 영토를 구분하기 위해 cnt로 값을 구분지어 준다.
//                queue<pair<int, int>> q;
//                q.push({i, j});
//                land[cnt].push_back({i, j}); // land[idx]에 영토별 좌표를 모두 넣어줘서 2중포문 안돌리게 만든다.
//                initchk[i][j] = cnt;
//
//                while (!q.empty()) {
//                    int fy = q.front().first, fx = q.front().second;
//                    q.pop();
//
//                    for (int i = 0; i < 4; i++) {
//                        int ny = fy + dy[i], nx = fx + dx[i];
//
//                        if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || map[ny][nx] == 0)
//                            continue;
//
//                        if (initchk[ny][nx] == 0) {
//                            initchk[ny][nx] = cnt;
//                            q.push({ny, nx});
//                            land[cnt].push_back({ny, nx});
//                        }
//                    }
//                }
//                cnt++; // 영토 하나 끝났으면 증가한 값으로 초기화 하기
//            }
//        }
//    }
//
//    for (int i = 1; i < cnt; i++) {
//        for (int k = 0; k < land[i].size(); k++) {
//            queue<tuple<int, int, int>> q; // 좌표, 다리의 갯수
//            vector<vector<int>> chk(n, vector<int>(n, 0));
//            q.push({land[i][k].first, land[i][k].second, 0});
//            chk[land[i][k].first][land[i][k].second] = 1;
//
//            while (!q.empty()) {
//                int fy = get<0>(q.front()), fx = get<1>(q.front()), fcnt = get<2>(q.front());
//                q.pop();
//
//                if (initchk[fy][fx] > 0 && initchk[fy][fx] != i) { // 가장 빨리 도착한 값이 제일 짧은 다리
//                    if (answer > fcnt)
//                        answer = fcnt;
//                    break;
//                }
//
//                for (int d = 0; d < 4; d++) {
//                    int ny = fy + dy[d], nx = fx + dx[d];
//
//                    if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || chk[ny][nx])
//                        continue;
//
//                    // 영토가 아니거나 영토인데 같은 지역이 아닌 곳이면 큐에 넣어주기
//                    if (map[ny][nx] == 0 || (map[ny][nx] != 0 && initchk[ny][nx] != i)) {
//                        chk[ny][nx] = 1;
//                        q.push({ny, nx, fcnt + 1});
//                    }
//                }
//            }
//        }
//    }
//    cout << answer - 1 << endl;
//}
////
//// Created by Mac2 on 2021/04/22.
////
//
