//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m, t, k; // k 는 정사각형의 한변
//int ans, ansY, ansX;
//vector<pl> r;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n >> m >> t >> k;
//
//    int a, b;
//    for (int i = 0; i < t; i++) {
//        cin >> a >> b;
//
//        r.push_back({b, a}); // y, x
//    }
//
//    // t의 범위가 100 이하 이므로,
//    // 점 두개를 잡고,
//    // 두 점이 만들 수 있는 정사각형 안에 속해 있는 좌표를 세서
//    // 답을 구하면 된다..
//    // queue로 할 수 있을 것 같은데 실패.
//    for (int i = 0; i < t; i++) {
//        for (int j = 0; j < t; j++) {
//            int y = r[i].first, x = r[j].second;
//
//            int cnt = 0;
//            int minX, minY;
//
//            // y 좌표에서 k를 더했는데 m의 범위를 벗어난다면,
//            // 가장 작은 y는 m - k 이고,
//            if (y + k >= m)
//                minY = m - k;
//            else // 벗어나지 않는다면 y가 가장 작다.
//                minY = y;
//
//            // 같은 개념
//            if (x + k >= n)
//                minX = n - k;
//            else
//                minX = x;
//
//            for (int j = 0; j < t; j++) {
//                int ny = r[j].first, nx = r[j].second;
//
//                // 두 개의 점에서 가장 작은 x, 가장 작은 y에 + k 한 것이
//                // k 크기 만한 정사각형이다
//                if (ny >= minY && ny <= minY + k && nx >= minX && nx <= minX + k)
//                    cnt++;
//
//                if (ans < cnt)
//                    ans = cnt, ansX = minX, ansY = minY + k;
//            }
//        }
//    }
//
//    cout << ansX << ' ' << ansY << endl << ans;
//}
////
//// Created by Mac2 on 2021/06/24.
////
