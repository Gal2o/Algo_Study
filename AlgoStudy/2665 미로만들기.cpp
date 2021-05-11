//#include <iostream>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//int n, map[50][50], chk[50][50], ans = 1e9; // 답은 최대치로 설정
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        string s;
//        cin >> s;
//
//        for (int j = 0; j < n; j++) {
//            map[i][j] = s[j] - '0';
//            chk[i][j] = 1e9; // 벽 뚫은 횟수를 적어 나갈 것이기 때문에 chk도 최대값으로 초기화
//        }
//    }
//
//    queue<tuple<int, int, int>> q;
//    // 시작은 벽뚫은 횟수 0
//    chk[0][0] = 0;
//    q.push({0, 0, 0});
//
//    while (!q.empty()) {
//        int fy = get<0>(q.front()), fx = get<1>(q.front());
//        int cnt = get<2>(q.front());
//        q.pop();
//
//        // 도착하면 정답을 최소값으로 갱신 후, 더 이상 아무것도 하지 않는다.
//        if (fy == n - 1 && fx == n - 1) {
//            if (ans > cnt)
//                ans = cnt;
//
//            continue;
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int ny = fy + dy[i], nx = fx + dx[i], ncnt = cnt;
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//                continue;
//
//            if (map[ny][nx] == 0) // 벽을 만난다면 다음 cnt 값을 + 1 해준다.
//                ncnt ++;
//
//            if (chk[ny][nx] > ncnt) // 다음 가야 할 곳이 지금 벽 뚫은 횟수보다 작다면 들어가고 아니면 만다.
//                chk[ny][nx] = ncnt, q.push({ny, nx, ncnt});
//        }
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/05.
////
//
