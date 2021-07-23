//#include <bits/stdc++.h>
//
//#define mx 50
//#define pmx 250
//using namespace std;
//
//int n, m, ans, key;
//char miro[mx][mx];
//int parents[pmx];
//vector<pair<int, int>> ro;
//vector<pair<int, pair<int, int>>> ed;
//queue<pair<int, int>> avail;
//
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//// find 쉽게 !
//int union_find(int idx) {
//    if (parents[idx] != idx)
//        parents[idx] = union_find(parents[idx]);
//
//    return parents[idx];
//}
//
//void bfs() {
//    vector<vector<int>> chk(mx, vector<int>(mx, 0));
//    chk[avail.front().first][avail.front().second] = 1;
//
//    while (!avail.empty()) {
//        int fy = avail.front().first, fx = avail.front().second;
//        avail.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || chk[ny][nx] || miro[ny][nx] == '1')
//                continue;
//
//            if(miro[ny][nx] == 'K')
//                key--;
//
//            chk[ny][nx] = 1, avail.push({ny, nx});
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> miro[i][j];
//
//            if (miro[i][j] == 'K' || miro[i][j] == 'S') {
//                if (miro[i][j] == 'K')
//                    key++;
//                else
//                    avail.push({i, j});
//
//                ro.push_back({i, j});
//            }
//        }
//    }
//
//    // Union-find 초기 작업 (시작은 무조건 1부터야 한다.)
//    for (int i = 1; i <= pmx; i++)
//        parents[i] = i;
//
//    // 입력받은 K에 모두 도달할 수 있는지
//    bfs();
//
//    // 아니면 종료.
//    if (key != 0)
//        return cout << -1 << endl, 0;
//
//    // 각 좌표끼리 가중치, 간선 정보 저장
//    for (int i = 0; i < ro.size() - 1; i++) {
//        int sy = ro[i].first, sx = ro[i].second;
//
//        for (int j = i + 1; j < ro.size(); j++) {
//            queue<pair<int, int>> q;
//            vector<vector<int>> chk(mx, vector<int>(mx, 0));
//            q.push({sy, sx}), chk[sy][sx] = 1; // 1부터 체크를 해줬으므로 마지막 체크 값에서는 -1 해줘야 함
//
//            while (!q.empty()) {
//                int fy = q.front().first, fx = q.front().second;
//                q.pop();
//
//                // 한쪽으로만 가는 것만 넣어주면 되므로 (노드 끼리의 최단거리, ro 배열 index = node 의 index)
//                if (fy == ro[j].first && fx == ro[j].second) {
//                    // 배열은 0 ~ (n-1), Union-find 때문에 노드의 값은 1 ~ n 를 위해 + 1
//                    ed.push_back({chk[fy][fx] - 1, {i + 1, j + 1}});
//                    break;
//                }
//
//                for (int i = 0; i < 4; i++) {
//                    int ny = fy + dy[i], nx = fx + dx[i];
//
//                    if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1 || miro[ny][nx] == '1' || chk[ny][nx] != 0)
//                        continue;
//
//                    chk[ny][nx] = chk[fy][fx] + 1;
//                    q.push({ny, nx});
//                }
//            }
//        }
//    }
//
//    // 가중치 작은 순으로 오름차순 정렬!
//    sort(ed.begin(), ed.end());
//
//    // Kruscal & Union-find
//    for (auto e : ed) {
//        int d = e.first;
//        int u = union_find(e.second.first);
//        int v = union_find(e.second.second);
//
//        if (u == v)
//            continue;
//
//        parents[max(u, v)] = min(u, v);
//        ans += d;
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/25.
////
//
