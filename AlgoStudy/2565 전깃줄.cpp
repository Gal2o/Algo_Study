//#include <bits/stdc++.h>
//
//#define mx 505
//using namespace std;
//
//int n, su[mx], dp[mx], fin;
//int line;
//
//// 이상한 거에서 자꾸 빼서 오답..
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        su[a] = b;
//
//        fin = max(fin, max(a, b));
//    }
//
//    for (int i = 1; i <= fin; i++) {
//        if (!su[i])
//            continue;
//
//        dp[i] = 1;
//
//        for (int j = 0; j < i; j++) {
//            if (!su[j])
//                continue;
//
//            if (su[j] < su[i])
//                dp[i] = max(dp[i], dp[j] + 1);
//
//            line = max(line, dp[i]);
//        }
//    }
//
//    // 전깃줄의 번호가 아닌 전깃줄의 갯수 - 안겹치고 이을 수 있는 전깃줄
//    cout << n - line << endl;
//}
////
//// Created by Mac2 on 2021/07/26.
////
//
