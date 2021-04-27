//#include <iostream>
//#include <queue>
//
//#define mx 100001
//
//using namespace std;
//int n, k, fin;
//int chk[mx];
//
//vector<int> answer;
//bool flag = false;
//
//void dfs(int n, int cnt) {
//    // 횟수 초과 하거나 끝까지 도착 했으면 더 돌지 않는다.
//    if (cnt > fin || flag)
//        return;
//
//    if (n == k) {
//        flag = true;
//        return;
//    }
//
//    int v;
//
//    // bfs를 돌면서 최단시간에 가면서 체크 해놨던 길을 백트래킹
//    for (int i = 0; i < 3; i++) {
//        if (flag)
//            return;
//
//        i == 0 ? v = n - 1 : i == 1 ? v = n + 1 : v = 2 * n;
//
//        if (v < 0 || v > mx - 1)
//            continue;
//
//        // answer 배열에 들른 지점을 저장하고
//        if (chk[v] == cnt + 1) {
//            answer.push_back(v);
//            dfs(v, cnt + 1);
//
//            // 만약 끝까지 못간다면 pop, 끝까지 갔으면 pop 하지 않는다.
//            if (!flag)
//                answer.pop_back();
//        }
//    };
//}
//
//int main() {
//    cin >> n >> k;
//
//    queue<int> q;
//    q.push(n), chk[n] = 1;
//
//    // 가장 빨리 도착한 시간 fin에 저장하기
//    while (!q.empty()) {
//        int f = q.front();
//        q.pop();
//
//        if (f == k) {
//            fin = chk[f];
//            cout << chk[f] - 1 << endl;
//            break;
//        }
//
//        for (int i = 0; i < 3; i++) {
//            int v;
//            i == 0 ? v = f - 1 : i == 1 ? v = f + 1 : v = f * 2;
//
//            if (v < 0 || v > mx - 1 || chk[v])
//                continue;
//
//            chk[v] = chk[f] + 1, q.push(v);
//        }
//    }
//
//    // bfs 돌면서 이동 횟수 별, 지점을 확인하면서 간결하게 dfs를 돈다.
//    answer.push_back(n);
//    dfs(n, 1);
//
//    for (int i : answer)
//        cout << i << ' ';
//}
////
//// Created by Mac2 on 2021/04/26.
////
//
//
