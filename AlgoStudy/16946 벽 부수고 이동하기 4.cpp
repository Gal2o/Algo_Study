//#include <bits/stdc++.h>
//
//#define mx 1001
//using namespace std;
//
//typedef pair<int, int> pl;
//int n, m;
//int cnt, range;  // 어떤 한 0의 구역에 0 갯수 세기 cnt, 0의 갯수가 몇 개인지 셀 range
//int arr[mx][mx]; // 맵 입력받을 배열
//int chk[mx][mx]; // 0의 구역을 나눠 줄 배열
//
//vector<int> rangeV; // 구역마다 0의 갯수는 몇개인지
//vector<pl> zero;
//
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n >> m;
//    rangeV.push_back(0); // range 는 1부터 체크할 것이기 때문에 0을 채워주기
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            char a;
//            cin >> a;
//            arr[i][j] = a - '0';
//
//            if (arr[i][j] == 0) // 0인 좌표만 zero에 넣어준다.
//                zero.push_back({i, j});
//        }
//    }
//
//    for (auto p : zero) {
//        int y = p.first, x = p.second;
//
//        if (chk[y][x] != 0) // 이미 range chk가 됐으면 건너뛰기
//            continue;
//
//        queue<pl> q;
//
//        range++, cnt = 0; // range는 1부터, 갯수 0 부터 시작
//        chk[y][x] = range, q.push({y, x});
//
//        while (!q.empty()) {
//            int fy = q.front().first, fx = q.front().second;
//            q.pop();
//
//            cnt++;
//
//            for (int i = 0; i < 4; i++) {
//                int ny = fy + dy[i], nx = fx + dx[i];
//
//                if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1
//                    || chk[ny][nx] != 0 || arr[ny][nx] != 0)
//                    continue;
//
//                chk[ny][nx] = range, q.push({ny, nx});
//            }
//        }
//
//        // rangeV에 cnt 넣기
//        rangeV.push_back(cnt);
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//
//            if (arr[i][j] == 0) { // 0이면 그냥 0출력
//                cout << arr[i][j];
//                continue;
//            }
//
//            int val = 1; // 자신 포함이므로 답은 1부터 시작
//
//            set<int> s; // 비트 마스킹으로 하다가 계속 틀려서 그냥 set..
//
//            for (int d = 0; d < 4; d++) {
//                int ny = i + dy[d], nx = j + dx[d];
//
//                if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1
//                    || arr[ny][nx] != 0)
//                    continue;
//
//                // 인접한 네방향에서 구역이 겹치는 것 체크
//                if (s.count(chk[ny][nx]))
//                    continue;
//
//                s.insert(chk[ny][nx]); // 안겹치면 set에 insert
//                val += rangeV[chk[ny][nx]]; // 구역의 0 갯수 -> rangeV[range] 더해주기
//            }
//
//            cout << (val % 10);
//        }
//
//        cout << endl;
//    }
//}
////
//// Created by Mac2 on 2021/07/15.
////
//
