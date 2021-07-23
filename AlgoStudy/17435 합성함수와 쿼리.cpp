//#include <bits/stdc++.h>
//
//#define mx 500001
//#define k 19
//using namespace std;
//
//int arr[mx][k];
//int m, q, a, b;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//
//    cin >> m;
//    for (int i = 1; i <= m; i++)
//        cin >> arr[i][0];
//
//    // sparse table 만들기
//    // arr[N][K] {n, k} 순으로 정의하는 것이 캐싱때문에 시간이 더 빠르다고 한다.
//    // k번째 함수를 거쳐서 값이 뭐가 나오는지
//    // f(1) = 4 라면 == k는 1일 때, arr[1][1] = 4
//    // ff(1) 은 f(1) -> f(4) 이다. == k는 2일 때, arr[1][2] = f(4)
//    for (int j = 1; j < k; j++) {
//        for (int i = 1; i <= m; i++) {
//            arr[i][j] = arr[arr[i][j - 1]][j - 1];
//        }
//    }
//
//    // 쿼리 처리하기
//    cin >> q;
//    for (int i = 0; i < q; i++) {
//        cin >> a >> b;
//
//        // a는 몇번 이동할 건지, b는 a번 이동해서 도착한 목적지
//        // 11 3 -> f_11(3)
//        // 11은 1011이므로 1번, 2번, 8번을 가면 된다.
//        for (int j = 0; j < k; j++) {
//            if (a & (1 << j))
//                b = arr[b][j];
//        }
//
//        cout << b << "\n";
//    }
//}
////
//// Created by Mac2 on 2021/07/19.
////
//
