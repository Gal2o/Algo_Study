//#include <bits/stdc++.h>
//
//#define mx 32001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m;
//int indegree[mx];
//vector<int> ed[mx];
//priority_queue<int, vector<int>, greater<int>> q;
//
//// 우선 순위 큐 사용해서 indegree == 0 인거 작은거 부터 꺼내서 위상정렬하기
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        ed[a].push_back(b);
//
//        indegree[b]++;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (!indegree[i])
//            q.push(i);
//    }
//
//    while (!q.empty()) {
//        int f = q.top();
//        q.pop();
//
//        cout << f << ' ';
//        for (auto p : ed[f]) {
//            int next = p;
//            indegree[next]--;
//
//            if (!indegree[next]) {
//                q.push(next);
//            }
//        }
//    }
//}
////
//// Created by Mac2 on 2021/07/09.
////
//
