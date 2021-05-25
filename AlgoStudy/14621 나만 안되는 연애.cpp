//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//typedef pair<int, int> pii;
//
//priority_queue<pii, vector<pii>, greater<pii>> pq;
//vector<pii> school[1001];
//int chk[1001];
//char type[1001];
//
//int n, m, ans;
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> type[i];
//    }
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//
//        // 노드 끼리의 학교 타입이 다를 경우에만 간선을 입력해준다.
//        if (type[a] != type[b]) {
//            school[a].push_back({c, b});
//            school[b].push_back({c, a});
//        }
//    }
//
//    // 프림 알고리즘 시작
//    for (auto ed: school[1])
//        pq.push(ed);
//    chk[1] = 1;
//
//    while (!pq.empty()) {
//        int now = pq.top().second, val = pq.top().first;
//        pq.pop();
//
//        if (chk[now])
//            continue;
//
//        chk[now] = 1, ans += val;
//
//        for (auto ed : school[now])
//            pq.push(ed);
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (chk[i] == 0) {
//            ans = -1;
//            break;
//        }
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/18.
////
//
