//#include <bits/stdc++.h>
//
//#define MX 101
//using namespace std;
//
//int n, m;
//int arr[MX][MX];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n >> m;
//
//    fill(&arr[0][0], &arr[n][n + 1], 1e9);
//
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        arr[a][b] = arr[b][a] = 2;
//    }
//
//    // 플로이드 와샬
//    // 입력 받지 않은 곳은 1e9이다
//    // 최단거리 초기화
//    for (int k = 1; k <= n; ++k) {
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 1; j <= n; ++j) {
//                if (i == j)
//                    arr[i][j] = 0;
//
//                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
//            }
//        }
//    }
//
//    int s1, s2, res = 1e9;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = i + 1; j <= n; j++) {
//            int hap = 0;
//
//            // 두 정점을 골랐으면, 1~n 까지 두 정점에서 더 가까운 거리를 hap에 더해준다
//            for (int k = 1; k <= n; k++)
//                hap += min(arr[i][k], arr[j][k]);
//
//            // 더 작은 hap이 있으면, 갱신
//            if (res > hap)
//                s1 = i, s2 = j, res = hap;
//        }
//    }
//
//    cout << s1 << ' ' << s2 << ' ' << res << endl;
//}
////
//// Created by Mac2 on 2021/08/26.
////
//
