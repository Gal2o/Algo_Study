//#include <bits/stdc++.h>
//
//#define mx 200000
//using namespace std;
//
//int n, h;
//vector<int> A, B; // 짝수 = 아래에서 자람, 홀수 위에서 자람
//
//int answer = 1e9, cnt;
//
//int main() {
//    cin >> n >> h;
//
//    for (int i = 0; i < n / 2; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        A.push_back(a);
//        B.push_back(b);
//    }
//
//    // 이분탐색을 하기 위해서는 정렬 필수
//    sort(A.begin(), A.end());
//    sort(B.begin(), B.end());
//
//    int result;
//    for (int i = 1; i <= h; i++) {
//
//        // 높이 i에 맞는 최소 위치 찾기
//        result = n / 2 - (lower_bound(A.begin(), A.end(), i) - A.begin());
//        result += n / 2 - (upper_bound(B.begin(), B.end(), h - i) - B.begin());
//
//        if (answer > result)
//            answer = result, cnt = 1;
//        else if (answer == result)
//            cnt++;
//    }
//
//    cout << answer << ' ' << cnt << endl;
//}
////
//// Created by Mac2 on 2021/06/30.
////
//
