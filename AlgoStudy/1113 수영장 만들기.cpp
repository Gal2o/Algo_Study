//#include <bits/stdc++.h>
//
//#define mx 52
//using namespace std;
//typedef pair<int, int> pl;
//int n, m, answer, pool[mx][mx];
//int maxH, chk[mx][mx];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i <= n + 1; ++i) {
//        for (int j = 0; j <= m + 1; ++j) {
//
//            // 수영장을 감싸는 벽을 1로 놓는다.
//            if (i == 0 || j == 0 || i == n + 1 || j == m + 1) {
//                pool[i][j] = 1;
//                continue;
//            }
//
//            char a;
//            cin >> a;
//
//            pool[i][j] = a - '0';
//
//            // 가장 높은 기둥을 구한다.
//            maxH = max(maxH, pool[i][j]);
//        }
//    }
//
//    // 높이 1부터 수영장 밖에서 부터 물을 채워본다.
//    for (int pour = 1; pour <= maxH; pour++) {
//        memset(chk, 0, sizeof chk);
//        queue<pl> q;
//        q.push({0, 0});
//        chk[0][0] = 1;
//
//        while (!q.empty()) {
//            int fy = q.front().first, fx = q.front().second;
//            q.pop();
//
//            for (int d = 0; d < 4; d++) {
//                int ny = fy + dy[d], nx = fx + dx[d];
//
//                if (ny < 0 || nx < 0 || ny > n + 1 || nx > m + 1
//                    || chk[ny][nx] || pool[ny][nx] >= pour)
//                    continue;
//
//                // 채우는 물의 양이 기둥보다 높다면, 해당 기둥의 물의 높이 갱신
//                q.push({ny, nx}), chk[ny][nx] = 1, pool[ny][nx] = pour;
//            }
//        }
//
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                // bfs로 물의 높이만큼 갱신을 했는데,
//                // 영향이 미치지 않은 구역 -> 물의 높이 보다 낮은 수위의 기둥들
//                // 은 pour - 해당 기둥의 물 높이 를 더해준다.
//                if (pool[i][j] < pour) {
//                    answer += pour - pool[i][j];
//
//                    pool[i][j] = pour;
//                }
//            }
//        }
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/06/30.
////
//
