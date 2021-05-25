//#include <bits/stdc++.h>
//
//using namespace std;
//int n;
//
//vector<int> acid;
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//        acid.push_back(a);
//    }
//
//    int st = 0, ed = n - 1;
//    int mn = 0, mx = 0;
//    long long ans = 9876543210; // 최대 값 때문에 틀림
//
//    // 이분탐색으로 찾는다.
//    // mid를 사용해서 하려면 acid[st] + acid[mid]로 해야한다.
//    // mid 갱신도 tmp > 0 이면 mid--, else mid ++
//    while (st < ed) {
//        long long tmp = acid[st] + acid[ed];
//
//        if (abs(tmp) < ans)
//            mn = acid[st], mx = acid[ed], ans = abs(tmp);
//
//        if (tmp > 0)
//            ed--;
//        else
//            st++;
//    }
//
//    cout << mn << ' ' << mx << endl;
//}
////
//// Created by Mac2 on 2021/05/23.
////
//
