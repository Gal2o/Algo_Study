//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, k;
//int dp[12];
//vector<string> v;
//
//void DFS(int hap, string s) {
//    if (hap == n) {
//        v.push_back(s);
//        return;
//    }
//
//    for (int i = 1; i <= 3; i++) {
//        if (i + hap <= n) {
//            s += i + '0';
//            DFS(hap + i, s);
//            s.pop_back();
//        }
//    }
//}
//
//int main() {
//    cin >> n >> k;
//
//    dp[1] = 1;
//    // dp[2] = 1 + 1, 2
//    dp[2] = 2;
//    // dp[3] = 1 + 1 + 1, 1 + 2, 2 + 1, 3
//    dp[3] = 4;
//
//    for (int i = 4; i <= n; i++)
//        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//
//    if (dp[n] < k)
//        cout << -1 << endl;
//    else {
//        // dp[4] = 7
//        DFS(0, "");
//
//        sort(v.begin(), v.end());
//
//        for (int i = 0; i < v[k - 1].size(); i++) {
//            if (i == v[k - 1].size() - 1)
//                cout << v[k - 1][i] << endl;
//            else
//                cout << v[k - 1][i] << '+';
//        }
//    }
//
//}
////
//// Created by Mac2 on 2021/08/17.
////
//
