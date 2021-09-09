//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 1001
//using namespace std;
//int t, n, m, chk[mx], dist[mx][mx];
//vector<int> tree[mx];
//
//int dp(int idx, int prev) {
//    // 리프노드 감별
//    // 자식으로 못타고 들어가면 flag는 false이다
//    bool flag = false;
//    int sum = 0;
//
//    for (auto next: tree[idx]) {
//        if (next != prev) {
//            flag = true;
//            sum += dp(next, idx);
//        }
//    }
//
//    // 리프노드라면, 이전 노드에서 현재 노드로 오는 다이너마이트 값 리턴
//    if (!flag)
//        return dist[prev][idx];
//
//    // 아니면, min(자식들의 다이너 마이트 값, 이전노드->현재노드 다이너마이트 값)
//    return min(dist[prev][idx], sum);
//}
//
//int main() {
//    fastio
//    cin >> t;
//
//    while (t--) {
//        cin >> n >> m;
//
//        memset(tree, 0, sizeof tree);
//
//        for (int i = 0; i < m; ++i) {
//            int a, b, c;
//            cin >> a >> b >> c;
//
//            tree[a].emplace_back(b);
//            tree[b].emplace_back(a);
//
//            // 양방향으로 가는 가중치 넣어주기
//            dist[a][b] = dist[b][a] = c;
//        }
//
//        // 1부터 시작이므로, 0-> 1로 가는 경로는 INF로 초기화 해줘야 답이 0이 안나옴
//        dist[0][1] = 1e9;
//
//        int answer = dp(1, 0);
//
//        // n = 1, m = 0 일때, 방지
//        if (answer == 1e9)
//            cout << 0 << endl;
//        else
//            cout << answer << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/08.
////
//
