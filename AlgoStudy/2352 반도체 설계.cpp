//#include <bits/stdc++.h>
//
//#define mx 40001
//using namespace std;
//typedef pair<int, int> pl;
//int n, su[mx], dp[mx];
//pl answer[mx];
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> su[i];
//
//    int idx = 1;
//    answer[1] = {su[1], 1}; // 값, 인덱스
//    dp[1] = 1;
//
//    // answer 배열은 긴 증가하는 수열을 저장하기 위한 배열
//    for (int i = 1; i <= n; i++) {
//        // idx는 1부터 시작해서 dp, answer 를 갱신할 것이다.
//        int ansIdx = answer[idx].second;
//
//        // 맨뒤의 값이 su[i] 보다 작으면 뒤에 넣고 길이, index를 갱신한다.
//        if (answer[idx].first < su[i]) {
//            // idx + 1에 값, 인덱스 저장
//            answer[idx + 1].first = su[i];
//            answer[idx + 1].second = i;
//
//            // dp길이 + 1, idx증가
//            dp[i] = dp[ansIdx] + 1;
//            idx++;
//        } else {
//            // 만약, 작거나 같다면, 덮어 씌울 자리를 이분탐색으로 찾는다.
//            int start = 1, end = idx;
//            while (start < end) {
//                int mid = (start + end) / 2;
//
//                if (answer[mid].first < su[i])
//                    start = mid + 1;
//                else
//                    end = mid;
//            }
//            // end는 찾아낸 위치
//            // answer[end]에 값을 덮어 씌워 갱신한다.
//            answer[end].first = su[i];
//            ansIdx = answer[end].second;
//
//            // dp길이도 그대로 갱신한다.
//            dp[i] = dp[ansIdx];
//        }
//    }
//
//    int ans = 0;
//
//    for (int i = 1; i <= n; i++)
//        ans = max(ans, dp[i]);
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/07/26.
////
//
