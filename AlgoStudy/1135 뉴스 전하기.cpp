//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//
//int n;
//vector<pl> ed[51]; // 걸리는 시간, node
//
//// 다시 풀어보기
//int speak(int idx) {
//    int res = 0;
//
//    // 단방향이라 chk는 따로 안해도 된다.
//    for (int i = 0; i < ed[idx].size(); i++) {
//        int next = ed[idx][i].second;
//        ed[idx][i].first = speak(next) + 1; // + 1 씩 dp 쌓기
//    }
//
//    // 가장 오래 걸리는 순으로 정렬하기
//    sort(ed[idx].begin(), ed[idx].end(), greater<pl>());
//
//    // 가장 오래 걸리는 순으로 전파하기
//    for (int i = 0; i < ed[idx].size(); i++) {
//        ed[idx][i].first += i;
//        res = max(res, ed[idx][i].first);
//    }
//
//    return res;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//
//        if (i == 0)
//            continue;
//        else
//            ed[a].push_back({0, i});
//    }
//
//    cout << speak(0) << endl;
//}
////
//// Created by Mac2 on 2021/06/16.
////
//
