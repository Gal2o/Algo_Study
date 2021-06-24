//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, a;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n;
//
//    priority_queue<int, vector<int>, greater<int>> q;
//
//    for (int i = 0; i < n; i++) {
//        cin >> a;
//        q.push(a);
//    }
//
//    int ans = 0;
//
//    // 우선순위 큐 사이즈가 2 이상이면 (내림차 순)
//    // 두 개를 꺼내서 합치고 다시 큐에 넣어주는 것을 반복한다.
//    while (q.size() > 1) {
//        int t = q.top();
//        q.pop();
//
//        int f = q.top();
//        q.pop();
//
//        ans += t + f;
//        q.push(t + f);
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/21.
////
//
