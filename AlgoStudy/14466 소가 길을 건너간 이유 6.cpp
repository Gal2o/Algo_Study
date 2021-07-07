//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//int n, k, r, ans;
//int chk[101][101];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//int road[101][101][101][101];
//vector<pl> cow;
//
//// 문제 이해가 잘 안됬던 문제.
//int main() {
//    cin >> n >> k >> r;
//
//    // 기본적으로 인접한 4방향 갈 수 있지만,
//    // 주어진 길 이외에 접근하지 못한다면 만나지 못하는 한 쌍이다.
//    // 4차원 or 2차원 배열 벡터로 자신과 연결되어 있는 길 저장
//    for (int i = 0; i < r; i++) {
//        int a, b, c, d;
//        cin >> a >> b >> c >> d;
//        road[a][b][c][d] = road[c][d][a][b] = 1;
//    }
//
//    for (int i = 0; i < k; i++) {
//        int a, b;
//        cin >> a >> b;
//        cow.push_back({a, b});
//    }
//
//    // 첫번째 소부터 시작
//    for (int i = 0; i < cow.size(); i++) {
//        memset(chk, 0, sizeof chk);
//        queue<pl> q;
//        q.push({cow[i].first, cow[i].second});
//        chk[cow[i].first][cow[i].second] = 1;
//
//        while (!q.empty()) {
//            int fy = q.front().first, fx = q.front().second;
//            q.pop();
//
//            for (int i = 0; i < 4; i++) {
//                int ny = fy + dy[i], nx = fx + dx[i];
//
//                if (ny < 1 || nx < 1 || ny > n || nx > n || chk[ny][nx])
//                    continue;
//
//                // 길을 건너야만 한다면 continue
//                if (road[fy][fx][ny][nx])
//                    continue;
//
//                q.push({ny, nx}), chk[ny][nx] = 1;
//            }
//        }
//
//        // bfs를 다 돌았는데 자신보다 뒤에 있는 소에 접근하지 못했다면
//        // ans++
//        for (int j = i + 1; j < cow.size(); j++)
//            if (!chk[cow[j].first][cow[j].second])
//                ans++;
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/29.
////
//
