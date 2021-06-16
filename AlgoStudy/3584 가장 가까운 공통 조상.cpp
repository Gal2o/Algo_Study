//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//typedef pair<int, int> pl;
//int t, n, a, b, root;
//vector<int> v[mx];
//vector<pl> chk(mx, {0, 0}); // 부모노드, depth
//
//void depth() {
//    queue<int> q;
//    chk = vector<pl>(mx, {0, 0});
//    q.push(root), chk[root] = {root, 1};
//
//    while (!q.empty()) {
//        int f = q.front();
//        q.pop();
//
//        for (auto i : v[f]) {
//            if (!chk[i].second) {
//                chk[i].first = f;
//                chk[i].second = chk[f].second + 1;
//                q.push(i);
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//
//        for (int i = 1; i <= n; i++)
//            v[i].clear();
//
//        for (int i = 0; i < n - 1; i++) {
//            scanf("%d %d", &a, &b);
//
//            if (i == 0)
//                root = a;
//
//            v[a].push_back(b);
//            v[b].push_back(a);
//        }
//
//        depth();
//
//        cin >> a >> b;
//
//        while (1) {
//            if (chk[a].first == chk[b].first)
//                break;
//
//            if (chk[a].second > chk[b].second)
//                a = chk[a].first;
//            else if (chk[a].second < chk[b].second)
//                b = chk[b].first;
//            else
//                a = chk[a].first, b = chk[b].first;
//        }
//
//        if (a == b)
//            cout << a << endl;
//        else
//            cout << chk[a].first << endl;
//    }
//}
////
//// Created by Mac2 on 2021/05/28.
////
//
