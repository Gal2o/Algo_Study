//#include <iostream>
//
//using namespace std;
//int n,dp;
//int su[1001], dp[1001];
//
//int main() {
//    cin >> n;
//
////  가장 긴 증가하는 부분 수열과 동일
//    for (int i = 1; i <= n; i++)
//        cin >> su[i];
//
////  dp[1] -> 시작은 무조건 길이가 1로 동일
//    for (int i = 1; i <= n; i++) {
//        dp[i] = 1;
//        for (int j = 0; j < i; j++) {
////          for문 하나로는 못했음
////          0부터 도는 이유 -> ex) 배열 중간에 제일 큰 숫자가 나왔을 경우 1을 넣어줄게 dp[0]밖에 없음
////          0부터 돌면서 이전 값이 앞에 있는 것보다 크면 ? 그 큰 숫자의 dp값에 + 1 과 현재 dp 값을 비교해서 큰 것 넣어주기
//            if (su[j] > su[i])
//                dp[i] = max(dp[j] + 1, dp[i]);
//        }
//
////      dp[n]이 가장 크다고 볼 수 없으므로 dp 객체에 최대 dp값 저장
//        if(dp[i] > dp)
//            dp = dp[i];
//    }
//
//    cout << dp << endl;
//}
////
//// Created by Mac2 on 2021/04/19.
////
//
