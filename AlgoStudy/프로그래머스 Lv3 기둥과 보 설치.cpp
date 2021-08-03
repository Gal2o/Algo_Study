//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//int n;
//vector<vector<int>> build_frame = {
//        {0, 0, 0, 1},
//        {2, 0, 0, 1},
//        {4, 0, 0, 1},
//        {0, 1, 1, 1},
//        {1, 1, 1, 1},
//        {2, 1, 1, 1},
//        {3, 1, 1, 1},
//        {2, 0, 0, 0},
//        {1, 1, 1, 0},
//        {2, 2, 0, 1}
//};
//
//// tuple <x, y, block>
//map<tp, int> mp;
//
//bool avail() {
//    for (auto it : mp) {
//        int x = get<0>(it.first), y = get<1>(it.first), b = get<2>(it.first);
//
//        if (b) { // 보
//            if (mp.count({x, y - 1, 0}) || mp.count({x + 1, y - 1, 0}) ||
//                (mp.count({x - 1, y, 1}) && mp.count({x + 1, y, 1})))
//                continue;
//
//            return false;
//        } else { // 기둥
//            if (y == 0 || mp.count({x, y - 1, 0}) ||
//                mp.count({x - 1, y, 1}) || mp.count({x, y, 1})) {
//                continue;
//            }
//
//            return false;
//        }
//    }
//
//    return true;
//}
//
//int main() {
//    for (auto i : build_frame) {
//        int x = i[0], y = i[1];
//        int block = i[2]; // 0이면 기둥, 1이면 보
//        bool build = i[3]; // 0이면 삭제, 1이면 짓기
//
//        // 짓는다
//        if (build) {
//            // 일단 짓고,
//            mp[{x, y, block}] = 1;
//
//            // 체크한다
//            if (avail())
//                continue;
//            else
//                mp.erase({x, y, block});
//        }
//            // 삭제한다
//        else {
//            // 일단 삭제하고,
//            mp.erase({x, y, block});
//
//            // 체크한다
//            if (avail())
//                continue;
//            else
//                mp[{x, y, block}] = 1;
//        }
//    }
//
//    for (auto it = mp.begin(); it != mp.end(); it++) {
//        cout << get<0>(it->first) << ' ' << get<1>(it->first) << ' ' << get<2>(it->first) << endl;
//    }
//}
//
////
//// Created by Mac2 on 2021/07/30.
////
//
