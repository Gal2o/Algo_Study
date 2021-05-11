//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int n, m, k, ans;
//char map[100][100];
//vector<vector<vector <int>>> dp(100, vector<vector <int>> (100, vector <int> (80, -1)));;
//vector<pair<int, int>> st;
//string answer, enter;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
///*
// * dp 배열을 3차원으로 해줘야 하는 이유!!
// * 정답 문자열이 ABBB이고,
// * [map]
// *  ABBB
// *  BABA
// *  ABAA
// *  BBAB  이면,
// *
// *  0,0 - 0,1 - 0,2 - 0,3 순으로 0,3에 1을 저장하여 메모이제이션을 했다면
// *  1,3 에서 출발 했을 때, 1,3 - 0,3 - 0,2 - 1,2 처럼
// *  0,3 을 끝으로 dp값을 가져오는게 아니라 중간 값을 가져오면서,
// *  틀린 dp 값을 가져올 수 있으므로, 3차원 배열로 idx 몇번 째에 몇번째 B를 들렀는지
// *  저장을 해야 올바른 답을 가져옴.
// */
//void dfs(int y, int x, int idx) {
//    if (idx > answer.size() - 1) // 문자열 보다 커지면 return
//        return;
//
//    if (dp[y][x][idx] != -1) // 메모이제이션
//        return;
//
//    if (enter == answer) { // 같다면 1로 초기화
//        dp[y][x][idx] = 1;
//        return;
//    }
//
//    // 방문 체크
//    dp[y][x][idx] = 0;
//
//    for (int d = 0; d < 4; d++) {
//        for (int p = 1; p <= k; p++) {
//            int ny = y + dy[d] * p, nx = x + dx[d] * p;
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
//                continue;
//
//            if (answer[idx + 1] != map[ny][nx])
//                continue;
//
//            enter += map[ny][nx];
//            dfs(ny, nx, idx + 1);
//            dp[y][x][idx] += dp[ny][nx][idx + 1];
//            enter.pop_back();
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m >> k;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> map[i][j];
//        }
//    }
//
//    cin >> answer;
//
//    // 비교할 문자열에 첫번째 시작 enter[0]을 시작 첫문자로 초기화
//    enter += answer[0];
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            // 첫 문자와 일치하면 dp 시작
//            if (map[i][j] == answer[0]) {
//                dfs(i, j, 0);
//
//                // 시작 위치가 다양할 때, 각 시작지점의 경로들을 다 더해줘야 한다.
//                ans += dp[i][j][0];
//            }
//        }
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/04/16.
////
//
