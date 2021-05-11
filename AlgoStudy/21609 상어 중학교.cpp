//#include <iostream>
//#include <queue>
//#include <vector>
//#include <tuple>
//
//using namespace std;
//int n, m, answer;
//int map[20][20];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//struct blockinfo {
//    int r, y, x;
//    vector<pair<int, int>> b;
//};
//
//void rotation() {
//    vector<vector<int>> tmp(n, vector<int>(n, 0));
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            tmp[i][j] = map[i][j];
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            map[i][j] = tmp[j][(n - 1) - i];
//}
//
//void gravity() {
//    for (int x = 0; x < n; x++) {
//        deque<int> q;
//
//        for (int y = 0; y < n; y++) {
//            if (map[y][x] >= 0) {
//                q.push_back(map[y][x]);
//                map[y][x] = -2;
//            }
//
//            if (map[y][x] == -1) {
//                int sz = q.size();
//                for (int ry = y - 1; ry > (y - 1) - sz; ry--)
//                    map[ry][x] = q.back(), q.pop_back();
//            }
//        }
//
//        if (!q.empty()) {
//            for (int y = n - 1; y > -1; y--) {
//                if (q.empty()) break;
//                map[y][x] = q.back(), q.pop_back();
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> map[i][j];
//
//    while (1) {
//        vector<blockinfo> block; //  무지개 갯수, 기준 y, 기준 x, 블록 정보
//        /* 오토 플레이 시, 색깔별 방문 체크
//         * 색깔별로 체크를 안하게 되면 같은 블럭이 여러번 들어가게 되고, 기준 블록 설정이 의미가 없어지게 된다. 블럭은 한번만 block에 들어가야함
//         */
//        vector <vector <vector <int>>> visit (20, vector <vector <int>> (20, vector <int> (6,0)));
//
//        // 블록 그룹 찾고 block에 block 그룹들 넣기
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (map[i][j] <= m && map[i][j] > 0 && visit[i][j][map[i][j]] == 0) {
//                    vector<pair<int, int>> blockgroup;
//                    queue<pair<int, int>> q;
//                    int color = map[i][j];
//                    int rainbow = 0;
//                    visit[i][j][color] = 1, q.push({i, j}), blockgroup.push_back({i, j});
//
//                    while (!q.empty()) {
//                        int fy = q.front().first, fx = q.front().second;
//                        q.pop();
//
//                        for (int i = 0; i < 4; i++) {
//                            int ny = fy + dy[i], nx = fx + dx[i];
//
//                            // 빈칸이거나 검은색 블록 제외
//                            if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || visit[ny][nx][color] || map[ny][nx] < 0)
//                                continue;
//
//                            if (map[ny][nx] > 0 && map[ny][nx] != color)
//                                continue;
//
//                            if (map[ny][nx] == 0)
//                                rainbow++;
//
//                             visit[ny][nx][color] = 1, q.push({ny, nx}), blockgroup.push_back({ny, nx});
//                        }
//                    }
//
//                    if (blockgroup.size() >= 2)
//                        block.push_back({rainbow, i, j, blockgroup});
//                }
//            }
//        }
//
//        // 블록 그룹 없으면 답 출력하고 종료
//        if (block.empty()) {
//            cout << answer << endl;
//            break;
//        }
//
//        // 가장 큰 블록 그룹, 무지개 블록 가장 많은 블록 찾기
//        tuple<int, int, int, int, int> delgroup = {-1, -1, -1, 0, 0}; // 무지개 갯수, y, x, 블록 크기, idx
//
//        for (int i = 0; i < block.size(); i++) {
//            tuple<int, int, int, int, int> selectb = {block[i].r, block[i].y, block[i].x, block[i].b.size(), i};
//
//            // 블록 사이즈 검사
//            if (get<3>(selectb) > get<3>(delgroup)) delgroup = selectb;
//                // 블록 크기가 같다면
//            else if (get<3>(selectb) == get<3>(delgroup)) {
//                // 무지개 갯수 검사
//                if (get<0>(selectb) > get<0>(delgroup)) delgroup = selectb;
//                    // 무지개 갯수도 같다면,
//                else if (get<0>(selectb) == get<0>(delgroup)) {
//                    // 기준 블록 y값 검사
//                    if (get<1>(selectb) > get<1>(delgroup)) delgroup = selectb;
//                        // y값도 같다면,
//                    else if (get<1>(selectb) == get<1>(delgroup)) {
//                        // x값 검사
//                        if (get<2>(selectb) > get<2>(delgroup)) delgroup = selectb;
//                    }
//                }
//            }
//        }
//
//        // -2는 빈칸
//        // 블록 그룹 제거, 점수 ++
//        int idx = get<4>(delgroup), blocksize = get<3>(delgroup);
//
//        // 위에서 가장 큰 블록 그룹의 idx를 이용하여 빈칸으로 초기화
//        for (int i = 0; i < block[idx].b.size(); i++)
//            map[block[idx].b[i].first][block[idx].b[i].second] = -2;
//
//        answer += blocksize * blocksize;
//
//        gravity();
//
//        rotation();
//
//        gravity();
//    }
//}
///*
// * 블록은 M가지 색상
// * 검은색 -1
// * 무지개 블록 0
// * 일반 블록 0 < b <= M
// * 일반 블록이 적어도 하나는 있어야 한다.
// * 일반 블록들은 색이 똑같아야 한다.
// * 검은색 블록은 포함하면 안되고 무지개는 제한이 없다
// * 블록 그룹 = 블록의 갯수 >= 2
// * 블록 그룹의 기준 블록은 일반 블록, 행번호 가장 작은, 열번호 가장 작은
// * 블록 그룹이 많다. 무지개 블록 수가 가장 많음 > 행이 가장 큼 > 열이 가장 큼
// * 블록 그룹 찾고 -> 해당 블록 그룹 삭제, 블록의 수만큼 점수
// * 중력 작용
// * 90도 반시계로 회전
// * 다시 중력
// * 중력이 작용하면 검은색 블록 제외 다 내려간다.
// */
//
////
//// Created by Mac2 on 2021/04/30.
////
//
