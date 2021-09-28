//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define MOD 100000
//using namespace std;
//
//int w, h;
//int dp[101][101][2][2]; // y, x, (오른쪽, 위), (방향 못바꿈, 바꿈)
//
//int DFS(int y, int x, int dir, int change) {
//    if (y < 1 || x < 1 || y > h || x > w)
//        return 0;
//
//    if (y == h && x == w)
//        return dp[y][x][dir][change] = 1;
//
//    int &cur = dp[y][x][dir][change];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 0;
//
//    // dir == 1 이면, 위로 가는 중
//    if (dir) {
//        if (!change) // 0 : 방향 못바꿈, 같은 방향으로 진행 -> 다음 번엔 방향 바꿀 수 있음
//            cur += DFS(y + 1, x, 1, 1) % MOD;
//        else // 1 : 방향 바꿀 수 있음, 위쪽으로 가면, 같은 방향이므로 다음 번엔 방향 바꾸기 가능
//            //                     오른쪽으로 방향 바꾸면, 다음번엔 방향 못바꿈
//            cur += (DFS(y + 1, x, 1, 1)
//                    + DFS(y, x + 1, 0, 0)) % MOD;
//    } else { // dir == 0이면, 오른쪽으로 가는 중
//        if (!change) // 위와 동일
//            cur += DFS(y, x + 1, 0, 1) % MOD;
//        else
//            cur += (DFS(y + 1, x, 1, 0)
//                    + DFS(y, x + 1, 0, 1)) % MOD;
//    }
//
//    return cur;
//}
//
//int main() {
//    cin >> w >> h;
//
//    memset(dp, -1, sizeof dp);
//
//    cout << (DFS(1, 1, 0, 0)
//             + DFS(1, 1, 1, 0)) % MOD << endl;
//}
////
//// Created by Mac2 on 2021/09/21.
////
//
