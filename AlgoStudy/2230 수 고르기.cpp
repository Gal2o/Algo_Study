//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef long long ll;
//
//
//int n, m, arr[100001];
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    sort(arr, arr + n);
//
//    // 투 포인터
//    int l = 0, r = 1, su = 2e9 + 1;
//
//    // 범위는 n 이전까지
//    while (l < n) {
//        // r - l이 m보다 작으면 r 증가
//        if (arr[r] - arr[l] < m) {
//            r++;
//            continue;
//        }
//
//        // r-l == m 이면, m이상인 가장 작은 값이다.
//        if (arr[r] - arr[l] == m)
//            return cout << m << endl, 0;
//
//        // r - l 이 m보다 크면, 최소값 갱신하고 l++
//        su = min(su, arr[r] - arr[l]);
//        l++;
//    }
//
//    cout << su << endl;
//}
//// Created on 2021/11/16.