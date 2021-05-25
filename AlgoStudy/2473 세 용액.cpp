//#include <bits/stdc++.h>
//
//typedef long long ll;
//using namespace std;
//
//int n;
//vector<ll> ac;
//vector<int> ans;
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        int a;
//        cin >> a;
//        ac.push_back(a);
//    }
//
//    sort(ac.begin(), ac.end());
//
//    ll mn = 0, md = 0, mx = 0;
//    ll res = 9876543210;
//
//    /* 처음에는 st, ed를 이분탐색 하면서 이 중간에서 가운데 값을 잡았는데,
//     * 그럴 경우, 오답이 나옴.
//     * st를 for문으로 다 돌면서 mid, ed를 이분탐색으로 돌려야 맞는다.
//     * 3-SUM 이라는 알고리즘
//     */
//    for (int st = 0; st < n; st++) {
//
//        int mid = st + 1, ed = n - 1;
//
//        while (mid < ed) {
//            ll tmp = ac[st] + ac[mid] + ac[ed];
//
//            // abs도 ll형으로 해줘야 오버플로우가 안생긴다.
//            if (llabs(tmp) < res)
//                mn = ac[st], md = ac[mid], mx = ac[ed], res = llabs(tmp);
//
//            if (tmp < 0)
//                mid++;
//            else
//                ed--;
//        }
//    }
//
//    cout << mn << ' ' << md << ' ' << mx << endl;
//}
////
//// Created by Mac2 on 2021/05/23.
////
//
//
