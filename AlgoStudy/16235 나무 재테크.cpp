//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m, k, answer;
//int arr[11][11], eng[11][11];
//int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1}, dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
//
//map<pl, int> mp;
//deque<int> dq[11][11];
//
//int main() {
//    fastio
//    cin >> n >> m >> k;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            cin >> arr[i][j];
//            eng[i][j] = 5; // 양분 초기화
//        }
//    }
//
//    for (int i = 0; i < m; ++i) {
//        int x, y, z;
//        cin >> x >> y >> z;
//
//        mp[{x, y}] = 1; // 나무가 있는 곳 저장
//        dq[x][y].push_back(z); // 처음 나무 입력
//    }
//
//    while (k--) {
//        // spring
//        for (auto it = mp.begin(); it != mp.end(); it++) {
//            auto[x, y] = it->first;
//
//            // 현재 dq 사이즈만큼 루프
//            int sz = dq[x][y].size();
//            int sum = 0;
//
//            for (int i = 0; i < sz; i++) {
//                int age = dq[x][y].front();
//                dq[x][y].pop_front();
//
//                // 양분 있으면, 빼고, age+1 해서 뒤에 넣기
//                if (eng[x][y] >= age)
//                    eng[x][y] -= age, dq[x][y].push_back(age + 1);
//                else {
//                    // summer
//                    // 못먹으면 양분 모아놓기
//                    // 바로 더하면, 더 살 나무가 생긴다
//                    sum += (age / 2);
//                }
//            }
//
//            // 루프 다 돌고 더해준다
//            eng[x][y] += sum;
//
//            // 만약 dq[y][x]에 아무것도 없으면 map 에서 나무위치 삭제
//            if (dq[x][y].empty()) {
//                if (!mp.count({x, y}))
//                    mp.erase({x, y});
//            }
//        }
//
//        // autumn
//        for (auto it = mp.begin(); it != mp.end(); it++) {
//            auto[x, y] = it->first;
//
//            // dq 돌면서 5의 배수 찾기
//            for (auto i: dq[x][y]) {
//                int age = i;
//
//                if (age % 5 == 0) {
//                    for (int i = 0; i < 8; ++i) {
//                        int nx = x + dx[i], ny = y + dy[i];
//
//                        if (ny < 1 || nx < 1 || ny > n || nx > n)
//                            continue;
//
//                        if (!mp.count({nx, ny}))
//                            mp[{nx, ny}] = 1;
//
//                        // 나무 번식 가능하면, 1이 제일 작으므로 앞에다가 넣어주기
//                        dq[nx][ny].push_front(1);
//                    }
//                }
//            }
//        }
//
//        // winter
//        for (int i = 1; i <= n; ++i)
//            for (int j = 1; j <= n; ++j)
//                eng[i][j] += arr[i][j];
//    }
//
//    for (auto it = mp.begin(); it != mp.end(); it++) {
//        auto[x, y]= it->first;
//        answer += dq[x][y].size();
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/09/30.
////
//
