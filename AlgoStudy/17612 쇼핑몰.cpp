//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//typedef long long ll;
//
//int n, k;
//ll answer;
//
//struct comp {
//    bool operator()(const tp &p1, const tp &p2) {
//        // 시간, 계산대 번호, id
//        // 걸리는 시간이 같다면?
//        if (get<0>(p1) == get<0>(p2)) {
//            // 계산대가 높은 것이 우선
//            return get<1>(p1) < get<1>(p2);
//        }
//
//        // 아니면 시간이 작은 것이 우선
//        return get<0>(p1) > get<0>(p2);
//    }
//};
//
//priority_queue<tp, vector<tp>, greater<>> q;
//priority_queue<tp, vector<tp>, comp> c;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> k;
//
//    for (int i = 1; i <= n; ++i) {
//        int id, w;
//        cin >> id >> w;
//
//        // 안내원들은 가장 빨리 계산을 마칠 수 있는 계산대로 안내를 한다
//        // 기다릴 시간이 같다면, 번호가 작은 계산대로 보낸 값
//        // 작업 시간, 계산대 번호, id
//        // i가 k보다 작을 때 => 계산대가 비워져 있는 곳이 있으므로
//        // 순서대로 넣으면 된다
//        if (i <= k)
//            q.push({w, i, id});
//        else {
//            // w가 작은 순, id가 작은 순으로 정렬되어 있으므로
//            // 가장 위에 것을 뽑아서 c에 넣고
//            c.push(q.top());
//
//            // q.top()의 w를 입력받은 w에 더해서 c에 넣는다
//            // => 같은 계산대에서 대기 + 계산하는 시간
//            // 계산대 번호는 q.top() 계산대 번호를 그대로 사용
//            // id는 입력받은 id 값
//            q.push({w + get<0>(q.top()), get<1>(q.top()), id});
//            q.pop();
//        }
//    }
//
//    // for문 끝나고 나머지 q에 남아있는 것들 c에 넣어주기
//    while (!q.empty()) {
//        c.push(q.top());
//        q.pop();
//    }
//
//    // 쇼핑몰을 나갈 때는 id가 높은 순으로 나감
//    // 만들어둔 comp로 정렬하면
//    // 계산하는 시간 w이 작은순 -> 계산대의 번호가 큰 순서대로 정렬
//    int cnt = 1;
//    while (!c.empty()) {
//        // 순서대로 id값을 곱해서 answer에 더해주기
//        auto[w, i, id] = c.top();
//        c.pop();
//
//        answer += (ll) id * cnt++;
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/27.
////
//
