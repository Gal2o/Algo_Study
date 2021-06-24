//#include <bits/stdc++.h>
//
//#define mx 100001
//using namespace std;
//
//int n, score[mx][3];
//int maxdp[3], mindp[3];
//
//// 메모리 제한 떄문에 너무 어려웠음..
//// 2차원 배열로 하면 터진다.
//// 슬라이딩 윈도우로 해야 가능.
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//        cin >> score[i][0] >> score[i][1] >> score[i][2];
//
//    maxdp[0] = mindp[0] = score[0][0];
//    maxdp[1] = mindp[1] = score[0][1];
//    maxdp[2] = mindp[2] = score[0][2];
//
//    // 0 ~ n - 1 까지
//    // dp 배열은 처음 받은 값으로 초기화
//    // 0에서 시작 아래인 1부터 고르기
//    // 0 번째는 dp[0], dp[1] 비교해서 최솟값,
//    // 2 번째는 dp[1], dp[2] 비교해서 최솟값
//    // 1 번째는 구해 놓은 최소값
//    // 후에 같은 자리의 score[i] 를 더해 주면 된다..
//    for (int i = 1; i < n; i++) {
//        mindp[0] = min(mindp[0], mindp[1]);
//        mindp[2] = min(mindp[1], mindp[2]);
//        mindp[1] = min(mindp[0], mindp[2]) + score[i][1];
//        mindp[0] += score[i][0], mindp[2] += score[i][2];
//
//        maxdp[0] = max(maxdp[0], maxdp[1]);
//        maxdp[2] = max(maxdp[1], maxdp[2]);
//        maxdp[1] = max(maxdp[0], maxdp[2]) + score[i][1];
//        maxdp[0] += score[i][0], maxdp[2] += score[i][2];
//    }
//
//    cout << max(maxdp[0], max(maxdp[1], maxdp[2])) << ' ';
//    cout << min(mindp[0], min(mindp[1], mindp[2])) << endl;
//}
////
//// Created by Mac2 on 2021/06/23.
////
//
