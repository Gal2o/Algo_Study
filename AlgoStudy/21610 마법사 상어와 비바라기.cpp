//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//
//int n, m, d, s, answer;
//int arr[51][51];
//int chk[51][51];
//int by[4] = {-1, -1, 1, 1}, bx[4] = {-1, 1, -1, 1};
//int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1}, dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
//vector<pl> cloud;
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    cloud.emplace_back(n, 1);
//    cloud.emplace_back(n, 2);
//    cloud.emplace_back(n - 1, 1);
//    cloud.emplace_back(n - 1, 2);
//
//    // m 횟수만큼 구름 이동
//    for (int i = 0; i < m; ++i) {
//        // 방향 : d, 이동 : s
//        cin >> d >> s;
//
//        d--;
//        s %= n;
//
//        // 5. 구름 있었던 곳 체크용
//        memset(chk, 0, sizeof chk);
//
//        // 1. 각 구름 이동
//        for (int j = 0; j < cloud.size(); ++j) {
//            auto[cy, cx] = cloud[j];
//
//            cy += (dy[d] * s);
//            cx += (dx[d] * s);
//
//            if (cy < 1) cy += n;
//            else if (cy > n) cy -= n;
//
//            if (cx < 1) cx += n;
//            else if (cx > n) cx -= n;
//
//            // 2. 구름의 양 1 증가
//            arr[cy][cx]++;
//            cloud[j] = {cy, cx};
//        }
//
//        // 4. 물복사버그 - 대각선 물의 양 세서 자기한테 더해주기
//        // q에 모아서 한꺼번에
//        queue<tp> q;
//        for (auto cl: cloud) {
//            auto[cy, cx] = cl;
//
//            int cnt = 0;
//            for (int k = 0; k < 4; ++k) {
//                int ny = cy + by[k], nx = cx + bx[k];
//
//                if (ny < 1 || nx < 1 || ny > n || nx > n)
//                    continue;
//
//                if (arr[ny][nx] > 0)
//                    cnt++;
//            }
//
//            q.emplace(cy, cx, cnt);
//        }
//
//        cloud.clear(); // 3. 구름은 사라진다.
//        while (!q.empty()) {
//            auto[fy, fx, cnt] = q.front();
//            q.pop();
//
//            arr[fy][fx] += cnt;
//            chk[fy][fx] = 1; // 5. 구름 제외한 칸에 물 2 이상이면 구름 생성
//        }
//
//        // 5. 다음 구름 찾기
//        for (int j = 1; j <= n; ++j) {
//            for (int k = 1; k <= n; ++k) {
//                if (arr[j][k] >= 2 && !chk[j][k]) {
//                    cloud.emplace_back(j, k);
//                    arr[j][k] -= 2;
//                }
//            }
//        }
//    }
//
//    // Ans. 구름의 합 구하기
//    for (int j = 1; j <= n; ++j)
//        for (int k = 1; k <= n; ++k)
//            answer += arr[j][k];
//
//    cout << answer << endl;
//}
//// Created on 2021/10/19.