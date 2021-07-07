//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//int n, m;
//int pool[102][102];
//int maxH, answer;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//// 수영장 만들기와 동일한 문제
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> pool[i][j];
//
//            if (maxH < pool[i][j])
//                maxH = pool[i][j];
//        }
//    }
//
//    for (int w = 0; w <= maxH; w++) {
//        int chk[102][102];
//        queue<pl> q;
//        memset(chk, 0, sizeof chk);
//        q.push({0, 0}), chk[0][0] = 1;
//
//        while (!q.empty()) {
//            int fy = q.front().first, fx = q.front().second;
//            q.pop();
//
//            for (int d = 0; d < 4; d++) {
//                int ny = fy + dy[d], nx = fx + dx[d];
//
//                if (ny < 0 || nx < 0 || ny > n + 1 || nx > m + 1 ||
//                    chk[ny][nx] || pool[ny][nx] >= w)
//                    continue;
//
//                q.push({ny, nx}), chk[ny][nx] = 1, pool[ny][nx] = w;
//            }
//        }
//
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                if (pool[i][j] < w) {
//                    answer += w - pool[i][j];
//
//                    pool[i][j] = w;
//                }
//            }
//        }
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/02.
////
//
