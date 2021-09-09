//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define mx 100001
//using namespace std;
//
//int n, x, arr[mx];
//
//bool avail(int k) {
//    priority_queue<int, vector<int>, greater<>> pq;
//
//    for (int i = 0; i < k; i++)
//        pq.push(0);
//
//    for (int i = 0; i < n; i++) {
//        int a = pq.top();
//        pq.pop();
//
//        // 하나라도 x를 초과하면 false
//        if (a + arr[i] > x)
//            return false;
//
//        pq.push(a + arr[i]);
//    }
//
//    return true;
//}
//
//int main() {
//    fastio
//    cin >> n >> x;
//
//    // n 100000, x 1000000000
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    int left = 1, right = 100000;
//
//    // 공정 갯수 k로 파라메트릭 서치
//    while (left < right) {
//        int mid = (left + right) / 2;
//
//        if (avail(mid)) {
//            right = mid;
//        } else
//            left = mid + 1;
//    }
//
//    // +1 해주는 쪽이 정답
//    cout << left << endl;
//}
////
//// Created by Mac2 on 2021/09/06.
////
//
