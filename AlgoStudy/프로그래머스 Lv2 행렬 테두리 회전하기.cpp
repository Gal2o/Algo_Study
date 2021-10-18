//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int rows = 6, columns = 6;
//vector<vector<int>> queries = {{2, 2, 5, 4},
//                               {3, 3, 6, 6},
//                               {5, 1, 6, 3}};
//
//int arr[101][101];
//
//int main() {
//    int cnt = 1;
//    vector<int> answer;
//
//    for (int i = 0; i < rows; ++i)
//        for (int j = 0; j < columns; ++j)
//            arr[i][j] = cnt++;
//
//
//    for (auto i: queries) {
//        int sy = i[0], sx = i[1], ey = i[2], ex = i[3];
//
//        sy--, sx--, ey--, ex--;
//        deque<int> q;
//
//        int minV = 1e9;
//
//        for (int j = sx; j < ex; ++j)
//            minV = min(minV, arr[sy][j]), q.push_back(arr[sy][j]);
//
//        for (int j = sy; j < ey; ++j)
//            minV = min(minV, arr[j][ex]), q.push_back(arr[j][ex]);
//
//        for (int j = ex; j > sx; --j)
//            minV = min(minV, arr[ey][j]), q.push_back(arr[ey][j]);
//
//        for (int j = ey; j > sy; --j)
//            minV = min(minV, arr[j][sx]), q.push_back(arr[j][sx]);
//
//        q.push_front(q.back());
//        q.pop_back();
//
//        for (int j = sx; j < ex; ++j)
//            arr[sy][j] = q.front(), q.pop_front();
//
//        for (int j = sy; j < ey; ++j)
//            arr[j][ex] = q.front(), q.pop_front();
//
//        for (int j = ex; j > sx; --j)
//            arr[ey][j] = q.front(), q.pop_front();
//
//        for (int j = ey; j > sy; --j)
//            arr[j][sx] = q.front(), q.pop_front();
//
//        answer.push_back(minV);
//    }
//
//    for (auto i: answer)
//        cout << i << ' ';
//}
//// Created on 2021/10/15.