//#include <bits/stdc++.h>
//
//#define mx 501
//using namespace std;
//
//int n, a, indegree[mx], val[mx], answer[mx];
//vector<int> ed[mx];
//queue<int> q;
//
//// 여러개의 건물을 동시에..
//// 간선이 많은 노드에서 길이가 긴걸 고르면 짧은건 알아서 끝난다는 의미.. 까먹었다
//int main() {
//    ios::sync_with_stdio(0), cout.tie(0);
//
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> a;
//
//        val[i] = a;
//
//        while (1) {
//            cin >> a;
//
//            if (a == -1)
//                break;
//
//            indegree[i]++;
//            ed[a].push_back(i);
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (!indegree[i])
//            q.push(i);
//    }
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        for (auto next : ed[cur]) {
//            answer[next] = max(answer[next], answer[cur] + val[cur]);
//
//            if (--indegree[next] == 0) {
//                q.push(next);
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++)
//        cout << answer[i] + val[i] << endl;
//}
////
//// Created by Mac2 on 2021/07/09.
////
//
//
