//#include <bits/stdc++.h>
//
//using namespace std;
//typedef tuple<int, int, int> tp;
//int n, c, m, ans;
//
//// 처음부터 끝까지 순서대로 담는 것 보다는
//// n 사이즈의 배열에 트럭용량 c 를 초기화 하고 빼는 식으로 풀어야 훨씬 간단하다.
//// 떠올렸던 예외 : 시작 도시에 거의 끝에 가까운 도시들을 용량만큼 담으면
///              다음 마을에서는 아무것도 담을 수 없다.
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    // 마을 수, 트럭 용량
//    cin >> n >> c;
//    cin >> m;
//
//    priority_queue <tp, vector<tp>, greater<tp>> in;
//    for (int i = 0; i < m; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        // 받는 곳, 보내는 곳, 짐의 양
//        in.push({b, a, c});
//    }
//
//    // 모든 마을에 트럭용량 c를 초기화 시킨다.
//    int remain[n + 1];
//    for (int i = 0; i <= n; i++)
//        remain[i] = c;
//
//    // 도착 도시가 가까운 순서대로, 그 다음은 출발 도시가 작은 순서대로 해야 최적해
//    while (!in.empty()) {
//        int dest = get<0>(in.top()), start = get<1>(in.top());
//        int val = get<2>(in.top());
//        in.pop();
//
//        // 짐의 양의 최대값은 10000, su는 마을 중에서 옮길수 있는 최소 양
//        int limit = 10000, su = 0; // max
//
//        // 보내는마을 ~ 받는 마을 에서 보낼 수 있는 짐의 최대 양을 구한다.
//        // ex     1   2   3   짐의 양 = 20  범위가 1 <= x < 3 이라 하면
//        // 남은 양  10  20  20   보낼 수 있는 짐의 양 최대는 10!
//        for (int i = start; i < dest; i++)
//            limit = min(remain[i], limit);
//
//        // 보낼 수 있는 양 - 입력 받은 보내는 짐의 양이 0 이상이면
//        // 옮길 수 있는 양은 입력 받은 양 val
//        if (limit - val >= 0)
//            su = val;
//        else // 아니면 구해 놓은 limit
//            su = limit;
//
//        // ans 는 한번만 더해주고
//        ans += su;
//
//        // 짐의 양을 각 마을의 남은 양에서 빼준다.
//        for (int i = start; i < dest; i++)
//            remain[i] -= su;
//    }
//
//    cout << ans;
//}
////
//// Created by Mac2 on 2021/05/07.
////
//
