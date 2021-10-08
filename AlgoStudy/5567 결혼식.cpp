//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, answer;
//vector<int> ed[501];
//int arr[501][501], chk[501];
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        ed[a].push_back(b);
//        ed[b].push_back(a);
//        arr[a][b] = arr[b][a] = 1;
//    }
//
//    queue<int> q;
//    chk[1] = 1;
//
//    // 직속 친구들 미리 넣기
//    for (auto i: ed[1])
//        q.push(i), chk[i] = 1, answer++;
//
//    while (!q.empty()) {
//        int f = q.front();
//        q.pop();
//
//        for (auto i: ed[f]) {
//            // 체크 안된 친구(f)의 친구들 중에서 친구 f가 1이랑 친구면 넣기
//            if (!chk[i]) {
//                if (arr[f][1] || arr[1][f])
//                    chk[i] = 1, q.push(i), answer++;
//            }
//        }
//    }
//
//    cout << answer << endl;
//}
//// Created on 2021/10/08.