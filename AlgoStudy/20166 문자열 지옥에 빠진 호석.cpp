//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, k;
//char arr[10][10];
//int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1}, dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
//
//map<string, int> mp;
//string str;
//
//void dfs(int y, int x, int cnt) {
//    if (cnt == str.size()) {
//        mp[str]++;
//        return;
//    }
//
//    for (int i = 0; i < 8; ++i) {
//        int ny = y + dy[i], nx = x + dx[i];
//
//        if (ny < 0) ny = n - 1;
//        else if (ny > n - 1) ny = 0;
//
//        if (nx < 0) nx = m - 1;
//        else if (nx > m - 1) nx = 0;
//
//        // 문자열을 고르는 방법은 방문 했던 곳 다시 방문 가능
//        // 다음 문자가 str[cnt]와 일치하면 dfs 타기
//        if (arr[ny][nx] == str[cnt]) {
//            dfs(ny, nx, cnt + 1);
//        }
//    }
//}
//
//int main() {
//    fastio
//    cin >> n >> m >> k;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    for (int i = 0; i < k; ++i) {
//        cin >> str;
//
//        // 중복 문자열이 들어올 수 있으므로, 한번 체크한 문자열은 바로 출력해주기
//        if (mp.count(str)) {
//            cout << mp[str] << endl;
//            continue;
//        }
//
//        for (int j = 0; j < n; ++j) {
//            for (int l = 0; l < m; ++l) {
//                if (arr[j][l] == str[0]) {
//                    dfs(j, l, 1);
//                }
//            }
//        }
//
//        cout << mp[str] << endl;
//    }
//}
//// Created on 2021/10/28.