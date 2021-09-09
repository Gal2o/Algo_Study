//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef long long ll;
//
//int n, m;
//vector<ll> arr, tree;
//
//ll init(int node, int start, int end) {
//    if (start == end)
//        return tree[node] = arr[start];
//    else {
//        int mid = (start + end) / 2;
//        return tree[node] = init(node * 2, start, mid)
//                            + init(node * 2 + 1, mid + 1, end);
//    }
//}
//
//ll sum(int node, int start, int end, int left, int right) {
//    if (left > end || right < start)
//        return 0;
//
//    if (left <= start && end <= right)
//        return tree[node];
//
//    int mid = (start + end) / 2;
//
//    return sum(node * 2, start, mid, left, right)
//           + sum(node * 2 + 1, mid + 1, end, left, right);
//}
//
//void update(int node, int start, int end, int idx, ll diff) {
//    if (idx < start || end < idx)
//        return;
//
//    tree[node] = tree[node] + diff;
//
//    if (start != end) {
//        int mid = (start + end) / 2;
//        update(node * 2, start, mid, idx, diff);
//        update(node * 2 + 1, mid + 1, end, idx, diff);
//    }
//}
//
//// 세그먼트 트리로 구간합 구하기~
//int main() {
//    fastio
//    cin >> n >> m;
//
//    int h = (int) ceil(log2(n));
//    int t_h = (1 << h + 1);
//
//    arr = vector<ll>(n + 1);
//    tree = vector<ll>(t_h);
//
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//
//    init(1, 1, n);
//
//    for (int i = 0; i < m; ++i) {
//        ll x, y, a, b;
//        cin >> x >> y >> a >> b;
//
//        // x, y 가 바뀔 수 있으므로 주의 하자
//        if (x < y)
//            cout << sum(1, 1, n, x, y) << endl;
//        else
//            cout << sum(1, 1, n, y, x) << endl;
//
//        ll diff = b - arr[a];
//        arr[a] = b;
//
//        update(1, 1, n, a, diff);
//    }
//}
////
//// Created by Mac2 on 2021/09/09.
////
//
