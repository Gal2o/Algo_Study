//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<double, double> pd;
//typedef tuple<double, int, int> td;
//
//int n, uf[101];
//double answer;
//vector<pd> ed;
//vector<td> dist;
//priority_queue<td, vector<td>, greater<>> pq;
//
//int u_find(int idx) {
//    if (uf[idx] != idx)
//        uf[idx] = u_find(uf[idx]);
//
//    return uf[idx];
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i) {
//        double a, b;
//        cin >> a >> b;
//
//        ed.emplace_back(a, b);
//        uf[i] = i;
//    }
//
//    // 각 좌표 끼리 거리, 시작, 끝점으로 넣어서
//    for (int i = 0; i < ed.size() - 1; i++) {
//        for (int j = i + 1; j < ed.size(); j++) {
//            double a = sqrt(pow(ed[i].first - ed[j].first, 2) +
//                            pow(ed[i].second - ed[j].second, 2));
//
//            dist.push_back({a, i, j});
//        }
//    }
//
//    // 거리 작은 순으로 정렬해서
//    sort(dist.begin(), dist.end());
//
//    // 우선큐에 다 넣기
//    for (auto i : dist) {
//        pq.push(i);
//    }
//
//    // MST를 돌리면 된다
//    while (!pq.empty()) {
//        auto[dst, a, b] = pq.top();
//        pq.pop();
//
//        int u = u_find(a);
//        int v = u_find(b);
//
//        if (u == v)
//            continue;
//
//        answer += dst;
//        uf[max(u, v)] = min(u, v);
//    }
//
//    printf("%.2f\n", answer);
//}
////
//// Created by Mac2 on 2021/08/17.
////
//
