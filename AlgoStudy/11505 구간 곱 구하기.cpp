//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//
//int n, m, k;
//vector<ll> arr, tree;
//
//ll init(int node, int start, int end) {
//    // 리프 노드라면, 배열 값만 넣어주기
//    if (start == end)
//        return tree[node] = arr[start];
//    else {
//        int mid = (start + end) / 2;
//
//        // 자식부터 에서 쌓아온 값들 부모에 곱해주기
//        return tree[node] = (init(node * 2, start, mid)
//                             * init(node * 2 + 1, mid + 1, end)) % MOD;
//    }
//}
//
//ll multi(int node, int start, int end, int left, int right) {
//    // 구간 합 구하는 것 처럼 0을 return 해주면 모든 값이 0으로 되버린다.
//    if (left > end || right < start)
//        return 1;
//
//    // ex. n = 10, left 1, right 10 -> 그냥 tree[1]만 리턴해주면 된다
//    if (left <= start && end <= right)
//        return tree[node];
//
//    int mid = (start + end) / 2;
//
//    return (multi(node * 2, start, mid, left, right)
//            * multi(node * 2 + 1, mid + 1, end, left, right)) % MOD;
//}
//
//ll update(int node, int start, int end, int idx, int diff) {
//    // 바꿀 위치가, start-end 구간이 아니면 갱신없이 현재 위치의 값을 반환해 준다.
//    if (idx < start || end < idx)
//        return tree[node];
//
//    // 리프 노드라면, (바꿀 값 = diff)로 바꿔주기
//    if (start == end)
//        return tree[node] = diff;
//
//    int mid = (start + end) / 2;
//
//    if (start != end) {
//        return tree[node] = (update(node * 2, start, mid, idx, diff)
//                             * update(node * 2 + 1, mid + 1, end, idx, diff)) % MOD;
//    }
//}
//
//int main() {
//    fastio
//    cin >> n >> m >> k;
//
//    int h = (int) ceil(log2(n));
//    int t_h = (1 << (h + 1));
//
//    arr = vector<ll>(n + 1);
//    tree = vector<ll>(t_h);
//
//    for (int i = 1; i <= n; ++i)
//        cin >> arr[i];
//
//    init(1, 1, n);
//    m += k;
//
//    for (int i = 0; i < m; ++i) {
//        ll a, b, c;
//        cin >> a >> b >> c;
//
//        // update
//        if (a == 1) {
//            // 구간 합은 바꿀 값의 차 만큼, 해당 노드 부터 루트 까지 diff를 바꿔주면 됬지만,
//            // 구간 곱은 다시 처음부터 다 곱해줘야 한다.
//            update(1, 1, n, b, c);
//        } else {
//            // multi
//            cout << multi(1, 1, n, b, c) << endl;
//        }
//    }
//}
//
//// Created by Mac2 on 2021/09/08.
////
//
