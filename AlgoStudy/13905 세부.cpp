//#include <bits/stdc++.h>
//
//#define mx 100001
//using namespace std;
//typedef pair<int, int> pl;
//int n, m, s, e, m1, m2, k, answer;
//vector<pl> ed[mx];
//int chk[mx];
//
//bool bfs(int h) {
//    memset(chk, 0, sizeof chk);
//    queue<int> q;
//    q.push(s), chk[s] = 1;
//
//    while (!q.empty()) {
//        int f = q.front();
//        q.pop();
//
//        // 방문한 적이 없거나, 가중치가 h보다 크거나 같으면 방문한다.
//        for (auto i : ed[f]) {
//            if (chk[i.second] || i.first < h)
//                continue;
//
//            chk[i.second] = 1, q.push(i.second);
//        }
//    }
//
//    // 최종 목적지에 도달하면 true
//    if (chk[e]) {
//        return true;
//    } else
//        return false;
//
//}
//
//// 예제를 예시로 든다면,
//// mid보다 간선의 가중치가 크거나 같아야만 건널 수 있다.
//// ed[i].first >= h
//// 만약 mid가 500000 이면 다 못건너니까 hi를 mid로 갱신
//// 만약에 mid가 2가 됐으면 가중치가 1을 제외한 나머지가 건널 수 있고, e에 도달할 수 있으므로
//// 최대값 갱신 후, lo = mid + 1로 가중치를 조금씩 올려서 맞춰주자
//// 건널 수 있는 가장 최대 값은 3이다.
//void binary() {
//    int lo = 0, hi = 1000000;
//
//    while (lo < hi) {
//        int mid = (lo + hi) / 2;
//
//        cout << mid << endl;
//        if (bfs(mid)) {
//            if (answer < mid)
//                answer = mid;
//
//            lo = mid + 1;
//        } else {
//            hi = mid;
//        }
//    }
//}
//
//// MST, 다익스트라로 하는 방법이 보이지 않음.
//// 그래서 이분탐색으로 무게 제한을 정해서, 무게 제한 보다 큰 간선들만 건널 수 있게
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> m >> s >> e;
//
//    for (int i = 0; i < m; i++) {
//        cin >> m1 >> m2 >> k;
//
//        ed[m1].push_back({k, m2});
//        ed[m2].push_back({k, m1});
//    }
//
//    binary();
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/25.
////
//
