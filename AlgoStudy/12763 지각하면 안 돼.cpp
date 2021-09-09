//#include <bits/stdc++.h>
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define mx 10001
//using namespace std;
//
//typedef tuple<int, int, int> tp;
//
//int n, t, m, l;
//vector<tp> ed[101];
//
//// 노드, 사용 시간 = 사용 금액 저장
//int chk[101][mx];
//
//int main() {
//    fastio
//    cin >> n >> t >> m >> l;
//
//    for (int i = 0; i < l; ++i) {
//        int a, b, c, d;
//        cin >> a >> b >> c >> d;
//
//        ed[a].emplace_back(d, b, c);
//        ed[b].emplace_back(d, a, c);
//    }
//
//    fill(&chk[0][0], &chk[n][mx + 1], 1e9);
//
//    priority_queue<tp, vector<tp>, greater<>> pq;
//    // 지출 금액, 노드, 사용 시간
//    pq.push({0, 1, 0});
//    // 노드, 사용 시간
//    chk[1][0] = 0;
//
//    while (!pq.empty()) {
//        auto[cost, cur, tm] = pq.top();
//        pq.pop();
//
//        if (cost > chk[cur][tm])
//            continue;
//
//        for (auto n: ed[cur]) {
//            auto[ncost, next, ntm] = n;
//            ncost += cost;
//            ntm += tm;
//
//            // 사용 시간, 사용 금액이 주어진 t, m 보다 작거나 같아야 한다.
//            if (ncost <= m && ntm <= t && ncost < chk[next][ntm]) {
//                chk[next][ntm] = ncost;
//                pq.push({ncost, next, ntm});
//            }
//        }
//    }
//
//    int answer = 1e9;
//
//    for (int i = 1; i <= t; i++) {
//        if (chk[n][i] != 1e9)
//            answer = min(chk[n][i], answer);
//    }
//
//    if (answer == 1e9)
//        cout << -1 << endl;
//    else
//        cout << answer << endl;
//
//}
////
//// Created by Mac2 on 2021/09/07.
////
//
