//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 100001
//using namespace std;
//
//int n, m;
//
//int min_init(vector<int> &a, vector<int> &tree, int node, int start, int end) {
//    if (start == end)
//        return tree[node] = a[start];
//    else {
//        return tree[node] = min(min_init(a, tree, node * 2, start, (start + end) / 2),
//                                min_init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end));
//    }
//}
//
//int max_init(vector<int> &a, vector<int> &tree, int node, int start, int end) {
//    if (start == end)
//        return tree[node] = a[start];
//    else {
//        return tree[node] = max(max_init(a, tree, node * 2, start, (start + end) / 2),
//                                max_init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end));
//    }
//}
//
//int search_min(vector<int> &a, vector<int> &tree, int node, int start, int end, int left, int right) {
//    if (left > end || right < start)
//        return 1e9;
//
//    if (left <= start && end <= right)
//        return tree[node];
//
//    return min(search_min(a, tree, node * 2, start, (start + end) / 2, left, right),
//               search_min(a, tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right));
//}
//
//int search_max(vector<int> &a, vector<int> &tree, int node, int start, int end, int left, int right) {
//    if (left > end || right < start)
//        return 0;
//
//    if (left <= start && end <= right)
//        return tree[node];
//
//    return max(search_max(a, tree, node * 2, start, (start + end) / 2, left, right),
//               search_max(a, tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right));
//}
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    vector<int> arr(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    int h = (int) ceil(log2(n));
//    int tree_size = (1 << (h + 1));
//
//    // 각각 init 하면서 최소 최대 값을 저장해 둔다
//    vector<int> max_tree(tree_size), min_tree(tree_size);
//    max_init(arr, max_tree, 1, 0, n - 1);
//    min_init(arr, min_tree, 1, 0, n - 1);
//
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        a--, b--;
//
//        // sum 함수를 응용해서, 최대 최소 값을 찾는다.
//        cout << search_min(arr, min_tree, 1, 0, n - 1, a, b) << ' ';
//        cout << search_max(arr, max_tree, 1, 0, n - 1, a, b) << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/08.
////
//
