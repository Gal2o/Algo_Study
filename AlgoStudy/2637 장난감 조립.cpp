//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//int n, m;
//int indegree[101], parts[101][101];
//vector<pl> ed[101];
//
//// 2차원 배열 생각을 못했다.
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n;
//    cin >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        ed[b].push_back({a, c});
//        indegree[a]++;
//    }
//
//    queue<int> q;
//
//    // 기본 부품만 1로 초기화 해주기 (indegree 가 0 이다)
//    for (int i = 1; i <= n; i++) {
//        if (!indegree[i])
//            q.push(i), parts[i][i] = 1;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (q.empty())
//            break;
//
//        int f = q.front();
//        q.pop();
//
//        for (int i = 0; i < ed[f].size(); i++) {
//            int next = ed[f][i].first;
//            int val = ed[f][i].second;
//            indegree[next]--;
//
//            // 차곡차곡 쌓으면 된다. (i는 부품)
//            // ex 1 5 2
//            //    2 5 2
//            for (int i = 1; i <= n; i++)
//                parts[next][i] += parts[f][i] * val;
//
//            if (!indegree[next]) {
//                q.push(next);
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++)
//        if (parts[n][i])
//            cout << i << ' ' << parts[n][i] << endl;
//}
////
//// Created by Mac2 on 2021/06/17.
////
//
