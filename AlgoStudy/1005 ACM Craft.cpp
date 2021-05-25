//#include <bits/stdc++.h>
//
//using namespace std;
//int t, n, m, l;
//
//int tm[1001], indegree[1001], ans[1001];
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        vector<int> tp[1001];
//        cin >> n >> m;
//
//        for (int i = 1; i <= n; i++) {
//            cin >> tm[i];
//            indegree[i] = 0;
//        }
//
//        for (int i = 0; i < m; i++) {
//            int a, b;
//            scanf("%d %d", &a, &b);
//
//            tp[a].push_back(b);
//            indegree[b]++;
//        }
//
//        cin >> l;
//
//        queue<int> q;
//        for (int i = 1; i <= n; i++) {
//            ans[i] = tm[i]; // tm -> ans 걸리는 시간 초기화
//
//            if (!indegree[i])
//                q.push(i);
//        }
//
//        for (int i = 1; i <= n; i++) {
//            if (!q.empty()) {
//                int now = q.front();
//                q.pop();
//
//                for (int i = 0; i < tp[now].size(); i++) {
//                    int next = tp[now][i];
//                    indegree[next]--;
//
//                    // 한꺼번에 간선이 지워지는 것 중 최대 값을 더해 나가는 것이 답.
//                    ans[next] = max(ans[next], ans[now] + tm[next]);
//
//                    if (indegree[next] == 0)
//                        q.push(next);
//                }
//            }
//        }
//
//        cout << ans[l] << endl;
//    }
//}
////
//// Created by Mac2 on 2021/05/20.
////
//
