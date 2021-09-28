//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 100009
//using namespace std;
//
//int n, arr[mx];
//int sum[2][mx];
//
//int main() {
//    fastio
//    cin >> n;
//
//    for (int i = 0; i < n; ++i)
//        cin >> arr[i];
//
//    // sum[0]은 짝수, [1]는 홀수
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 0)
//            sum[0][i] += sum[0][i - 2] + arr[i];
//        else
//            sum[1][i] += sum[1][i - 2] + arr[i];
//    }
//
//    // 짝수가 내가 먹는 차례
//    // 0 1 2 3 4 5 6 7
//    // 0 0 2 0 6 0 12 0
//    // 0 1 0 4 0 9 0 16
//    // i 번째에서 밑장을 뺄 경우
//    // i=0 / 7 +1+3+5   -> [7(밑장) 내가 먹고, 상대방 0 주고] +1+3+5
//    // i=1 / 0 +1+3+5   -> [7(밑장) 상대방 주고, 내가 1 먹고] 3+5
//    // i=2 / 0+ 7 +3+5
//    // i=3 / 0+2+ 3+5
//    // i=4 / 0+2+ 7 +5
//    // i=5 / 0+2+4 +5
//
//    int answer = 0;
//    // 위 경우를 바탕으로 합을 구한다
//    for (int i = 0; i < n; ++i) {
//        int res;
//        if (i % 2 == 0)
//            // 인덱스 짝수 i = 0, 2, 4, 6 일땐, 밑장을 가져가고
//            // 홀수 누적합은 n-1은 밑장이므로, n-3에서 i-1 빼기
//            res = arr[n - 1] + sum[0][i - 2] + sum[1][n - 3] - sum[1][i - 1];
//        else
//            // 인덱스 홀수 i = 1, 3, 5, 7
//            // 짝수 누적합 i-1 + n-3에서 i-2 빼기
//            res = sum[0][i - 1] + sum[1][n - 3] - sum[1][i - 2];
//
//        answer = max(answer, res);
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/09/23.
////
//
