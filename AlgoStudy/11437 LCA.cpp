//#include <bits/stdc++.h>
//
//#define mx 50001
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m;
//vector<int> ed[mx];
//pl chk[mx];
//
//void depth() {
//    queue<int> q;
//    q.push(1), chk[1] = {1, 1}; // 부모, depth
//
//    while (!q.empty()) {
//        int f = q.front();
//        q.pop();
//
//        /*
//         * 1부터 시작해서 다음 노드의 부모와, 노드의 깊이를 적어준다.
//         *      1
//         *    2   3  이면,
//         * 2 -> (1, 1),  3 -> (1, 1)  부모의 노드, depth
//         */
//        for (auto i : ed[f]) {
//            if (!chk[i].second) {
//                chk[i].first = f;
//                chk[i].second = chk[f].second + 1;
//                q.push(i);
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//    int a, b;
//
//    for (int i = 0; i < n - 1; i++) {
//        scanf("%d %d", &a, &b);
//
//        ed[a].push_back(b);
//        ed[b].push_back(a);
//    }
//
//    depth();
//
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        scanf("%d %d", &a, &b);
//
//        // 부모 노드, depth
//        while (1) {
//            // 만약 부모 노드가 같다면 종료한다.
//            if (chk[a].first == chk[b].first)
//                break;
//
//            /*
//             * lca 의 중요 개념은 만약 a,b 둘 중 depth가 다르다면
//             * 큰 depth 를 가진 노드의 레벨을 하나씩 낮춰 줌으로써 가장 가까운 공통 부모를 찾는다.
//             */
//            if (chk[a].second < chk[b].second)
//                b = chk[b].first;
//            else if (chk[a].second > chk[b].second)
//                a = chk[a].first;
//            else // 이럴 경우에는 depth 는 같지만 같은 부모가 아니므로 둘 다 레벨을 하나씩 위로 올려준다.
//                a = chk[a].first, b = chk[b].first;
//        }
//
//        // 부모 노드가 같은데 a와 b가 같아졌다면 둘 중 하나 출력
//        if (a == b)
//            cout << a << endl;
//        else // 아니면 같은 노드의 다른 자식들이므로 부모 노드를 출력하면 된다.
//            cout << chk[a].first << endl;
//    }
//}
////
//// Created by Mac2 on 2021/05/27.
////
//
