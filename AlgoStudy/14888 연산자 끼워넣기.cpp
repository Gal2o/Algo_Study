//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//
//int n;
//int op[4];
//vector<int> su;
//ll MIN = 1e9, MAX = -1e9;
//
//void DFS(int cnt, ll cur) {
//    if (cnt == n) {
//
//        MIN = min(MIN, cur);
//        MAX = max(MAX, cur);
//        return;
//    }
//
//    for (int i = 0; i < 4; i++) {
//        if (op[i]) {
//            op[i]--;
//
//            ll hap = cur;
//            switch (i) {
//                case 0:
//                    hap += su[cnt];
//                    break;
//                case 1:
//                    hap -= su[cnt];
//                    break;
//                case 2:
//                    hap *= su[cnt];
//                    break;
//                case 3:
//                    if (hap < 0)
//                        hap = -hap / su[cnt], hap = -hap;
//                    else
//                        hap /= su[cnt];
//            }
//
//            DFS(cnt + 1, hap);
//            op[i]++;
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        int a;
//        cin >> a;
//
//        su.push_back(a);
//    }
//
//    cin >> op[0] >> op[1] >> op[2] >> op[3];
//
//    DFS(1, su[0]);
//
//    cout << MAX << endl << MIN << endl;
//}
////
//// Created by Mac2 on 2021/08/25.
////
//
