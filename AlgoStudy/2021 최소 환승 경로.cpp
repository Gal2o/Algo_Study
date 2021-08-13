//#include <bits/stdc++.h>
//
//#define MAX 100001
//using namespace std;
//int N, L, st, fin, chk[MAX];
//vector<int> hub[MAX]; // 해당 역을 지나는 노선들을 저장한다
//vector<int> line[MAX]; // 해당 노선에 있는 역(hub)들을 저장한다
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(NULL);
//
//    cin >> N >> L;
//
//    // 각 노선이 지나는 역들
//    for (int i = 1; i <= L; ++i) {
//        int a;
//
//        while (1) {
//            cin >> a; // 역 번호 입력
//
//            if (a == -1)
//                break;
//
//            hub[a].push_back(i); // 해당 역은 i 노선이 지나간다
//            line[i].push_back(a); // i번째 노선은 해당 역들이 있다.
//        }
//    }
//
//    cin >> st >> fin;
//
//    memset(chk, -1, sizeof(chk));
//    queue<int> q;
//
//    // st를 가지고 있는 노선이 있다면, 노선번호를 push, 체크
//    for (int i = 1; i <= L; i++) {
//        auto it = find(line[i].begin(), line[i].end(), st);
//        if (it != line[i].end())
//            q.push(i), chk[i] = 0;
//    }
//
//    while (!q.empty()) {
//        // 노선 번호
//        int lineNum = q.front();
//        q.pop();
//
//        // 만약 이 노선에 fin 역이 있다면 break
//        auto it = find(line[lineNum].begin(), line[lineNum].end(), fin);
//        if (it != line[lineNum].end())
//            break;
//
//        // 해당 노선에 있는 역(hub)들 중에서
//        for (auto station : line[lineNum]) {
//            // 그 역을 지나는 노선들 중에 체크가 안되어 있는 노선이 있다면
//            // 이전 chk 값 + 1
//            for (auto goline : hub[station]) {
//                if (chk[goline] == -1) {
//                    chk[goline] = chk[lineNum] + 1;
//                    q.push(goline);
//                }
//            }
//        }
//    }
//
//    int answer = 1e9;
//    // fin 역이 지나는 노선 중에서
//    for (auto lineNum : hub[fin]) {
//        // chk가 되어 있는 노선 중, 최솟값을 꺼낸다
//        if (chk[lineNum] != -1)
//            answer = min(answer, chk[lineNum]);
//    }
//
//    if (answer == 1e9)
//        answer = -1;
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/11.
////
//
