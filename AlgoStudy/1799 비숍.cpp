//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, bs[10][10], ons = -1, ens = -1, ochk[10][10], echk[10][10];
//vector<pair<int, int>> odd, even;
//
//bool ovail(int idx) {
//    int y = odd[idx].first, x = odd[idx].second;
//
//    for (int i = y + 1; i >= 1; i--) {
//        int ly = y - i, lx = x - i, ry = y - i, rx = x + i;
//
//        if (ly >= 0 && lx >= 0 && ochk[ly][lx])
//            return false;
//
//        if (ry >= 0 && rx <= n - 1 && ochk[ry][rx])
//            return false;
//    }
//
//    return true;
//}
//
//bool evail(int idx) {
//    int y = even[idx].first, x = even[idx].second;
//
//    for (int i = y + 1; i >= 1; i--) {
//        int ly = y - i, lx = x - i, ry = y - i, rx = x + i;
//
//        if (ly >= 0 && lx >= 0 && echk[ly][lx])
//            return false;
//
//        if (ry >= 0 && rx <= n - 1 && echk[ry][rx])
//            return false;
//    }
//
//    return true;
//}
//
///*
// * 체스판의 하얀색 부분
// * 1 0 0 0 1
// * 0 1 0 0 0
// * 1 0 1 0 1
// * 0 0 0 0 0
// * 1 0 1 0 1
// */
//void oddfs(int idx, int cnt) {
//    if (ons < cnt)
//        ons = cnt;
//
//    for (int i = idx; i < odd.size(); i++) { // idx를 갱신해서 중복으로 for문 X
//        int y = odd[i].first, x = odd[i].second;
//
//        if (ovail(i)) { // 해당 1 ~ (y-1) 행의 대각선을 전부 검사해서 가능하면 chk
//            ochk[y][x] = 1;
//            oddfs(i + 1, cnt + 1);
//            ochk[y][x] = 0;
//        }
//    }
//}
//
///*
// * 체스판의 검은색 부분
// * 0 1 0 1 0
// * 0 0 0 0 0
// * 0 0 0 0 0
// * 1 0 0 0 0
// * 0 0 0 1 0
// */
//void evenfs(int idx, int cnt) {
//    if (ens < cnt)
//        ens = cnt;
//
//    for (int i = idx; i < even.size(); i++) {
//        int y = even[i].first, x = even[i].second;
//
//        if (evail(i)) { // 해당 1 ~ (y-1) 행의 대각선을 전부 검사해서 가능하면 chk
//            echk[y][x] = 1;
//            evenfs(i + 1, cnt + 1);
//            echk[y][x] = 0;
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> bs[i][j];
//
//            if (bs[i][j] == 1) {
//                if ((i + j) % 2 == 0) // y,x 를 더해서 2로 나누어 떨어지면 하얀색 부분
//                    even.push_back({i, j});
//                else                  // 아니면 검은색 부분
//                    odd.push_back({i, j});
//            }
//        }
//    }
//
//    oddfs(0, 0), evenfs(0, 0);
//
//    cout << ons + ens << endl;
//}
////
//// Created by Mac2 on 2021/05/14.
////
//
