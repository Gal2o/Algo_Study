//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//
//vector<pl> block[2500][4]; // 블럭 번호, 좌표, 회전
//vector<pl> socket[2500]; // 블럭 번호, 좌표
//int chk[50][50], bchk[2500], schk[2500]; // 블럭 옮겨 담기용 체크, 블럭 놓기 체크
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//int scnt, bcnt, answer;
//
//void set_block(vector<vector<int>> table) {
//    memset(chk, 0, sizeof chk);
//
//    for (int i = 0; i < table.size(); ++i) {
//        for (int j = 0; j < table[i].size(); ++j) {
//            if (table[i][j] && !chk[i][j]) {
//                queue<pl> q;
//                vector<pl> tmp;
//
//                int sy = 51, sx = 51, ey = 0, ex = 0;
//                q.emplace(i, j), tmp.emplace_back(i, j), chk[i][j] = 1;
//
//                while (!q.empty()) {
//                    auto[fy, fx] = q.front();
//                    q.pop();
//
//                    // 정사각형 범위를 구하기 위해서 좌표 최소, 최대 구하기
//                    sy = min(sy, fy), sx = min(sx, fx);
//                    ey = max(ey, fy), ex = max(ex, fx);
//
//                    for (int k = 0; k < 4; ++k) {
//                        int ny = fy + dy[k], nx = fx + dx[k];
//
//                        if (ny < 0 || nx < 0 || ny > table.size() - 1 || nx > table.size() - 1
//                            || chk[ny][nx] || !table[ny][nx])
//                            continue;
//
//                        q.emplace(ny, nx), tmp.emplace_back(ny, nx), chk[ny][nx] = 1;
//                    }
//                }
//
//                // 회전 안한 처음 블록 저장
//                for (auto k: tmp) {
//                    block[bcnt][0].emplace_back(abs(k.first - sy), abs(k.second - sx));
//                }
//
//                // 좌표의 최소, 최대를 이용해서 정사각형의 길이를 구한다.
//                int len = max(ey - sy, ex - sx);
//
//                // 돌려서 블록 저장
//                for (int k = 0; k < 3; ++k) {
//                    int ty = 51, tx = 51;
//
//                    // 좌표를 돌리면 정사각형 그대로 돌아가기 때문에, 왼쪽 위에 붙혀줘야 한다.
//                    // 최소 좌표 ty, tx 구하기
//                    for (auto i: block[bcnt][k]) {
//                        ty = min(ty, len - i.second), tx = min(tx, i.first);
//                    }
//
//                    // 왼쪽, 위에 붙혀서 좌표를 넣어줘야 빈칸이랑 딱 맞는다.
//                    // ! 이 부분이 히든 케이스 !
//                    for (auto i: block[bcnt][k]) {
//                        block[bcnt][k + 1].emplace_back(len - i.second - ty, i.first - tx);
//                    }
//                }
//
//                // socket이랑 비교하기 위해 좌표 정렬
//                for (int k = 0; k < 4; ++k) {
//                    sort(block[bcnt][k].begin(), block[bcnt][k].end());
//                }
//
//                bcnt++;
//            }
//        }
//    }
//}
//
//void set_socket(vector<vector<int>> board) {
//    memset(chk, 0, sizeof chk);
//
//    for (int i = 0; i < board.size(); ++i) {
//        for (int j = 0; j < board[i].size(); ++j) {
//            if (!board[i][j] && !chk[i][j]) {
//                queue<pl> q;
//                vector<pl> tmp;
//
//                int sy = 51, sx = 51, ey = 0, ex = 0;
//                q.emplace(i, j), tmp.emplace_back(i, j), chk[i][j] = 1;
//
//                while (!q.empty()) {
//                    auto[fy, fx] = q.front();
//                    q.pop();
//
//                    sy = min(sy, fy), sx = min(sx, fx);
//                    ey = max(ey, fy), ex = max(ex, fx);
//
//                    for (int k = 0; k < 4; ++k) {
//                        int ny = fy + dy[k], nx = fx + dx[k];
//
//                        if (ny < 0 || nx < 0 || ny > board.size() - 1 || nx > board.size() - 1
//                            || chk[ny][nx] || board[ny][nx])
//                            continue;
//
//                        q.emplace(ny, nx), tmp.emplace_back(ny, nx), chk[ny][nx] = 1;
//                    }
//                }
//
//                // socket은 그대로 회전 안한 좌표를 넣어주면 된다.
//                for (auto k: tmp) {
//                    socket[scnt].emplace_back(abs(k.first - sy), abs(k.second - sx));
//                }
//
//                // block이랑 비교하기 위해 정렬
//                sort(socket[scnt].begin(), socket[scnt].end());
//
//                scnt++;
//            }
//        }
//    }
//}
//
//int solution(vector<vector<int>> board, vector<vector<int>> table) {
//    set_socket(board);
//    set_block(table);
//
//    for (int i = 0; i <= scnt; ++i) {
//        bool flag = false;
//        for (int j = 0; j <= bcnt; ++j) {
//            if (!schk[i] && !bchk[j]) {
//                for (int k = 0; k < 4; ++k) {
//                    // 체크 안된 블럭,빈칸이면, 4방향 중 하나만 맞으면 break
//                    if (socket[i] == block[j][k]) {
//                        schk[i] = bchk[j] = 1;
//                        answer += (int) socket[i].size();
//                        flag = true;
//                        break;
//                    }
//                }
//            }
//
//            if (flag)
//                break;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    cout << solution({
//                             {1, 1, 0, 0, 1, 0},
//                             {0, 0, 1, 0, 1, 0},
//                             {0, 1, 1, 0, 0, 1},
//                             {1, 1, 0, 1, 1, 1},
//                             {1, 0, 0, 0, 1, 0},
//                             {0, 1, 1, 1, 0, 0}},
//                     {
//                             {1, 0, 0, 1, 1, 0},
//                             {1, 0, 1, 0, 1, 0},
//                             {0, 1, 1, 0, 1, 1},
//                             {0, 0, 1, 0, 0, 0},
//                             {1, 1, 0, 1, 1, 0},
//                             {0, 1, 0, 0, 0, 0}}) << endl;
//
//    cout << solution(
//            {
//                    {0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0},
//                    {1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0},
//                    {0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0},
//                    {1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1},
//                    {0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0},
//                    {0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1},
//                    {0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0},
//                    {0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0},
//                    {1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0},
//                    {0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0},
//                    {0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1},
//                    {0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0}},
//            {
//                    {1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1},
//                    {1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1},
//                    {1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0},
//                    {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0},
//                    {1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0},
//                    {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
//                    {1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1},
//                    {1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1},
//                    {0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1},
//                    {1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1},
//                    {1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1},
//                    {1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1}}
//    )
//         << endl;
//}
//// Created on 2021/11/02.