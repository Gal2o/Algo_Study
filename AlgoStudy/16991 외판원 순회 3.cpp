//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//
//int n;
//double cost[16][16];
//vector<vector<double>> dp(16, vector<double>(1 << 16, -1));
//// 현재위치, 지금까지 방문한
//vector<pl> ed;
//
//double TSP(int cur, int visited) {
//    // 모든 정점을 방문 했는데
//    if (visited == (1 << n) - 1) {
//        // 시작마을 0번으로 갈 수 없다면 순회 할 수 없다.
//        if (cost[cur][0] == 0)
//            return cost[cur][0];
//    }
//
//    // dp 체크
//    if (dp[cur][visited] != -1)
//        return dp[cur][visited];
//
//    double ret = 1e9;
//
//    for (int i = 0; i < n; i++) {
//        // 노드를 방문 했거나, 갈 곳이 없으면 continue
//        if ((visited & (1 << i)) || cost[cur][i] == 0)
//            continue;
//
//        int next = visited | (1 << i);
//
//        ret = min(ret, TSP(i, next) + cost[cur][i]);
//    }
//
//    return dp[cur][visited] = ret;
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        ed.push_back({a, b});
//    }
//
//    // 각 마을에서 마을끼리 까지 거리를 저장해 놓는다.
//    // 0 이면 갈 수 없는 마을
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cost[i][j] =
//                    sqrt(pow(ed[i].first - ed[j].first, 2)
//                         + pow(ed[i].second - ed[j].second, 2));
//        }
//    }
//
//    // 어떤 노드에서 출발해도 순회가 가능하다면 다시 돌아오기 때문에 0에서 시작해도 상관이 없다.
//    printf("%lf", TSP(0, 0));
//}
////
//// Created by Mac2 on 2021/07/12.
////
//
