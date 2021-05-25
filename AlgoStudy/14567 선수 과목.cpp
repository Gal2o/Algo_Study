//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n, m, indegree[1001], ans[1001];
//vector<int> tp[1001];
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//
//        tp[a].push_back(b);
//        indegree[b]++;
//    }
//
//    // 위상 정렬
//    queue<int> q;
//
//    for (int i = 1; i <= n; i++) {
//        ans[i] = 1; // 답 1로 모두 초기화
//        if (!indegree[i])
//            q.push(i);
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (q.empty())
//            break;
//
//        int now = q.front();
//        q.pop();
//
//
//        for (int i = 0; i < tp[now].size(); i++) {
//            int next = tp[now][i];
//            indegree[next]--;
//
//            if (indegree[next] == 0) // 자식들의 값을 자신에게 더해주기
//                ans[next] += ans[now], q.push(next);
//        }
//    }
//
//    for (int i = 1; i <= n; i++)
//        cout << ans[i] << ' ';
//}
//
////
//// Created by Mac2 on 2021/05/20.
////
//
