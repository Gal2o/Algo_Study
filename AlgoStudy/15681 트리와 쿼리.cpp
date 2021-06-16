//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, r, q, a, b;
//vector<int> ed[100001];
//vector<int> chk(100001, -1);
//
//// top-down 방식으로 루트부터 내려가서 노드 수를 차례대로 더해준다.
//void dfs(int idx) {
//    // 맨 아래 노드 = 가지고 있는 노드가 부모 노드이고, 그 부모 노드는 이미 체크 처리가 되있다면
//    // 노드 수 1 return
//    if (ed[idx].size() == 1 && chk[ed[idx][0]] != -1) {
//        chk[idx] = 1;
//        return;
//    }
//
//    if (chk[idx] != -1)
//        return;
//
//    // 방문을 하면 본인 노드는 포함해야 하므로 chk 시작 값은 1
//    chk[idx] = 1;
//
//    // 가지고 있는 노드 중, chk 가 안된 것 = -1 인 것만 방문한다.
//    for (int i : ed[idx]) {
//        if (chk[i] == -1) {
//            dfs(i);
//            chk[idx] += chk[i];
//        }
//    }
//}
//
//int main() {
//    cin >> n >> r >> q;
//
//    for (int i = 0; i < n - 1; i++) {
//        scanf("%d %d", &a, &b);
//
//        ed[a].push_back(b);
//        ed[b].push_back(a);
//    }
//
//    dfs(r);
//
//    for (int i = 0; i < q; i++) {
//        scanf("%d", &a);
//
//        printf("%d\n", chk[a]);
//    }
//}
////
//// Created by Mac2 on 2021/05/28.
////
//
