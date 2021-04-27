//#include <iostream>
//#include <queue>
//
//#define mx 100001
//
//using namespace std;
//int n, k, fin, answer;
//int chk[mx];
//
//int main() {
//    cin >> n >> k;
//
//    queue<pair<int, int>> q;
//    q.push({n, 0}), chk[n] = 1;
//    bool flag = false; // 최단 거리를 만났다는 flag
//
//    while (!q.empty()) {
//        int fvalue = q.front().first; // 현재 위치
//        int ftm = q.front().second;   // 시도 횟수
//
//        // ** 캐치 못한 부분
//        // 숨바꼭질 4와 동일하게 bfs + dfs 를 하려고 했지만, 최악의 경우 dfs 에서 터진다.
//        // 최단거리 방법들이 모두 큐에 들어올 수 있게 push 후, pop 이후에 체크를 해주면,
//        // 방법들의 개수를 셀 수 있다.
//        q.pop();
//        chk[fvalue] = 1;
//
//        if (fvalue == k && !flag) { // 첫 최단 거리 만났을 때,
//            fin = ftm;
//            flag = true;
//            answer++;
//            continue;
//        }
//
//        if (fvalue == k && flag && ftm == fin) { // 그 다음 방법들이 들어오면 방법 수만 증가 시켜주면 된다.
//            answer++;
//            continue;
//        }
//
//        for (int i = 0; i < 3; i++) {
//            int v;
//
//            i == 0 ? v = fvalue - 1 : i == 1 ? v = fvalue + 1 : v = fvalue * 2;
//
//            if (v < 0 || v > mx - 1 || chk[v])
//                continue;
//
//            // 이 곳에서 가장 가까운 부분을 체크 해버리면, 큐에 쌓여 있었던 다른 방법들이
//            // 바로 위에 있는 if 문에 걸려서 push가 안된다. 그러므로 q.pop() 할 때, 체크를 헤줘야 한다.
//            q.push({v, ftm + 1});
//        }
//    }
//
//    cout << fin << endl;
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/04/26.
////
//
//
//
