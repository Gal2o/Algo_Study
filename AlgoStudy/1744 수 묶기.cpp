//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int n, ans;
//priority_queue<int> pq, dq;
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//        // 양수는 양수끼리
//        if (a > 0)
//            pq.push(a);
//        // 음수, 0 은 같이 모아준다.
//        else
//            dq.push(-a);
//    }
//
//    /*
//     * pq의 사이즈가 2 이상이면
//     * a + b > a * b 이면
//     * a만 더해주고 b는 다시 pq에 넣어줘서 다음 값이랑 묶게
//     * a * b 가 더 크면 a,b 둘다 빼고 다음으로
//     *
//     * 사이즈 2 미만이면 그냥 더하기
//     *
//     * 양수 끼리는 더하기나 곱하기나 가장 큰 것을 골라주면 되므로 0이 필요가 없지만,
//     * 음수 끼리는 만약 음수가 홀수 개라면 0을 곱해주는 것이 가장 크므로
//     * 0은 음수 pq에 넣어준다.
//     * ex.
//     * -8 -7 -1 => 56 + -1
//     * -80 -10 0 2 5 6 => 800 + 30 + 2 + 0
//     * -80 0 2 5 6 => -80 * 0 + 30 + 2
//     * -80 -10 0 2 5 => 800 + 10 + 0
//     * -5 -4 -3 0 0 => 20 + 0 + 0
//     * -5 -4 -3 => 20 + -3
//     */
//    while (!pq.empty()) {
//        // 사이즈가 2 이상이면 곱할지 더할지 정해준다.
//        if (pq.size() >= 2) {
//            int f = pq.top();
//            pq.pop();
//
//            int l = pq.top();
//            pq.pop();
//
//            if (f + l > f * l) {
//                ans += f;
//                pq.push(l);
//            } else
//                ans += (f * l);
//        } else
//            ans += pq.top(), pq.pop();
//    }
//
//    while(!dq.empty()) { // 들어온 값들은 -를 붙혀줘서 +로 큰수 부터 정렬
//        if (dq.size() >= 2) {
//            // 다시 -를 붙혀줘서 원래대로
//            int f = -dq.top();
//            dq.pop();
//
//            int l = -dq.top();
//            dq.pop();
//
//            if (f + l > f * l) {
//                ans += f;
//                pq.push(-l); // 다시 큰 수 부터 정렬하도록 양수로 바꿔서 넣어준다.
//            } else
//                ans += (f * l);
//        } else
//            ans += -dq.top(), dq.pop();
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/05/14.
////
//
