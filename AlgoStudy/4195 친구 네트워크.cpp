//#include <bits/stdc++.h>
//
//#define mx 200001
//#define endl "\n"
//using namespace std;
//typedef pair<int, int> pl;
//int T, F;
//int cnt, parents[mx], val[mx];
//
//int u_find(int x) {
//    if (parents[x] != x) {
//        parents[x] = u_find(parents[x]);
//    }
//
//    return parents[x];
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> T;
//
//    while (T--) {
//        cin >> F;
//
//        cnt = 0;
//        for (int i = 0; i < mx; i++)
//            parents[i] = i, val[i] = 1;
//
//        map<string, int> mp;
//
//        for (int i = 0; i < F; i++) {
//            string a, b;
//            cin >> a >> b;
//
//            if (!mp.count(a))
//                mp[a] = cnt++;
//
//            if (!mp.count(b))
//                mp[b] = cnt++;
//
//            int u = u_find(mp[a]);
//            int v = u_find(mp[b]);
//
//            // 같을 때는 그냥 u, v 아무거나 뽑아도 된다.
//            if (u == v) {
//                cout << val[u] << endl;
//                continue;
//            }
//
//            // merge 부분
//            parents[u] = v;
//
//            // 친구 네트워크를 구할 때는,
//            // 유니온 파인드 parents[u] = v 후에,
//            // u의 부모가 v가 됐으므로, u 친구 갯수 값을 v에 더해줘야한다.
//            val[parents[v]] += val[u];
//
//            // 출력 할 때, endl은 시간을 많이 잡아먹으므로 "\n"을 뽑아주자
//            cout << val[parents[u]] << endl;
//        }
//    }
//}
////
//// Created by Mac2 on 2021/07/15.
////
//
