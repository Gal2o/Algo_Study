//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int n, d, w, answer;
//
//priority_queue<int> q;
//vector<pair<int, int>> v;
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d %d", &d, &w);
//
//        v.push_back({d, w}); // 남은 기간, 점수
//    }
//
//    // 날짜:오름차 순으로 정리
//    sort(v.begin(), v.end());
//
//    for (pair<int, int> s : v) {
//        // q.size()는 경과한 날짜, s.first는 남은 일수
//
//        if (q.size() < s.first) // 남은 일수 보다 경과한 날짜가 작으면 넣는다.
//            q.push(-s.second);
//
//        // 우선순위 큐는 점수를 오름차 순으로 저장한다.
//        // 이전에 했던 과제 중에 가장 낮은(top()) 점수보다
//        // 현 시점에서의 다른 점수가 크다면 가장 낮은 점수를 갱신한다.
//        else if (-q.top() < s.second)
//            q.pop(), q.push(-s.second);
//    }
//
//    while (!q.empty()) {
//        answer += -q.top();
//        q.pop();
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/04/29.
////
//
