//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define MAX 100000
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m;
//string op;
//set<int> xrr[200001], yrr[200001];
//int sy = MAX, sx = MAX;
//
//int main() {
//    fastio
//    cin >> n >> m;
//
//    // set으로 자동정렬
//    // xrr은 x좌표가 가지고 있는 y 좌표들
//    // yrr은 y좌표가 가지고 있는 x 좌표들
//    for (int i = 0; i < n; ++i) {
//        int x, y;
//        cin >> x >> y;
//
//        x += MAX, y += MAX;
//        xrr[x].emplace(y);
//        yrr[y].emplace(x);
//    }
//
//    cin >> op;
//
//    for (auto i: op) {
//        int ty = sy, tx = sx;
//
//        // U, R은 upper_bound가 현재 좌표보다 이상인 값이므로 그대로 사용
//        // D, L은 현재 좌표보다 초과인 lower_bound에서 인덱스 하나를 감소 시킨 값을 사용
//        if (i == 'U') {
//            ty = *xrr[sx].upper_bound(sy);
//        } else if (i == 'D') {
//            ty = *--xrr[sx].lower_bound(sy);
//        } else if (i == 'L') {
//            tx = *--yrr[sy].lower_bound(sx);
//        } else if (i == 'R') {
//            tx = *yrr[sy].upper_bound(sx);
//        }
//
//        sy = ty, sx = tx;
//    }
//
//    cout << sx - MAX << ' ' << sy - MAX << endl << endl;
//}
//// Created on 2021/11/23.