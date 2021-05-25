//#include <bits/stdc++.h>
//
//using namespace std;
//int n, m, indegree[1001];
//vector<int> tp[1001];
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a;
//        cin >> a;
//
//        vector<int> tmp;
//        for (int i = 0; i < a; i++) {
//            int s;
//            cin >> s;
//            tmp.push_back(s);
//        }
//
//        for (int i = 0; i < tmp.size() - 1; i++)
//            tp[tmp[i]].push_back(tmp[i + 1]), indegree[tmp[i + 1]]++;
//    }
//
//    queue<int> q;
//
//    for (int i = 1; i <= n; i++)
//        if (!indegree[i])
//            q.push(i);
//
//    // 틀린 부분! - 큐가 비어있으면 0을 출력하고 끝내려고 했는데,
//    // 만약 사이클이 있거나 하는, 위상정렬이 만족하지 않을 경우에는 오답!
//    // 사이즈가 n이 아니면 올바른 위상정렬이 아니다!
//    vector<int> ans;
//    for (int i = 1; i <= n; i++) {
//        if (!q.empty()) {
//            int now = q.front();
//            q.pop();
//            ans.push_back(now);
//
//            for (int i = 0; i < tp[now].size(); i++) {
//                int next = tp[now][i];
//                indegree[next]--;
//
//                if (!indegree[next])
//                    q.push(next);
//            }
//        }
//    }
//
//    if (ans.size() != n) {
//        cout << 0 << endl;
//        return 0;
//    }
//
//    for (int i : ans)
//        cout << i << endl;
//}
////
//// Created by Mac2 on 2021/05/20.
////
//
