//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int> pl;
//
//int n, answer;
//int arr[501][501];
//int chk[501][501];
//int dy[2] = {1, 1}, dx[2] = {0, 1};
//
//int main() {
//    fastio
//    cin >> n;
//
//    for (int i = 0; i < n; ++i)
//        for (int j = 0; j <= i; ++j)
//            cin >> arr[i][j];
//
//    queue<pl> q;
//    q.push({0, 0, arr[0][0]}), chk[0][0] = arr[0][0];
//
//    while (!q.empty()) {
//        auto[fy, fx, val] = q.front();
//        q.pop();
//
//        if (val ^ chk[fy][fx])
//            continue;
//
//        answer = max(answer, val);
//
//        for (int i = 0; i < 2; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny > n - 1 || nx > n - 1)
//                continue;
//
//            int nval = val + arr[ny][nx];
//
//            if (nval > chk[ny][nx])
//                chk[ny][nx] = nval, q.push({ny, nx, nval});
//        }
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/09/29.
////
//
