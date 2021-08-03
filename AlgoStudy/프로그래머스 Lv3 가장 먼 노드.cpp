//#include <bits/stdc++.h>
//
//#define mx 20001
//using namespace std;
//typedef pair<int, int> pl;
//int n = 6;
//int mxV, answer;
//vector<vector<int>> edge = {{3, 6},
//                            {4, 3},
//                            {3, 2},
//                            {1, 3},
//                            {1, 2},
//                            {2, 4},
//                            {5, 2}};
//vector<int> ed[mx];
//vector<int> chk(mx, 1e9);
//
//int main() {
//
//    for (int i = 0; i < edge.size(); i++) {
//        ed[edge[i][0]].push_back(edge[i][1]);
//        ed[edge[i][1]].push_back(edge[i][0]);
//    }
//
//    priority_queue<pl, vector<pl>, greater<pl>> pq;
//    pq.push({0, 1}), chk[1] = 0;
//
//    while (!pq.empty()) {
//        int f = pq.top().second;
//        int val = pq.top().first;
//        pq.pop();
//
//        if (val > chk[f])
//            continue;
//
//        for (auto i : ed[f]) {
//            int next = i;
//            int nval = val + 1;
//
//            if (nval < chk[next]) {
//                mxV = max(nval, mxV);
//                chk[next] = nval;
//                pq.push({nval, next});
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (chk[i] == mxV)
//            answer++;
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/28.
////
//
