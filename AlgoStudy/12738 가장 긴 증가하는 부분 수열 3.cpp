//#include <iostream>
//
//using namespace std;
//#define mx 1000001
//int n;
//int su[mx], dp[mx];
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> su[i];
//
//    dp[1] = su[1];
//    int idx = 1;
//
//    for (int i = 1; i <= n; i++) {
//        if (dp[idx] < su[i]) {
//            dp[idx + 1] = su[i];
//            idx++;
//        } else {
//            int start = 1, end = idx;
//
//            while (start < end) {
//                int mid = (start + end) / 2;
//
//                if (dp[mid] < su[i])
//                    start = mid + 1;
//                else
//                    end = mid;
//            }
//            dp[end] = su[i];
//        }
//    }
//
//    cout << idx << endl;
//}
////
//// Created by Mac2 on 2021/04/22.
////
//
