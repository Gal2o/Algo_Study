//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//int n;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n;
//
//    priority_queue<int, vector<int>, greater<int>> q;
//    vector<pl> v;
//
//    for (int i = 0; i < n; i++) {
//        int a, b, c;
//        cin >> a >> b >> c; // 강의 번호, 시작시간, 종료시간
//
//        v.push_back({b, c}); // 시작, 종료
//    }
//
//    // 일단 시작 시간 순으로 정렬을 한다.
//    sort(v.begin(), v.end());
//
//    // v만큼 for문을 도는데
//    for (int i = 0; i < v.size(); i++) {
//        // 우선순위 큐가 비어 있다면 그냥 도착시간을 넣어주고,
//        if (q.empty())
//            q.push(v[i].second);
//        else {
//            // 큐가 차있다면, 큐의 top은 가장 작은 도착 시간 일테니,
//            // 만약 다음 시작 시간이 도착시간보다 크다면,
//            // 해당 큐의 값은 빼내고, 다음 시작 시간의 도착 시간을 넣어주면 된다.
//            if (v[i].first >= q.top()) {
//                q.pop();
//                q.push(v[i].second);
//            } else
//                q.push(v[i].second);
//        }
//    }
//
//    // 그래서 큐에 남아있는 크기가 최소 강의실의 갯수다
//    cout << q.size() << endl;
//}
////
//// Created by Mac2 on 2021/06/21.
////
//
