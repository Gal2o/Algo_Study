//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int t, n;
//string p;
//
//int main() {
//    fastio
//    cin >> t;
//
//    while (t--) {
//        string arr;
//        cin >> p >> n >> arr;
//
//        deque<int> dq;
//        string temp;
//
//        for (auto i: arr) {
//            if (i == '[')
//                continue;
//
//            if (i == ',' || i == ']') {
//                if (!temp.empty()) {
//                    dq.push_back(stoi(temp));
//                    temp.clear();
//                }
//                continue;
//            }
//
//            temp += i;
//        }
//
//        int idx = 0, cnt = 0;
//        bool flag = true;
//
//        for (auto i: p) {
//            if (i == 'R') {
//                cnt++;
//            } else {
//                if (dq.empty()) {
//                    cout << "error" << endl;
//                    flag = false;
//                    break;
//                }
//
//                if (cnt % 2 == 0)
//                    dq.pop_front();
//                else
//                    dq.pop_back();
//            }
//        }
//
//        if (cnt % 2 == 1)
//            reverse(dq.begin(), dq.end());
//
//        if (!flag)
//            continue;
//
//        cout << '[';
//        for (int i = idx; i < dq.size(); i++) {
//            cout << dq[i];
//            if (i != dq.size() - 1)
//                cout << ',';
//        }
//        cout << ']' << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/15.
////
//
