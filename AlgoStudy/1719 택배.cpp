//#include <bits/stdc++.h>
//
//#define mx 201
//using namespace std;
//typedef pair<int, int> pl;
//int n, m;
//vector<pl> ed[mx];
//vector<vector<int>> chk(mx, vector<int>(mx, 1e9));
//int arr[mx][mx];
//int dist[mx];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        ed[a].push_back({c, b});
//        ed[b].push_back({c, a});
//    }
//
//    for (int i = 1; i <= n; i++) {
//        priority_queue<pl, vector<pl>, greater<pl>> pq;
//        pq.push({0, i}), chk[i][i] = 0;
//
//        memset(dist, 0, sizeof dist);
//        while (!pq.empty()) {
//            int cur = pq.top().second;
//            int val = pq.top().first;
//            pq.pop();
//
//            if (val > chk[i][cur])
//                continue;
//
//            for (auto n : ed[cur]) {
//                int next = n.second;
//                int nval = n.first + val;
//
//                if (nval < chk[i][next]) {
//                    dist[next] = cur; // 다음 노드에 이전 노드를 기록시켜놓는다.
//                    chk[i][next] = nval;
//                    pq.push({nval, next});
//                }
//            }
//        }
//
//        // dist 배열 구하기
//        // i는 시작 노드 이다.
//        for (int j = 1; j <= n; j++) {
//            // 0인 부분은 - 로 출력
//            if (j == i)
//                cout << '-' << ' ';
//            else if (dist[j] == i) {
//                // j로 갈때, 이전 노드가 시작 노드라면,
//                // j는 시작 노드(i)의 바로 다음 노드이므로 j 출력
//                cout << j << ' ';
//            } else {
//                // 하나가 아닌 여러 경로를 거쳤을 때,
//                int idx = j;
//
//                while (1) {
//                    // idx로 갈때, 이전 노드가 시작 노드(i)라면, idx 출력
//                    if (dist[idx] == i) {
//                        cout << idx << ' ';
//                        break;
//                    } else {
//                        // 아니면 이전노드 값을 갱신 시킨다.
//                        idx = dist[idx];
//                    }
//                }
//            }
//        }
//        cout << endl;
//    }
//}
////
//// Created by Mac2 on 2021/07/25.
////
//
