//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//
//int t, n, m;
//int answer, sum;
//int arr[1000], brr[1000];
//vector<int> dpA, dpB;
//
//int main() {
//    cin >> t >> n >> m;
//
//    // A, B 피자 입력 받기
//    for (int i = 0; i < n; ++i)
//        cin >> arr[i];
//
//    for (int i = 0; i < m; ++i)
//        cin >> brr[i];
//
//    // 원형이므로, 시작 ~ 시작 + (n - 2)까지 누적합을 쌓는다.
//    // ex i=0, n=5 => 0, 1, 2, 3 까지 == 자기 위치 + 3개까지
//    for (int i = 0; i < n; ++i) {
//        sum = arr[i];
//        dpA.push_back(sum);
//
//        int next = i;
//        for (int j = 0; j < n - 2; ++j) {
//            next++;
//
//            sum += arr[next % n];
//            dpA.push_back(sum);
//        }
//    }
//
//    // 그리고 전체 합 넣어주기
//    sum = 0;
//    for (auto i : arr)
//        sum += i;
//
//    dpA.push_back(sum);
//
//    // 동일하게 B도 누적합 쌓기
//    for (int i = 0; i < m; ++i) {
//        sum = brr[i];
//        dpB.push_back(sum);
//
//        int next = i;
//        for (int j = 0; j < m - 2; ++j) {
//            next++;
//
//            sum += brr[next % m];
//            dpB.push_back(sum);
//        }
//    }
//
//    sum = 0;
//    for (auto i : brr)
//        sum += i;
//
//    dpB.push_back(sum);
//
//    sort(dpA.begin(), dpA.end());
//    sort(dpB.begin(), dpB.end());
//
//    // 2143 문제 처럼, 위치의 차이를 갯수에 더해주고,
//    for (auto i : dpA) {
//        ll val = t - i;
//
//        if (val < 0)
//            continue;
//
//        if (val == 0) {
//            answer++;
//            continue;
//        }
//
//        auto s = lower_bound(dpB.begin(), dpB.end(), val);
//        auto e = upper_bound(dpB.begin(), dpB.end(), val);
//
//        answer += (e - s);
//    }
//
//    // B만 전체인 경우를 더해주면,
//    for (auto i : dpB) {
//        if (i == t)
//            answer++;
//    }
//
//    // 끝
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/18.
////
//
