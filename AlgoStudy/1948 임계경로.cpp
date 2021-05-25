//#include <bits/stdc++.h>
//
//using namespace std;
//int n, m, st, ed, ans, indegree[10001], chk[10001], chk2[10001];
//vector<pair<int, int>> tp[10001]; // 위상정렬을 위한 배열
//vector<pair<int, int>> re[10001]; // 역추적 하기 위한 배열
//
//int main() {
//    cin >> n;
//    cin >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//
//        tp[a].push_back({b, c}); // 순방향
//        re[b].push_back({a, c}); // 역방향 으로 노드, 비용 push
//        indegree[b]++;
//    }
//
//    cin >> st >> ed;
//
//    queue<int> bq;
//    bq.push(st);
//
//    // 다익스트라로 해도 맞습니다.
////    while(!bq.empty()) {
////        int now = bq.front();
////        bq.pop();
////
////        for(int i = 0; i < tp[now].size(); i++) {
////            int next = tp[now][i].first, nval = tp[now][i].second;
////
////            if(chk[next] < chk[now] + nval)
////                chk[next] = chk[now] + nval, bq.push(next);
////        }
////    }
//
//    for (int i = 1; i <= n; i++) {
//        if (!bq.empty()) {
//            int now = bq.front();
//            bq.pop();
//
//            for (int i = 0; i < tp[now].size(); i++) {
//                int next = tp[now][i].first;
//                int nval = tp[now][i].second;
//
//                // 위상 정렬으로 돌되, 가장 오래 걸리는 시간을 알아내기 위해 최대값 갱신
//                if (chk[now] + nval > chk[next])
//                    chk[next] = chk[now] + nval;
//
//                indegree[next]--;
//
//                if (!indegree[next])
//                    bq.push(next);
//            }
//        }
//    }
//
//    queue<int> q;
//    q.push(ed), chk2[ed] = 1;
//    // 역방향으로 넣은 re 배열을 통해 다음 노드 값 == 현재 노드 값 - 다음 노드로 가는 가중치
//    // 일 경우엔 가장 오래 걸리는 시간의 길이다.
//    while (!q.empty()) {
//        int now = q.front();
//        q.pop();
//
//        for (int i = 0; i < re[now].size(); i++) {
//            int next = re[now][i].first;
//            int val = re[now][i].second;
//
//            if (chk[now] - val == chk[next]) { // 값이 일치하면 ans++;
//                ans++;
//
//                if (!chk2[next]) // chk를 안하면 오답!
//                    chk2[next] = 1, q.push(next);
//            }
//        }
//    }
//
//    cout << chk[ed] << endl << ans;
//}
////
//// Created by Mac2 on 2021/05/24.
////
//
