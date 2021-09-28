//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 100001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m;
//vector<int> ed[mx];
//int w[mx];
//
//void DFS(int p, int c, int hap) {
//    // 누적된 hap에 자기가 받은 칭찬 더해주고
//    hap += w[c];
//    // 본인 갱신
//    w[c] = hap;
//
//    // 부모가 아닌 자식으로만 타고 가기
//    for (auto i: ed[c]) {
//        if (i != p) {
//            DFS(c, i, hap);
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; ++i) {
//        int a;
//        cin >> a;
//
//        if (a == -1)
//            continue;
//
//        ed[i].emplace_back(a);
//        ed[a].emplace_back(i);
//    }
//
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        w[a] += b; // !! 중복으로 칭찬이 주어질 수 있으므로 칭찬 지수를 더해준다
//    }
//
//    DFS(-1, 1, 0);
//
//    for (int i = 1; i <= n; i++)
//        cout << w[i] << ' ';
//}
////
//// Created by Mac2 on 2021/09/17.
////
//
