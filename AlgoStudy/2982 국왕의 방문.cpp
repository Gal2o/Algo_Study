//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n, m, a, b, k, g; // k : 고둘라가 출발한 시간, 상근이가 출발한 시간의 차이
//
//vector<int> godula;
//pair<int, int> gd[1001][1001];
//vector<pair<int, int>> roads[1001];
//vector<int> chk(1001, 1e9);
//
//int main() {
//    cin >> n >> m;
//    cin >> a >> b >> k >> g;
//
//    for (int i = 0; i < g; i++) {
//        // 고둘라가 방문하는 교차로의 인덱스 저장
//        int c;
//        scanf("%d", &c);
//        godula.push_back(c);
//    }
//
//    // 양방향 간선으로 도로, 걸리는 시간 저장
//    for (int i = 0; i < m; i++) {
//        int t1, t2, t3;
//        scanf("%d %d %d", &t1, &t2, &t3);
//
//        roads[t1].push_back({t2, t3});
//        roads[t2].push_back({t1, t3});
//    }
//
//    // 고돌라가 이동한 방향, 입력 받은 순서대로 (양방향, (시작한 시간, 내리는 시간) 저장)
//    int tmp = 0;
//    for (int i = 1; i < godula.size(); i++) {
//        int f = godula[i - 1], n = godula[i];
//        gd[f][n].first = gd[n][f].first = tmp;
//
//        // 존재하는 노드만 저장 했으므로, for문으로 n인 노드를 찾아서 tmp 값 증가
//        for (int i = 0; i < roads[f].size(); i++) {
//            if (roads[f][i].first == n) {
//                tmp += roads[f][i].second;
//                break;
//            }
//        }
//        gd[f][n].second = gd[n][f].second = tmp;
//    }
//
//    queue<pair<int, int>> q;
//    // 상근이 돌기, 고돌라와 k만큼 차이나니까 k부터 시작
//    chk[a] = k, q.push({a, k});
//    while (!q.empty()) {
//        int dist = q.front().first, val = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < roads[dist].size(); i++) {
//            int next = roads[dist][i].first, nval = roads[dist][i].second;
//
//            // 현재 노드의 출발 시간이 고돌라의 시작과 끝 사이에 겹친다면
//            // 다음 노드까지 걸리는 시간은 고돌라의 끝 + 다음 노드까지 시간 + 현재 까지의 시간
//            if (gd[dist][next].first <= val && val < gd[dist][next].second)
//                nval += gd[dist][next].second;
//            else // 아니면 그냥 현재 까지의 시간 + 다음 노드까지 시간
//                nval += val;
//
//            if (nval < chk[next]) // 다익스트라
//                chk[next] = nval, q.push({next, nval});
//        }
//    }
//
//    cout << chk[b] - k << endl;
//}
////
//// Created by Mac2 on 2021/05/14.
////
//
//
