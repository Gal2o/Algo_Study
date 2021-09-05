//#include <bits/stdc++.h>
//
//#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
//#define mx 5001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m, s, t, hap, chk1[mx], chk2[mx];
//vector<pl> ed[mx];
//vector<pl> v;
//
//void dijkstra(int chk[], int s) {
//    priority_queue<pl, vector<pl>, greater<>> pq;
//    fill(&chk[0], &chk[n + 1], 1e9);
//    pq.push({0, s}), chk[s] = 0;
//
//    while (!pq.empty()) {
//        auto[val, cur] = pq.top();
//        pq.pop();
//
//        if (val ^ chk[cur])
//            continue;
//
//        for (auto n: ed[cur]) {
//            auto[nval, next] = n;
//            nval += val;
//
//            if (nval < chk[next]) {
//                chk[next] = nval;
//                pq.push({nval, next});
//            }
//        }
//    }
//}
//
//// 처음 설계.
//// 다익스트라로 최단거리 구한다.
//// 최단거리 중에 가중치가 가장 큰 하나를 구해서 모든 합에서 빼준다.
//// 이럴경우 반례에서 걸림
//int main() {
//    FASTIO
//    cin >> n >> m;
//
//    for (int i = 0; i < m; ++i) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        hap += c;
//
//        ed[a].emplace_back(c, b);
//        ed[b].emplace_back(c, a);
//        v.emplace_back(a, b);
//    }
//
//    cin >> s >> t;
//
//    // 시작점 -> 끝점
//    // 끝점 -> 시작점 으로 최단 거리를 모두 구한다.
//    dijkstra(chk1, s);
//    dijkstra(chk2, t);
//
//    // 구한 두 개의 최단거리 중에서,
//    // 비연결이 되는 가장 작은 거리의 합 총 간선 합에 빼주면 된다.
//    // 예제 1. 같은 경우, 위-1 + 아래 3-8 = 3이 가장 작으므로 이것을 뺀게 최대값
//    // 반례 1.
//    // 4 5
//    // 1 2 2
//    // 2 4 2
//    // 1 3 1
//    // 3 4 3
//    // 1 4 99
//    // 1 4
//    // 모두 다 지우는 것이, 최대합 (가운데 1 4 99 때문에)
//    // 위 1 + 아래 4 = 0이므로, 최대 값은 모든 합
//
//    int mn = 1e9;
//    for (auto i: v) {
////        cout << i.first << ',' << chk1[i.first] << ' ' << i.second << ',' << chk2[i.second] << endl;
////        cout << i.second << ',' << chk1[i.second] << ' ' << i.first << ',' << chk2[i.first] << endl << endl;
//        mn = min(mn, chk1[i.first] + chk2[i.second]);
//        mn = min(mn, chk1[i.second] + chk2[i.first]);
//    }
//
//    cout << hap - mn;
//}
////
//// Created by Mac2 on 2021/09/05.
////
//
//
