//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//
//int n;
//ll sum, mx;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        ll a;
//        cin >> a;
//
//        sum += a;
//        mx = max(mx, a);
//    }
//
//    sum -= mx;
//
//    // 제일 큰 구슬 > 나머지 구슬의 합이면,
//    // 그냥 다 빼버리면 된다
//    if (mx > sum) {
//        cout << mx - sum << endl;
//    } else {
//        // 제일 큰 구슬 <= 나머지 구슬의 합이면,
//        // 모든 구슬의 % 2
//        cout << (mx + sum) % 2 << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/04.
////
//
