//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//bool flag;
//int k, n, f, chk[901], fnd[901][901];
//vector<int> res; // 친구 담기
//
//void DFS(int idx) {
//    if (flag)
//        return;
//
//    if (res.size() == k) {
//        flag = true;
//        return;
//    }
//
//    // idx + 1 -> 본인 제외 하고 친구 되는지 확인
//    for (int i = idx + 1; i <= n; i++) {
//        if (!chk[i]) {
//            chk[i] = 1;
//
//            bool avail = true;
//
//            // i번째 학생이 지금까지 친구인 사람들이랑 다 친구인지 확인
//            for (auto n: res) {
//                if (!fnd[i][n]) {
//                    avail = false;
//                    break;
//                }
//            }
//
//            // 모두 친구라면, res에 넣고 다음 재귀
//            if (avail) {
//                res.push_back(i);
//                DFS(i);
//
//                // K만큼 친구 형성 됬으면 return
//                if (flag)
//                    return;
//
//                res.pop_back();
//            }
//
//            chk[i] = 0;
//        }
//    }
//}
//
//int main() {
//    fastio
//    cin >> k >> n >> f;
//
//    for (int i = 0; i < f; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        fnd[a][b] = fnd[b][a] = 1;
//    }
//
//    // 1부터 N까지 넣어보면서 친구관계를 찾는다
//    for (int i = 1; i <= n; i++) {
//        // i번째 사람 넣고 친구 K만큼 되는지 확인
//        chk[i] = 1, res.push_back(i);
//        DFS(i);
//
//        // 만약에 K만큼의 친구 생성이 되었으면, break
//        if (flag) break;
//
//        chk[i] = 0, res.pop_back();
//    }
//
//    if (!flag) cout << -1 << endl;
//
//    for (auto i: res) cout << i << endl;
//}
////
//// Created by Mac2 on 2021/09/22.
////
//
