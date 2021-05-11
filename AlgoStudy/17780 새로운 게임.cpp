//#include <iostream>
//#include <vector>
//#include <deque>
//
//using namespace std;
//
//struct mal {
//    int y, x, d;
//};
//
//int n, k, ans, map[12][12];
//int dy[4] = {0, 0, -1, 1}, dx[4] = {1, -1, 0, 0};
//vector<mal> info;
//deque<int> rocate[12][12];
//
//// 좌표에서 말의 idx가 담긴 크기가 4 이상이면 탈출 가능
//bool isescape() {
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            if (rocate[i][j].size() >= 4)
//                return true;
//
//    return false;
//}
//
//void moving() {
//    for (int i = 0; i < info.size(); i++) {
//        // i번째 말이 위치한 좌표에서 가장 밑에 있는 말의 인덱스
//        int front = rocate[info[i].y][info[i].x].front();
//
//        // i번째 말이 움직일 차례인데 가장 밑에 있는 말이 i가 아니라면 continue;
//        if(front != i)
//            continue;
//
//        // 가장 밑에 있는 말의 좌표와 방향
//        int fy = info[front].y, fx = info[front].x, fd = info[front].d;
//        // 다음 움직일 곳
//        int ny = fy + dy[fd], nx = fx + dx[fd], nd = fd;
//
//        // 다음 칸이 칸 밖을 벗어나거나 파란색이라면?
//        if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || map[ny][nx] == 2) {
//            // 방향 바꿔주고
//            fd < 2 ? nd = 1 - fd : nd = 5 - fd;
//            // 바꾼 방향의 다음칸
//            info[front].d = nd;
//            ny = fy + dy[nd], nx = fx + dx[nd];
//
//            // 다음 칸이 파란색이면 방향만 바꾸고 continue
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || map[ny][nx] == 2)
//                continue;
//        }
//
//        // 다음 칸이 하얀색
//        if (map[ny][nx] == 0) {
//            // (A,B,C) 앞에서 부터 빼서 다음 좌표의 뒤부터 쌓는다. (D,E)(A,B,C)
//            while (!rocate[fy][fx].empty()) {
//                int idx = rocate[fy][fx].front();
//                rocate[fy][fx].pop_front();
//
//                info[idx].y = ny, info[idx].x = nx;
//                rocate[ny][nx].push_back(idx);
//            }
//        } else if (map[ny][nx] == 1) {
//            // 다음 칸이 빨간색
//            // (A,B,C) 뒤에서 부터 다음 좌표의 뒤부터 쌓는다. (D,E)(C,B,A)
//            while (!rocate[fy][fx].empty()) {
//                int idx = rocate[fy][fx].back();
//                rocate[fy][fx].pop_back();
//
//                info[idx].y = ny, info[idx].x = nx;
//                rocate[ny][nx].push_back(idx);
//            }
//        }
//
//        // 턴 도중에 4개 이상이 쌓였으면 턴 도중에 종료
//        if (rocate[ny][nx].size() >= 4)
//            return;
//    }
//}
//
//int main() {
//    cin >> n >> k;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> map[i][j];
//
//    // 말의 정보
//    for (int i = 0; i < k; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        info.push_back({a - 1, b - 1, c - 1});
//        rocate[a - 1][b - 1].push_back(i);
//    }
//
//    // 말이 4개 이상 쌓이면 게임 아웃!
//    ans = 1;
//
//    while (1) {
//        if (ans > 1000)
//            break;
//
//        moving();
//
//        if (isescape())
//            break;
//
//        ans++;
//    }
//
//    if (ans > 1000)
//        ans = -1;
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/11.
////