//#include <bits/stdc++.h>
//
//using namespace std;
//int t, k;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> t;
//    while (t--) {
//        cin >> k;
//
//        multiset<int> pq;
//
//        for (int i = 0; i < k; i++) {
//            char a;
//            int b;
//            cin >> a >> b;
//
//            if (a == 'I')
//                pq.insert(b);
//            else {
//                if (pq.empty())
//                    continue;
//
//                if (b == -1) {
//                    pq.erase(pq.begin());
//                } else {
//                    pq.erase(--pq.end());
//                }
//            }
//        }
//        if (pq.empty())
//            cout << "EMPTY" << endl;
//        else {
//            auto it = --pq.end();
//            cout << *it << ' ';
//
//            it = pq.begin();
//            cout << *it << endl;
//        }
//    }
//}
////
//// Created by Mac2 on 2021/07/28.
////
//
