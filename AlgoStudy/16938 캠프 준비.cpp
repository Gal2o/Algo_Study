//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, l, r, x;
//int arr[16], chk[16];
//int res, answer;
//vector<int> v;
//
//void DFS(int cnt, int idx) {
//    if (cnt == res) {
//        vector<int> temp = v;
//
//        sort(temp.begin(), temp.end());
//        int sum = 0;
//
//        for (auto i: temp)
//            sum += i;
//
//        if (sum >= l && sum <= r && temp[temp.size() - 1] - temp[0] >= x)
//            answer++;
//
//        return;
//    }
//
//    for (int i = idx; i < n; i++) {
//        if (!chk[i]) {
//            chk[i] = 1, v.push_back(arr[i]);
//            DFS(cnt + 1, i);
//            chk[i] = 0, v.pop_back();
//        }
//    }
//}
//
//int main() {
//    fastio
//    // 2문제 이상, 합이 l <= a <= r, 제일 어려운 - 쉬운 >= x
//    cin >> n >> l >> r >> x;
//
//    for (int i = 0; i < n; ++i)
//        cin >> arr[i];
//
//    for (int i = 2; i <= n; ++i)
//        res = i, DFS(0, 0);
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/09/24.
////
//
