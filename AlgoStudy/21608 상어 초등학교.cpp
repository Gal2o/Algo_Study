//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int, int> tp;
//
//int n, answer;
//int arr[21][21];
//vector<int> v;
//int stud[401][401];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n * n; ++i) {
//        int a, b, c, d, e;
//        cin >> a >> b >> c >> d >> e;
//
//        v.push_back(a);
//        stud[a][b] = stud[a][c] = stud[a][d] = stud[a][e] = 1;
//    }
//
//    for (int i = 0; i < n * n; ++i) {
//        int num = v[i];
//
//        vector<tp> op;
//
//        for (int j = 0; j < n; ++j) {
//            for (int k = 0; k < n; ++k) {
//                if (!arr[j][k]) {
//                    int fav = 0, emty = 0, y = j, x = k;
//
//                    for (int l = 0; l < 4; ++l) {
//                        int ny = j + dy[l], nx = k + dx[l];
//
//                        if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//                            continue;
//
//                        if (arr[ny][nx] != 0) {
//                            if (stud[num][arr[ny][nx]])
//                                fav++;
//                        } else
//                            emty++;
//                    }
//
//                    op.emplace_back(-fav, -emty, y, x);
//                }
//            }
//        }
//
//        sort(op.begin(), op.end());
//
//        auto[fav, empty, y, x] = op[0];
//        arr[y][x] = num;
//
//        op.clear();
//    }
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            int cnt = 0;
//
//            for (int k = 0; k < 4; ++k) {
//                int ny = i + dy[k], nx = j + dx[k];
//
//                if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//                    continue;
//
//                if (stud[arr[i][j]][arr[ny][nx]])
//                    cnt++;
//            }
//
//            answer += (int) pow(10, cnt - 1);
//        }
//    }
//
//    cout << answer << endl;
//}
//// Created on 2021-10-17.