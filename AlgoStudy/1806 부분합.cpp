//#include <bits/stdc++.h>
//
//#define mx 100001
//using namespace std;
//
//int n, s, arr[mx];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> s;
//
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    int st = 0, ed = 0, hap = 0, ans = 1e9;
//
//    // 투 포인터 알고리즘
//    while (ed <= n) {
//        if (hap < s)
//            hap += arr[ed++];
//        else {
//            // ed - st 는 길이
//            if (ans > ed - st)
//                ans = ed - st;
//
//            hap -= arr[st++];
//        }
//    }
//
//    if (ans == 1e9)
//        cout << 0 << endl;
//    else
//        cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/25.
////
//
