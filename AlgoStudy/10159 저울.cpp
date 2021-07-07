//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, m;
//int arr[101][101];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        arr[a][b] = 1; // a에서 b로 가는 길이 있다 로 해석
//    }
//
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                // Ex.
//                // 1 -> 2, 2 -> 3 이면 1 -> 3 가능
//                // 2 -> 3, 3 -> 4 이면 2- > 4 가능
//                // 으로 내가 더 무겁다면 1 갱신
//                if (arr[i][k] && arr[k][j])
//                    arr[i][j] = 1;
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        int cnt = 0;
//        for (int j = 1; j <= n; j++) {
//            if (i == j)
//                continue;
//
//            // i에서 j로 가는길이 둘 다 없다면 누가 우위인지 모르는것
//            if (!arr[i][j] && !arr[j][i])
//                cnt++;
//        }
//        cout << cnt << endl;
//    }
//}
////
//// Created by Mac2 on 2021/06/29.
////
//
