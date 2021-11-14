//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m, k, answer, sy, sx, sd;;
//int arr[21][21], chk[21][21];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//pl ud = {1, 6}; // 위, 아래
//pl lr = {4, 3}; // 왼, 오
//pl fb = {2, 5}; // 뒤, 앞
//
//void rollingdice(int d) {
//    pl tmp;
//
//    if (d == 0) { // 위로 굴리기
//        tmp = ud; // 위, 아래
//        ud = {fb.second, fb.first}; // 뒤 -> 아래, 앞 -> 위
//        fb = tmp; // 아래 -> 앞, 위 -> 뒤
//        return;
//    } else if (d == 1) { // 아래로 굴리기
//        tmp = ud;
//        ud = fb; // 앞 -> 아래, 뒤 -> 위
//        fb = {tmp.second, tmp.first}; // 위 -> 앞, 아래 -> 뒤
//        return;
//    } else if (d == 2) { // 왼쪽으로 굴리기
//        tmp = ud;
//        ud = {lr.second, lr.first}; // 왼 -> 아래, 오른 -> 위
//        lr = tmp; // 위 -> 왼, 아래 -> 오른
//        return;
//    } else {
//        tmp = ud;
//        ud = lr; // 왼 -> 위, 오른 -> 아래
//        lr = {tmp.second, tmp.first}; // 위 -> 오른, 아래 -> 왼
//        return;
//    }
//}
//
//// 점수를 얻으러 bfs
//void getScore(int y, int x) {
//    memset(chk, 0, sizeof chk);
//
//    // 한번 이동했을 때, 값만 찾아나가기
//    int val = arr[y][x], cnt = 1;
//
//    queue<pl> q;
//    q.emplace(y, x);
//    chk[y][x] = 1;
//
//    while (!q.empty()) {
//        auto[fy, fx] = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1
//                || chk[ny][nx] || arr[ny][nx] != val)
//                continue;
//
//            q.emplace(ny, nx);
//            chk[ny][nx] = 1;
//            cnt++;
//
//        }
//    }
//
//    answer += (cnt * val);
//}
//
//int main() {
//    cin >> n >> m >> k;
//
//    sy = 0, sx = 0, sd = 3;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    while (k--) {
//        int nd = sd;
//        int ny = sy + dy[nd], nx = sx + dx[nd];
//
//        // 다음 칸이 맵을 벗어났을 때, 반대 방향으로 바꿔주기
//        if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1) {
//            if (nd > 1)
//                nd == 3 ? nd = 2 : nd = 3;
//            else
//                nd == 1 ? nd = 0 : nd = 1;
//        }
//
//        // 방향대로 가기 & 주사위 굴리기 & 점수 얻기
//        ny = sy + dy[nd], nx = sx + dx[nd];
//        rollingdice(nd);
//        getScore(ny, nx);
//
//        // 좌표 및 방향 갱신
//        sy = ny, sx = nx;
//
//        // 이동방향 시계방향 회전
//        if (ud.second > arr[ny][nx]) {
//            if (nd == 0) sd = 3;
//            if (nd == 1) sd = 2;
//            if (nd == 2) sd = 0;
//            if (nd == 3) sd = 1;
//        } else if (ud.second < arr[ny][nx]) { // 이동방향 반시계 회전
//            if (nd == 0) sd = 2;
//            if (nd == 1) sd = 3;
//            if (nd == 2) sd = 1;
//            if (nd == 3) sd = 0;
//        } else // 이동방향 변경 X
//            sd = nd;
//    }
//
//    cout << answer << endl;
//}
//// Created on 2021/11/11.