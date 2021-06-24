//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, k, ans;
//vector<int> sensor;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> k;
//
//    for (int i = 1; i <= n; i++) {
//        int a;
//        cin >> a;
//
//        sensor.push_back(a);
//    }
//
//    // 센서의 인덱스 순으로 정렬을 하고
//    sort(sensor.begin(), sensor.end());
//
//    priority_queue<int> q;
//
//    // 각각 바로 앞의 센서와의 거리를 구해서 우선순위 큐에 넣는다.
//    for (int i = 0; i < sensor.size() - 1; i++) {
//        q.push(sensor[i + 1] - sensor[i]);
//    }
//
//    // k - 1 만큼 가장 긴 거리를 빼주고
//    for (int i = 0; i < k - 1; i++) {
//        if (!q.empty())
//            q.pop();
//    }
//
//    // 나머지의 합이 최소의 거리이다.
//    while (!q.empty())
//        ans += q.top(), q.pop();
//
//    cout << ans << endl;
//}
//
////
//// Created by Mac2 on 2021/06/18.
////
//
