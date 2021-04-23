//#include <iostream>
//#include <vector>
//
//#define mx 1000001
//
//using namespace std;
//int n;
//int su[mx + 1], dp[mx + 1];
//
//// 이분 탐색 answer에 놓을 최적의 인덱스 찾기
//int binary(int start, int end, int target) {
//    int mid;
//
//    while (start < end) {
//        mid = (start + end) / 2;
//
//        if (dp[mid] < target) // 10 20 50 | target = 30, dp[mid] = 20
//            start = mid + 1;
//            // 넣어야 할 값이 dp[mid] 보다 크면 left = [mid + 1] ~ end 에서 다시 검색
//            // mid+1 = 3 이므로 20과 50사이에 target 이 추가 되는 것이 아니라 10 20 30으로 변경하고 while 탈출
//        else
//            end = mid; // 10 40 50 | target = 30, dp[mid] = 40
//            // 넣어야 할 값이 범위에 있는 값들 보다 크면, 오른쪽 최대 범위를 mid 로 해서 다시 검색
//            // left ~ end(mid)에서 다시 검색
//    }
////  결국 start와 end가 같아지면 while이 끝나므로 start, end 둘다 리턴을 해줘도 상관없다.
//    return end;
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> su[i];
//    }
//
//    int idx = 1;  // answer의 현재 위치
//    dp[1] = su[1]; // 시작은 1부터
//
////  1부터 n까지 su배열을 돌면서 dp[idx] < su[i] 면, dp[idx + 1] = su[i]
//    for (int i = 1; i <= n; i++) {
//        if (dp[idx] < su[i]) {
//            dp[idx + 1] = su[i];
//        // 다음 인덱스로 넘어가기
//            idx++;
//        } else {
//            // 아닐 경우 이분 탐색 nlog(N)으로 최적의 위치에 수를 삽입 한다.
//            int next = binary(1, idx, su[i]);
//            dp[next] = su[i];
//        }
//    }
//
//    cout << idx << endl;
//}
////
//// Created by Mac2 on 2021/04/21.
////
//
