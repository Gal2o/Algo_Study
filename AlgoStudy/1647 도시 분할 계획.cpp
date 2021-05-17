//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int n, m;
//vector<pair<int, int>> road[100001]; // 노드, 가중치
//bool visit[100001];
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//
//        scanf("%d %d %d", &a, &b, &c);
//        road[a].push_back({b, c});
//        road[b].push_back({a, c});
//    }
//
//    priority_queue<pair<int, int>> pq;
//    int ans = 0, mx = 0;
//
//    // 노드 1인 것들 다 넣어주기
//    for (auto ed : road[1])
//        pq.push({-ed.second, ed.first});
//
//    // visit[1] 체크
//    visit[1] = 1;
//
//    // 모인 노드 중에서 가장 가중치 작은 것들만 뽑아오기
//    while (!pq.empty()) {
//        int now = pq.top().second, val = -pq.top().first;
//        pq.pop();
//
//        if (visit[now])
//            continue;
//
//        visit[now] = true;
//        ans += val;
//        // 두 개의 분리된 마을을 만들고 싶은데 간선의 합이 최소여야 하므로,
//        // MST로 다 이어준 다음 가장 큰 간선을 빼주면 된다.
//        mx = max(mx, val);
//
//        for (auto ed : road[now])
//            pq.push({-ed.second, ed.first});
//    }
//
//    // 가장 큰 간선을 뺀다.
//    cout << ans - mx << endl;
//}
//
////
//// Created by Mac2 on 2021/05/17.
////
//
