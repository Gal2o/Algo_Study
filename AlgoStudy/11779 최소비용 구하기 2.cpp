//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//int n, m, st, fin;
//bool flag;
//vector<pl> ed[1001], red[1001];
//vector<int> chk(1001, 1e9), answer;
//
//// bfs로 역추적 하는 것 보다
//// dfs로 하나만 잡아서 역추적 하는게 더 깔끔하다.
//void dfs(int idx, int cnt, int value) {
//    if (flag)
//        return;
//
//    if (idx == st) {
//        flag = true;
//
//        cout << cnt << endl;
//
//        // sort가 아니라 reverse .. 멍청
//        reverse(answer.begin(), answer.end());
//
//        for (auto i : answer)
//            cout << i << ' ';
//
//        return;
//    }
//
//    for (auto n : red[idx]) {
//        int next = n.first;
//        int nval = n.second;
//
//        if (flag)
//            return;
//
//        // chk[now] - nval == chk[next] 이면 dfs 타기
//        if (value - nval == chk[next]) {
//            answer.push_back(next);
//            dfs(next, cnt + 1, chk[next]);
//        }
//    }
//}
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
//        ed[a].push_back({b, c});
//        red[b].push_back({a, c});
//    }
//
//    cin >> st >> fin;
//
//    priority_queue<pl, vector<pl>, greater<pl>> pq;
//    pq.push({0, st});
//    chk[st] = 0;
//
//    while (!pq.empty()) {
//        int now = pq.top().second;
//        int val = pq.top().first;
//        pq.pop();
//
//        if (val > chk[now]) // 다익스트라에서 간선이 많을 때, 추가하기
//            continue;
//
//        for (auto n : ed[now]) {
//            int next = n.first;
//            int nval = n.second + val;
//
//            if (nval < chk[next]) {
//                chk[next] = nval, pq.push({nval, next});
//            }
//        }
//    }
//
//    cout << chk[fin] << endl;
//
//    // 역추적 하기
//    answer.push_back(fin);
//    dfs(fin, 1, chk[fin]);
//
//}
////
//// Created by Mac2 on 2021/07/07.
////
//
