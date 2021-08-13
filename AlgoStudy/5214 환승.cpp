//#include <bits/stdc++.h>
//
//#define MAX 100001
//using namespace std;
//
//int N, K, M, chk[MAX];
//vector<int> tube[MAX];
//vector<int> hub[MAX];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> N >> K >> M;
//
//    // 2021번과 동일하게 hub, tube 세팅 후,
//    for (int i = 1; i <= M; ++i) {
//        for (int j = 0; j < K; ++j) {
//            int a;
//            cin >> a;
//
//            tube[i].push_back(a);
//            hub[a].push_back(i);
//        }
//    }
//
//    // 노선이 아닌 역을 시작으로 push, chk
//    queue<int> q;
//    q.push(1), chk[1] = 1;
//
//    while (!q.empty()) {
//        int station = q.front();
//        q.pop();
//
//        if (station == N)
//            break;
//
//        // 해당 역에서 튜브를 통해 갈 수 있는 역들은
//        // 기존 chk + 1 값이다
//        for (auto h : hub[station]) {
//            for (auto t : tube[h]) {
//                if (!chk[t])
//                    chk[t] = chk[station] + 1, q.push(t);
//            }
//        }
//    }
//
//    // 마지막에 도달할 수 없으면 -1
//    if (!chk[N])
//        cout << -1 << endl;
//    else
//        cout << chk[N] << endl;
//}
////
//// Created by Mac2 on 2021/08/12.
////
//
