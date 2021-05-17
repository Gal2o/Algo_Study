//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int t, map[11][11], chk[11], ans;
//
//
///*
// * 문제 이해 제대로 못함
// * 0 <= y < 11 중에서 x를 하나씩은 무조건 고르는데 x를 가장 크게 고를 수 있는 백트래킹
// */
//void dfs(int y, int hap) {
//    if (y == 11) {
//        if (ans < hap)
//            ans = hap;
//        return;
//    }
//
//    for (int i = 0; i < 11; i++) {
//        if (!chk[i] && map[y][i] != 0) {
//            chk[i] = 1;
//            dfs(y + 1, hap + map[y][i]);
//            chk[i] = 0;
//        }
//    }
//}
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        ans = 0;
//
//        for (int i = 0; i < 11; i++) {
//            chk[i] = 0;
//
//            for (int j = 0; j < 11; j++)
//                cin >> map[i][j];
//        }
//
//        dfs(0, 0);
//
//        cout << ans << endl;
//    }
//}
////
//// Created by Mac2 on 2021/05/12.
////
//
