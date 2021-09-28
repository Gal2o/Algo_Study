//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, answer = 1e9;
//int chk[21][1 << 21], arr[21][21];
//
//// chk는 사람, 일 (비트)
//// dp + bit 마스킹 탑다운
//int DFS(int cur, int visit) {
//    // 일을 다했음
//    if (visit == (1 << n) - 1) {
//        return 0;
//    }
//
//    if (chk[cur][visit] != -1) {
//        return chk[cur][visit];
//    }
//
//    chk[cur][visit] = 1e9;
//
//    for (int i = 0; i < n; ++i) {
//        // 일 중복이면 conitnue
//        if ((visit & (1 << i)))
//            continue;
//
//        chk[cur][visit] = min(chk[cur][visit],
//                              DFS(cur + 1, visit | (1 << i)) + arr[cur][i]);
//    }
//
//    return chk[cur][visit];
//}
//
//// 사람 - 일 , 한 명이 한 개씩
//int main() {
//    cin >> n;
//
//    // 멍청하게 입력 받음
//    // arr에 넣어주자..
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> arr[i][j];
//
//    memset(chk, -1, sizeof chk);
//
//    cout << DFS(0, 0) << endl;
//}
////
//// Created by Mac2 on 2021/09/17.
////
//
//
