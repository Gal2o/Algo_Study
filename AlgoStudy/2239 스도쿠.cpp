//#include <bits/stdc++.h>
//
//using namespace std;
//
//char sudoku[9][9];
//bool flag;
//vector<pair<int, int>> r;
//int dy[9][10], dx[9][10], ds[9][10]; // y행, x 열, 3x3 에 각각에 어떤 숫자가 있는지 체크되어 있음.
//
//void print() {
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++)
//            cout << sudoku[i][j];
//        cout << endl;
//    }
//}
//
//void dfs(int y, int x, int cnt) {
//    if (flag)
//        return;
//
//    if (r.size() == cnt) {
//        flag = true;
//        print();
//        return;
//    }
//
//    for (int i = 1; i <= 9; i++) {
//        if (!dy[y][i] && !dx[x][i] && !ds[(y / 3) * 3 + (x / 3)][i]) {
//            dy[y][i] = 1, dx[x][i] = 1, ds[(y / 3) * 3 + (x / 3)][i] = 1, sudoku[y][x] = i + '0';
//
//            dfs(r[cnt + 1].first, r[cnt + 1].second, cnt + 1);
//
//            dy[y][i] = 0, dx[x][i] = 0, ds[(y / 3) * 3 + (x / 3)][i] = 0, sudoku[y][x] = '0';
//        }
//    }
//}
//
//int main() {
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            cin >> sudoku[i][j];
//
//            int s = sudoku[i][j] - '0';
//
//            if (!s)
//                r.push_back({i, j});
//
//            // 입력 받을 때, y행, x열, 3x3 에 0이 아닌 숫자들을 체크 해준다.
//            // 좌표를 0~8의 주소인 3x3 으로 매핑할 때,
//            // (y/3 * 3) + x/3 하면 각 좌표가 0~8 주소의 3x3인지 알아낼 수 있다.
//            dy[i][s] = 1, dx[j][s] = 1, ds[(i / 3) * 3 + (j / 3)][s] = 1;
//        }
//    }
//
//    dfs(r[0].first, r[0].second, 0);
//}
//
////
//// Created by Mac2 on 2021/05/21.
////
//
