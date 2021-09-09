//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 40001
//
//using namespace std;
//typedef pair<int, int> pl;
//
//int t, n, k, answer, su;
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//
//        vector<int> v;
//        answer = 0;
//
//        for (int i = 1; i <= n; ++i) {
//            cin >> su;
//
//            if (i == 1) {
//                v.push_back(su), answer++;
//                continue;
//            }
//
//            if (v.back() < su) {
//                v.push_back(su);
//                answer++;
//            } else {
//                // lower_bound su 이상인 수가 처음 나오는 위치
//                auto it = lower_bound(v.begin(), v.end(), su);
//                *it = su;
//            }
//        }
//
//        cout << answer << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/07.
////
//
