//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef long long ll;
//
//ll init(vector<ll> &a, vector<ll> &tree, int node, int start, int end) {
//    if (start == end)
//        return tree[node] = a[start];
//    else {
//        // 왼쪽자식은 node*2 (짝수), 오른쪽 자식은 node*2+1 (홀수)
//        // 분할 해서 트리 만들기 start ~ mid, mid+1 ~ end
//        // 처음 트리 만들 때 원소는 부모 = 자식 노드들의 합
//        return tree[node] =
//                       init(a, tree, node * 2, start, (start + end) / 2)
//                       + init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end);
//    }
//}
//
//// 값을 변경하면, 노드부터 바꾸고 싶은 노드까지 값을 모두 변경해야 한다.
//// 일단 바꾸고 싶은 노드의 값의 차이를 구한다. diff = changeV - v[idx]
//void update(vector<ll> &tree, int node, int start, int end, int idx, ll diff) {
//    // 변경하고 싶은 idx가 node 구간을 벗어나면 return
//    if (idx < start || idx > end)
//        return;
//
//    // 끝까지 재귀를 타고 들어가면서, 노드를 올라가면서 변경 된 값만큼 노드의 합에 더해준다
//    tree[node] = tree[node] + diff;
//
//    // 마지막 자식 노드가 아니면 다 변경해줘야 하므로 아래로 재귀 타고 가기
//    if (start != end) {
//        update(tree, node * 2, start, (start + end) / 2, idx, diff);
//        update(tree, node * 2 + 1, (start + end) / 2 + 1, end, idx, diff);
//    }
//}
//
//// 구간 합 구하기
//// node가 담당하고 있는 구간은 start-end
//// 합을 구해야 하는 구간은 left-right
//ll sum(vector<ll> &tree, int node, int start, int end, int left, int right) {
//    // 합을 구해야 하는 구간이 start, end를 벗어났다.
//    // left > end => start - end < left - right 인 경우 이므로 탐색 중단
//    // right < start => left - right < start - end인 경우 이므로 탐색 중단
//
//    if (left > end || right < start)
//        return 0;
//
//    // 합을 구해야 하는 left - right 구간이
//    // start - end 구간을 덮어버렸다면
//    // left <= start - end <= right
//    // 해당 node가 가지고 있는 구간합 리턴
//
//    if (left <= start && end <= right)
//        return tree[node];
//
//    // 왼쪽 자식, 오른쪽 자식 재귀 시작
//    return sum(tree, node * 2, start, (start + end) / 2, left, right)
//           + sum(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
//}
//
//int n, m, k;
//
//int main() {
//    fastio
//    cin >> n >> m >> k;
//
//    // 트리의 높이 구하기 (log2(n))
//    int h = (int) ceil(log2(n));
//
//    // 세그먼트 트리를 만드는데 필요한 공간은 2^(h+1) - 1
//    int tree_size = (1 << (h + 1));
//
//    vector<ll> v;
//    vector<ll> tree(tree_size);
//
//    for (int i = 0; i < n; ++i) {
//        int a;
//        cin >> a;
//
//        v.push_back(a);
//    }
//
//    // 트리를 형성한다.
//    // 노드의 시작 번호는 1로 고정이다
//    // start - end 는 v배열의 인덱스
//    init(v, tree, 1, 0, n - 1);
//    m += k;
//
//    while (m--) {
//        ll a, b, c;
//        cin >> a >> b >> c;
//
//        // update
//        if (a == 1) {
//            // 0부터 시작하므로, b번째 노드 = b-1
//            b--;
//
//            // b번째 수를 c로 바꾼다
//            ll diff = c - v[b];
//            v[b] = c;
//
//            update(tree, 1, 0, n - 1, b, diff);
//
//        } else if (a == 2) { // sum
//            cout << sum(tree, 1, 0, n - 1, --b, --c) << endl;
//        }
//    }
//}
////
//// Created by Mac2 on 2021/09/07.
////
//
