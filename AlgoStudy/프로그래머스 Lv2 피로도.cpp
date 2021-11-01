//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int k = 80;
//int dsz, answer;
//int chk[10];
//vector<vector<int>> dungeons = {{80, 20},
//                                {50, 40},
//                                {30, 10}};
//
//void dfs(int remain, int cnt) {
//    answer = max(cnt, answer);
//
//    cout << remain << ' ' << cnt << endl;
//
//    for (int i = 0; i < dsz; ++i) {
//        if (!chk[i]) {
//            int go = dungeons[i][0], sub = dungeons[i][1];
//
//            if (remain >= go && remain - sub >= 0) {
//                chk[i] = 1;
//                dfs(remain - sub, cnt + 1);
//                chk[i] = 0;
//            }
//        }
//    }
//}
//
//int main() {
//    dsz = dungeons.size();
//    dfs(k, 0);
//
//    cout << answer << endl;
//}
//// Created on 2021/11/01.