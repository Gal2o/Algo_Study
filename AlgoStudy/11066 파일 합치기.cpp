//#include <bits/stdc++.h>
//
//#define mx 501
//
//using namespace std;
//int t, k;
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        cin >> k;
//
//        vector<int> file(k + 1, 0);
//        vector<int> sum(k + 1, 0);
//        vector<vector<int>> dp(k + 1, vector<int>(k + 1));
//
//        for (int i = 1; i <= k; i++) {
//            cin >> file[i];
//
//            // sum은 i까지의 페이지를 합친 값
//            sum[i] = sum[i - 1] + file[i];
//        }
//
//        // diff - dp[i][j] 에서 i와 j의 간격을 정해준다.
//        // diff 가 1이면, 1-2, 2-3 처럼 연속된 페이지 합치는 방법
//        // diff 가 2이면, 1-3, 3-5 처럼 간격을 길게 페이지를 합친다
//        for (int diff = 1; diff < k; diff++) {
//            // start는 몇 번째 페이지부터 더할지 정한다
//            // diff가 3이고 start가 2이면,
//            // dp[2][2+3] -> dp[2][5]를 구한다 -> 2페이지 부터 5페이지까지 합치는 최소 비용
//            // dp[i][j]는 i 페이지 부터 j 페이지 까지 합치는데 드는 최소 비용을 갱신한다
//            for (int start = 1; start + diff <= k; start++) {
//                // start + diff 를 end에 저장해 둔다
//                int end = start + diff;
//
//                dp[start][end] = 1e9;
//                // mid 는 파일을 합칠 때는 두 개의 파일을 합쳐야 한다
//                // start - mid / mid + 1 - end 까지 반을 가르는 부분
//                // start = 1, diff = 4 이면
//                // dp[1][5]를 구해야 한다
//                // 그랬을 때, 파일을 합치는 방법은
//                // mid = 1이면, 1/2~5
//                // mid = 2이면, 1~2/3~5
//                // mid = 3이면, 1~3/4~5
//                // mid = 4이면, 1~4/5
//                // mid == end 이면 1~5/X 가 되므로 mid는 항상 end보다 작아야 한다
//                // 이런식으로 합치는 방법을 쪼개서 dp에 최소값을 갱신해주자
//
//                for (int mid = start; mid < end; mid++) {
//                    // sum[end]는 end까지 페이지 합이 다 저장되어 있고,
//                    // start-end 까지만 구하고 싶다면,
//                    // start 이전까지의 합 => sum[start-1]을 빼줘야
//                    // start-end 사이만 더한 값을 구할 수 있다.
//                    dp[start][end]
//                            = min(dp[start][end],
//                            // start-end 의 dp값에 sum 더해주기
//                                  dp[start][mid] + dp[mid + 1][end]
//                                  + sum[end] - sum[start - 1]);
//                }
//            }
//        }
//
//        // 1부터 k까지 합치는 최소 비용
//        cout << dp[1][k] << "\n";
//    }
//}
////
//// Created by Mac2 on 2021/05/05.
////
//
