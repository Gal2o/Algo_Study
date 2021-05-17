//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//// 프림 알고리즘으로 풀기
//vector<pair<int, int>> rd[1001];
//int chk[1001];
//int n, m, ans;
//
//int main() {
//    cin >> n;
//    cin >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//
//        rd[a].push_back({-c, b});
//        rd[b].push_back({-c, a});
//    }
//
//    priority_queue<pair<int, int>> pq;
//
//    for (auto ed : rd[1])
//        pq.push(ed);
//    chk[1] = 1;
//
//    while (!pq.empty()) {
//        int now = pq.top().second, val = -pq.top().first;
//        pq.pop();
//
//        if (chk[now])
//            continue;
//
//        chk[now] = 1, ans += val;
//
//        for (auto ed : rd[now])
//            pq.push(ed);
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/17.
////
//
