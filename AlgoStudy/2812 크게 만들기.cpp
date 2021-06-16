//#include <bits/stdc++.h>
//
//#define mx 5000001
//using namespace std;
//typedef unsigned long long ull;
//typedef pair<int, int> pl;
//char a;
//int n, k, cnt;
//
//priority_queue<pl, vector<pl>, greater<pl>> pq;
//priority_queue<pl, vector<pl>, greater<pl>> ans;
//
//int main() {
//    cin >> n >> k;
//
//    for (int i = 0; i < n; i++) {
//        cin >> a;
//        int su = a - '0';
//
//        // n 자리 수의 값을 입력 받을 때,
//        // 지금 입력 받은 값이 이미 입력 받은 값보다 크다면 빼낸다
//        while (1) {
//            // 만약 k가 2, q에 있는 값이 123, 지금 입력 받은 값이 9라고 한다면
//            // cnt 가 k가 될 때까지 우선순위 큐이므로 작은 것들을 2개 빼고 9를 입력 받는다.
//            if (cnt == k || pq.empty())
//                break;
//
//            // 미리 들어와 있는 작은 값들을 빼고 cnt++
//            // cnt == k 가 된다면, 탈출 하고 그대로 작든 크든 뒤에 쌓으면 된다.
//            if (su > pq.top().first) {
//                pq.pop();
//                cnt++;
//            } else
//                break;
//        }
//
//        // 값, 인덱스로 넣어주는 이유는 입력받은 순서는 바꿀 수 없으므로
//        // 답을 출력할 때는 인덱스를 오름차순해서 순서대로 뽑아야 하기 때문.
//        pq.push({su, i});
//    }
//
//    // 앞에서 빼낼거 다 빼내고 or 빼낼게 없어서
//    // k > cnt 일 경우에는 우선순위 큐가 작은 것 부터 top에 있으므로
//    // 작은 값 빼고 cnt++ 해준다. cnt == k 면 탈출
//    while (!pq.empty()) {
//        if (cnt == k)
//            break;
//
//        pq.pop();
//        cnt++;
//    }
//
//    // 답을 뽑기 위해 인덱스순으로 다시 ans에 쌓아준다.
//    while (!pq.empty()) {
//        int v = pq.top().first, idx = pq.top().second;
//        pq.pop();
//
//        ans.push({idx, v});
//    }
//
//    while (!ans.empty())
//        cout << ans.top().second, ans.pop();
//
//}
////
//// Created by Mac2 on 2021/06/15.
////
//
