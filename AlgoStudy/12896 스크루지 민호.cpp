//#include <bits/stdc++.h>
//
//#define mx 100001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, answer;
//int chk[mx];
//pl st;
//vector<int> ed[mx];
//
//void BFS(int cur) {
//    queue<pl> q;
//    memset(chk, 0, sizeof chk);
//    q.push({cur, 0}), chk[cur] = 1;
//    st = {0, 0};
//
//    while (!q.empty()) {
//        auto[cur, val]= q.front();
//        q.pop();
//
//        for (auto n: ed[cur]) {
//            if (!chk[n]) {
//                chk[n] = 1;
//                q.push({n, val + 1});
//
//                if (st.first < val + 1)
//                    st = {val + 1, n};
//            }
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n;
//
//    for (int i = 0; i < n - 1; ++i) {
//        int a, b;
//
//        cin >> a >> b;
//
//        // 양방향 입력
//        ed[a].push_back(b);
//        ed[b].push_back(a);
//    }
//
//    // 임의의 점에서 가장 멀리 가는 {거리, 노드} 찾기
//    BFS(1);
//
//    // 찾은 노드에서 가장 멀리 갈 수 있는 {거리,노드} 찾기
//    BFS(st.second);
//
//    // (찾은 가장 먼 거리에 + 1) / 2 가 중앙이다.
//    cout << (st.first + 1) / 2 << endl;
//}
////
//// Created by Mac2 on 2021/09/01.
////
//
