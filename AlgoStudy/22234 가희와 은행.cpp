//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//int N, T, W, M;
//
//queue<pl> readyQ;
//priority_queue<tp, vector<tp>, greater<>> pq;
//
//// Round-Robin 구현 문제
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> N >> T >> W;
//
//    for (int i = 0; i < N; i++) {
//        int p, t;
//        cin >> p >> t;
//
//        readyQ.push({p, t});
//    }
//
//    cin >> M;
//
//    for (int i = 0; i < M; i++) {
//        int p, t, c;
//        cin >> p >> t >> c;
//
//        pq.push({c, p, t});
//    }
//
//    int TM = 0, useT;
//
//    while (TM < W) {
//        auto[p, t] = readyQ.front();
//        readyQ.pop();
//
//        // 잔여시간 - T가 0보다 크면 useT = T
//        // 잔여시간이 T보다 작으면 useT = t
//        if (t - T > 0) useT = T;
//        else useT = t;
//
//        // W를 넘어가기 전까지만 출력 (한꺼번에 useT를 더해주기 때문에)
//        for (int i = 0; i < useT; i++) {
//            if (TM + i >= W)
//                break;
//
//            cout << p << '\n';
//        }
//
//        // 출력 끝났으면, TM 갱신
//        TM += useT;
//
//        while (!pq.empty()) {
//            // 우선순위큐 제일 작은 것들이 TM 이하이면 다 readyQ 에 넣어주기
//            if (TM >= get<0>(pq.top())) {
//                auto[c, p, t] = pq.top();
//                pq.pop();
//
//                readyQ.push({p, t});
//            } else
//                break;
//        }
//
//        // 잔여시간만큼 빼서 0보다 큰 것만 다시 readyQ에 넣어서 작업
//        if (t - useT > 0)
//            readyQ.push({p, t - useT});
//    }
//}
////
//// Created by Mac2 on 2021/08/13.
////
//
