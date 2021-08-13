//#include <bits/stdc++.h>
//
//#define MAX 1001
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//
//int N, M, K, dist;
//int uf[MAX];
//vector<tp> ed;
//vector<int> YNY;
//priority_queue<pl, vector<pl>, greater<>> pq;
//
//// 유니온 파인드
//int u_find(int idx) {
//    if (uf[idx] != idx)
//        uf[idx] = u_find(uf[idx]);
//
//    return uf[idx];
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> N >> M >> K;
//
//    // 유니온파인드 - 자기 자신을 부모로 초기화
//    for (int i = 1; i <= N; i++) {
//        uf[i] = i;
//    }
//
//    // 여러 개의 발전소 중에서
//    // MST가 최소가 되는 발전소를 택하기 위해
//    // 가장 작은 도시 번호를 찾는다
//    int MINYNY = 1e9;
//    for (int i = 0; i < K; ++i) {
//        int a;
//        cin >> a;
//
//        MINYNY = min(MINYNY, a);
//        YNY.push_back(a);
//    }
//
//    // 구한 가장 작은 도시번호는 모든 발전소의 부모로 갱신한다
//    for (auto i : YNY) {
//        uf[i] = MINYNY;
//    }
//
//    // 모든 노드들을 넣고 오름차순으로 정렬
//    for (int i = 0; i < M; ++i) {
//        int u, v, w;
//        cin >> u >> v >> w;
//
//        ed.push_back({w, u, v});
//    }
//
//    sort(ed.begin(), ed.end());
//
//    // 크루스칼 돌리면 끝
//    for (auto i : ed) {
//        auto[val, cur, next] = i;
//
//        int u = u_find(cur);
//        int v = u_find(next);
//
//        if (u == v)
//            continue;
//
//        dist += val;
//        uf[max(u, v)] = min(u, v);
//    }
//
//    cout << dist << endl;
//}
////
//// Created by Mac2 on 2021/08/10.
////
//
