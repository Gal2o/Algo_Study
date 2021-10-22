//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int> tp;
//
//int n, m, k, answer = 1e9;
//int chk[6];
//vector<vector<int>> arr;
//vector<tp> op;
//
//// 최솟값 찾기
//void findAns() {
//    for (int i = 0; i < n; ++i) {
//        int hap = 0;
//        for (int j = 0; j < m; ++j) {
//            hap += arr[i][j];
//        }
//
//        answer = min(hap, answer);
//    }
//}
//
//// 배열 돌리기
//void rotate(int sy, int sx, int ey, int ex) {
//    deque<int> q;
//
//    while (sy < ey) {
//        // 윗변
//        for (int i = sx; i < ex; ++i)
//            q.push_back(arr[sy][i]);
//        // 오른변
//        for (int i = sy; i < ey; ++i)
//            q.push_back(arr[i][ex]);
//        // 아래변
//        for (int i = ex; i > sx; --i)
//            q.push_back(arr[ey][i]);
//        // 왼변
//        for (int i = ey; i > sy; --i)
//            q.push_back(arr[i][sx]);
//
//        q.push_front(q.back());
//        q.pop_back();
//
//        // 윗변
//        for (int i = sx; i < ex; ++i)
//            arr[sy][i] = q.front(), q.pop_front();
//        // 오른변
//        for (int i = sy; i < ey; ++i)
//            arr[i][ex] = q.front(), q.pop_front();
//        // 아래변
//        for (int i = ex; i > sx; --i)
//            arr[ey][i] = q.front(), q.pop_front();
//        // 왼변
//        for (int i = ey; i > sy; --i)
//            arr[i][sx] = q.front(), q.pop_front();
//
//        sy++, sx++, ey--, ex--;
//    }
//}
//
//void dfs(int cnt) {
//    if (cnt == k) {
//        findAns();
//        return;
//    }
//
//    vector<vector<int>> tmp = arr;
//
//    // 0 ~ k - 1 까지 조합 돌리기
//    for (int i = 0; i < k; ++i) {
//        if (!chk[i]) {
//            auto[r, c, s] = op[i];
//            chk[i] = 1;
//
//            rotate(r - s, c - s, r + s, c + s);
//            dfs(cnt + 1);
//
//            chk[i] = 0, arr = tmp;
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m >> k;
//
//    arr.resize(n, vector<int>(m));
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    for (int i = 0; i < k; ++i) {
//        int r, c, s;
//        cin >> r >> c >> s;
//        r--, c--;
//        op.emplace_back(r, c, s);
//    }
//
//    dfs(0);
//
//    cout << answer << endl;
//}
//// Created on 2021/10/22.