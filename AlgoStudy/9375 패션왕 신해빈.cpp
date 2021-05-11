//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//int t, n;
//string v;
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        map<string, int> m;
//        cin >> n;
//
//        for (int i = 0; i < n; i++) {
//            string cloth, type;
//            cin >> cloth >> type;
//
//            if (m.find(type) == m.end()) {
//                m[type] = 1;
//            } else
//                m[type]++;
//        }
//
//        int ans = 1;
//
//        for (auto i : m)
//            ans *= (i.second + 1);
//
//        ans --;
//        cout << ans << endl;
//    }
//}
////
//// Created by Mac2 on 2021/05/07.
////
//
