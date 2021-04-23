//#include <iostream>
//#include <vector>
//
//#define mx 987654321
//using namespace std;
//int n, m, answer = mx;
//char map[20][20];
//int chk[20][20][2];
//// 이것이 틀린 원인 => 반례는 못찾았지만 느낌상,
//// 동전 하나가 어딜 갔다가 다시 갔던 곳을 들러서 나가야 하는 경우에는 chk 에 막혀서 못나가는 경우가 발생할 것 같다.
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//struct info { // 좌표와 탈출 여부
//    int y, x, escape;
//};
//
//vector<info> coin;
//
//void dfs(int cnt) {
//    if (cnt > 10 || answer < cnt) // 10번 이상이거나, 이미 답을 갱신한 경우보다 많아지면 시간 단축시켜주기
//        return;
//
//    if (coin[0].escape && coin[1].escape) // 둘다 나가면 리턴
//        return;
//
//    if (coin[0].escape || coin[1].escape) { // 하나만 나가면 답 갱신
//        if (answer > cnt)
//            answer = cnt;
//
//        return;
//    }
//
//    // 코인 두 개가 동시에 움직이므로
//    for (int i = 0; i < 4; i++) {
//        vector<info> rollback;
//        bool flag[2] = {false, false}; // 같은 벽에서 안움직이는 것 방지
//
//        // 방향 별 두 코인이 모두 움직이고 나서 dfs 를 탈지 말지 결정하기
//        for (int j = 0; j < 2; j++) {
//            int fy = coin[j].y, fx = coin[j].x, fin = coin[j].escape;
//            rollback.push_back({fy, fx, fin}); // 백업 초기화 해주기
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (map[ny][nx] == '#') { // 둘 다 벽앞에서 안나갈 경우 막아주기
//                flag[j] = true;
//                continue;
//            }
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1) { // 맵 밖으로 나가면 escape true
//                coin[j].escape = 1;
//                continue;
//            }
//
//            coin[j].y = ny, coin[j].x = nx; // 움직인 coin 정보를 갱신해준다.
//        }
//
//        if (flag[0] && flag[1]) // 벽에서 막혔으면 dfs 를 타지 않는다.
//            continue;
//
//        dfs(cnt + 1);
//
//        for (int j = 0; j < 2; j++) {
//            coin[j] = rollback[j]; // coin 정보 다시 되돌리기
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> map[i][j];
//
//            if (map[i][j] == 'o')
//                coin.push_back({i, j, 0});
//        }
//    }
//
//    dfs(0);
//
//    if (answer == mx)
//        cout << -1 << endl;
//    else
//        cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/04/22.
////
//
