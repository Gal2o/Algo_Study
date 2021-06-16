//#include <bits/stdc++.h>
//
//using namespace std;
//int n, a, b, c, l;
//vector<pair<int, int>> value;
//map<int, pair<int, int>> tree;
//
//// 중위 순회로 왼쪽부터 꺼내면 총 길이를 알 수 있다.
//void inorder(int node, int level) {
//    if (tree[node].first > 0)
//        inorder(tree[node].first, level + 1);
//
//    // 배열 사이즈 절약을 위한 레벨 최대값 저장
//    if (l < level)
//        l = level;
//
//    value.push_back({node, level}); // 노드, 높이
//
//    if (tree[node].second > 0)
//        inorder(tree[node].second, level + 1);
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d %d %d", &a, &b, &c);
//
//        tree[a] = {b, c};
//    }
//
//    int root = 0;
//    // 1이 루트가 아닐 수 있으므로, 1 ~ n 까지 돌면서
//    // 노드의 갯수가 n과 같다면 그 때 i가 루트이다.
//    for (int i = 1; i <= n; i++) {
//        queue<int> q;
//        q.push(i);
//        int h = 0;
//
//        while (!q.empty()) {
//            int f = q.front();
//            q.pop();
//            h++;
//
//            int left = tree[f].first, right = tree[f].second;
//
//            if (left > 0)
//                q.push(left);
//            if (right > 0)
//                q.push(right);
//        }
//
//        if (h == n)
//            root = i;
//    }
//
//    inorder(root, 1);
//
//    // 각 레벨 마다의 최소 최대 초기화
//    vector<pair<int, int>> ans(l + 1, {1e9, 0});
//    int anslv = 1e9, maxw = 0;
//
//    // value = (노드 , 높이) 순으로 저장되어 있음
//    for (int i = 0; i < value.size(); i++) {
//        int h = value[i].second;
//
//        if (ans[h].first > i)
//            ans[h].first = i;
//
//        if (ans[h].second < i)
//            ans[h].second = i;
//
//        // 최대 길이보다 크면 길이, 레벨 갱신
//        if (maxw < ans[h].second - ans[h].first + 1) {
//            maxw = ans[h].second - ans[h].first + 1;
//            anslv = h;
//        } else if (maxw == ans[h].second - ans[h].first + 1)
//            if (anslv > h) // 최대 길이가 같으면 레벨이 작은 것 우선
//                anslv = h;
//    }
//
//    cout << anslv << ' ' << maxw << endl;
//}
////
//// Created by Mac2 on 2021/05/28.
////
//
