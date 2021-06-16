//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//
//typedef long long ll;
//int n;
//int cnt[mx];
//ll sum[mx];
//ll ans;
//vector <pair <int,int>> ed[mx];
//
//void tree(int now, int prev) {
//    cnt[now] = 1;
//
//    for (auto next : ed[now]) {
//        if (next.first == prev)
//            continue;
//
//        tree(next.first, now);
//
//        cnt[now] += cnt[next.first];
//        sum[now] += next.second * cnt[next.first] + sum[next.first];
//    }
//}
//
//void hap(int now, int prev, ll res) {
//    ans = min(ans, res);
//
//    for (auto next : ed[now]) {
//        if (next.first == prev)
//            continue;
//
//        hap(next.first, now,
//            res - (cnt[next.first] * next.second) + ((n - cnt[next.first]) * next.second));
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
//
//    while (1) {
//        cin >> n;
//
//        if (n == 0)
//            break;
//
//        for(int i = 0; i < mx; i ++)
//            ed[i].clear();
//
//        memset(cnt, 0, sizeof(cnt));
//        memset(sum, 0, sizeof(sum));
//        ans = 9876543210;
//
//        for (int i = 0; i < n - 1; i++) {
//            int a, b, c;
//            cin >> a >> b >> c;
//
//            ed[a + 1].push_back({b + 1, c});
//            ed[b + 1].push_back({a + 1, c});
//        }
//
//        tree(1, -1);
//        hap(1, -1, sum[1]);
//
//        cout << ans << endl;
//    }
//}
////
//// Created by Mac2 on 2021/06/09.
////
//
