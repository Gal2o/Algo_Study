//#include <bits/stdc++.h>
//
//#define mx 601
//using namespace std;
//int n;
//vector<int> snow;
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//        snow.push_back(a);
//    }
//
//    sort(snow.begin(), snow.end());
//
//    int ans = 1e9;
//
//    // 사분탐색..?
//    // 네 개의 값을 찾아야 하기 때문에
//    // 최소 2이상 거리를 두고 점 두개를 for문으로 돌린 후에,
//    // 고정된 포인터 사이에 투포인터 새로 설정해서
//    // 고정한 포인터의 합보다 작으면 st++ , 크면 ed-- 하면 된다.
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 3; j < n; j++) {
//            int hapF = snow[i] + snow[j];
//            int st = i + 1, ed = j - 1;
//
//            while (st < ed) {
//                int hap = snow[st] + snow[ed];
//
//                if (abs(hap - hapF) < ans)
//                    ans = abs(hap - hapF);
//
//                if (hap < hapF)
//                    st++;
//                else
//                    ed--;
//            }
//        }
//    }
//
//    cout << ans << endl;
//}
//
////
//// Created by Mac2 on 2021/06/25.
////
//
