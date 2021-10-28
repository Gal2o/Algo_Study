//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//
//vector<vector<int>> sizes = {{10, 7},
//                             {12, 3},
//                             {8,  15},
//                             {14, 7},
//                             {5,  15}};
//
//int main() {
//    int mxW = 0, mxH;
//
//    vector<int> height;
//
//    // 가로, 세로 중 가장 큰 길이 구하기
//    for (int i = 0; i < sizes.size(); ++i) {
//        mxW = max(mxW, max(sizes[i][0], sizes[i][1]));
//    }
//
//    // 가장 큰 길이와 짝인 길이만 height에 모아주기
//    for (int i = 0; i < sizes.size(); ++i) {
//        if (mxW == sizes[i][0])
//            height.emplace_back(sizes[i][1]);
//
//        if (mxW == sizes[i][1])
//            height.emplace_back(sizes[i][0]);
//    }
//
//    // height에서 가장 큰 값만 가져오기
//    sort(height.begin(), height.end(), greater<>());
//
//    mxH = height[0];
//
//    // 가로 <= mxH <= 세로 Or 세로 <= mxH <= 가로 이면,
//    // 처음 구한 가장 큰 길이가 모든 길이를 커버함
//    for (int i = 0; i < sizes.size(); ++i) {
//        if (mxH >= sizes[i][0] && mxH <= sizes[i][1] ||
//            mxH >= sizes[i][1] && mxH <= sizes[i][0])
//            continue;
//
//        // mxH <= 가로, 세로이면,
//        // 둘 중 작은 값을 mxH에 갱신
//        mxH = max(mxH, min(sizes[i][0], sizes[i][1]));
//    }
//
//    cout << mxW * mxH << endl;
//}
//// Created on 2021/10/28.