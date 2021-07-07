//#include <bits/stdc++.h>
//
//#define mx 1001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, p, k;
//vector<pl> ed[mx];
//
//// 전혀 상상도 못한 문제..
//// 케이블 길이를 이분탐색으로 찾아서
//// mid 보다 간선의 가중치가 클 경우 1을 더해주고
//// 작으면 0을 더해주면서,
//// 만약 쌓아온 DP가 K 이하이면 answer을 갱신하는 방식
//bool search(int mid) {
//    // 큰 가중치 부터 하던, 작은 가중치 부터 하던 상관 없다.
//    // 하지만 큰 것 부터 하면 더 빠르다.
//    priority_queue<pl, vector<pl>, greater<pl>> q;
//    vector<int> chk(mx, 1e9);
//    q.push({0, 1}), chk[1] = 0;
//
//    while (!q.empty()) {
//        int val = q.top().first;
//        int cur = q.top().second;
//        q.pop();
//
//        for (auto p : ed[cur]) {
//            int next = p.second;
//
//            int nval = val;
//            // mid 보다 간선의 가중치가 크다면? 횟수 증가 or 그대로
//            p.first > mid ? nval += 1 : nval;
//
//            if (nval < chk[next]) {
//                chk[next] = nval;
//                q.push({nval, next});
//            }
//        }
//    }
//
//    return chk[n] <= k;
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n >> p >> k;
//
//    for (int i = 0; i < p; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        ed[a].push_back({c, b});
//        ed[b].push_back({c, a});
//    }
//
//    int ans = -1;
//    int st = 0, ed = 1e9; // ed의 최대값은 1000000
//
//    while (st < ed) {
//        int mid = (st + ed) / 2;
//
//        // 만약 이분탐색으로 찾은 케이블의 길이가
//        // 다익스트라를 돌렸을 때, mid 길이보다 큰 갯수가 K개 이하이면 ans 갱신
//        if (search(mid))
//            ans = mid, ed = mid;
//        else
//            st = mid + 1;
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/28.
////
//
