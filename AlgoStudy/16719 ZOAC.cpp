//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<string, int> pl;
//
//string st;
//int chk[101];
//
//int main() {
//    cin >> st;
//
//    for (int i = 0; i < st.size(); ++i) {
//        vector<pl> v;
//
//        for (int j = 0; j < st.size(); ++j) {
//            if (!chk[j]) {
//                string tp;
//
//                for (int k = 0; k < st.size(); ++k) {
//                    if (j == k || chk[k])
//                        tp += st[k];
//                }
//
//                v.emplace_back(tp, j);
//            }
//        }
//
//        sort(v.begin(), v.end());
//        cout << v[0].first << endl;
//        chk[v[0].second] = 1;
//    }
//}
//// Created on 2021-10-17.