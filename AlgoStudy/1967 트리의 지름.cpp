//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n;
//int chk[mx];
//pl st;
//vector<pl> ed[mx];
//
//void BFS(int cur) {
//    queue<pl> q;
//    memset(chk, 0, sizeof chk);
//    q.push({cur, 0}), chk[cur] = 1;
//    st = {0, 0};
//
//    while (!q.empty()) {
//        auto[cur, val] = q.front();
//        q.pop();
//
//        for (auto n: ed[cur]) {
//            auto[next, nval] = n;
//
//            if (chk[next])
//                continue;
//
//            chk[next] = 1;
//            q.push({next, nval + val});
//
//            if (nval + val > st.second)
//                st = {next, nval + val};
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n;
//
//    for (int i = 0; i < n - 1; ++i) {
//        int a, b, c;
//
//        cin >> a >> b >> c;
//        ed[a].emplace_back(b, c);
//        ed[b].emplace_back(a, c);
//    }
//
//    // 12896번과 동일하게
//    // 임의의 점에서 최대 거리와 그 노드 구하고
//    BFS(1);
//
//    // 그 노드에서 시작해서 최대 거리를 구하면 된다
//    BFS(st.first);
//
//    cout << st.second << endl;
//}
////
//// Created by Mac2 on 2021/09/01.
////
//
