//#include <bits/stdc++.h>
//
//#define mx 300000
//using namespace std;
//typedef long long ll;
//
//vector<int> a = {-5, 0, 2, 1, 2};
//vector<vector<int>> edges = {{0, 1},
//                             {3, 4},
//                             {2, 3},
//                             {0, 3}};
//
//vector<int> ed[mx];
//ll answer;
//
//void dfs(int cur, int pa) {
//    // 자식 끝까지 내려간다.
//    for (auto i : ed[cur]) {
//        if (i == pa) // chk 없이 부모 노드면 continue !
//            continue;
//
//        dfs(i, cur);
//    }
//
//    // 다 내려왔으면, 현재 노드를 0으로 만들고, 부모 노드에 그대로 더해준다.
//    ll temp = a[cur];
//    a[cur] = 0, a[pa] += temp;
//    // answer에는 절대값 씌워서 더해주기
//    answer += abs(temp);
//}
//
//int main() {
//    for (auto i : edges) {
//        ed[i[0]].push_back(i[1]);
//        ed[i[1]].push_back(i[0]);
//    }
//
//    // 트리이기 때문에, 어느 곳을 잡아도 루트이다.
//    // 0이 루트, 루트는 부모 노드는 자기 자신
//    dfs(0, 0);
//
//    // 만약에 루트까지 왔는데, 값이 0 이 아니면 모두 0으로 만들 수 없다.
//    if (a[0] != 0)
//        answer = -1;
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/30.
////
//
