//#include <bits/stdc++.h>
//
//#define mx 100005
//using namespace std;
//typedef long long ll;
//
//int n;
//ll h[mx];
//
//ll ht(int s, int e) {
//    if (s == e)
//        return h[s];
//
//    int mid = (s + e) / 2;
//    ll ret = max(ht(s, mid), ht(mid + 1, e));
//
//    int lo = mid, hi = mid + 1;
//    ll height = min(h[lo], h[hi]);
//
//    ret = max(ret, (ll) height * (hi - lo + 1));
//
//    while (lo > s || hi < e) {
//        if (hi < e && (lo == s || h[lo - 1] < h[hi + 1]))
//            hi++, height = min(height, h[hi]);
//        else
//            lo--, height = min(height, h[lo]);
//
//        ret = max(ret, (ll) height * (hi - lo + 1));
//    }
//
//    return ret;
//}
//
//int main() {
//    while (1) {
//        cin >> n;
//
//        if (n == 0)
//            break;
//
//        for (int i = 1; i <= n; i++)
//            cin >> h[i];
//
//        // h 배열의 index
//        cout << ht(1, n) << endl;
//    }
//}
////
//// Created by Mac2 on 2021/05/26.
////
//
