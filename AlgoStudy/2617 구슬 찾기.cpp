//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, cnt;
//int chk[2][100];
//vector<int> ed[100], red[100];
//
//void dfs(int idx, vector<int> e[100], int flag) {
//    for (auto i: e[idx]) {
//        if (!chk[flag][i]) {
//            chk[flag][i] = 1, cnt++;
//            dfs(i, e, flag);
//        }
//    }
//}
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        // a가 b보다 크다
//        cin >> a >> b;
//        ed[a].push_back(b);
//        red[b].push_back(a);
//    }
//
//    int answer = 0;
//    // 1~n 구슬 돌면서
//    for (int i = 1; i <= n; i++) {
//        // i번째 구슬보다 큰 것, 작은 것 갯수를 구한다
//        memset(chk, 0, sizeof chk);
//        chk[0][i] = chk[1][i] = 1;
//
//        // 구슬의 갯수가 (n + 1)/2 이상이면 중간 될 수 없음
//        cnt = 0;
//        dfs(i, ed, 0);
//        if (cnt >= (n + 1) / 2)
//            answer++;
//
//        cnt = 0;
//        dfs(i, red, 1);
//        if (cnt >= (n + 1) / 2)
//            answer++;
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/10/02.
////
//
