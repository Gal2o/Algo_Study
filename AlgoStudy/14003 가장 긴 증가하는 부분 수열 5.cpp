//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//#define mx 1000001
//
//int n;
//int su[mx]; // 입력 받는 배열
//pair<int, int> answer[mx]; // LIS 배열 (su[] 값, su[] 값에 해당하는 인덱스)
//int dp[mx]; // dp 배열 (수열의 길이 저장)
//vector<int> result; // (이중 for 문을 돌지 않기 위해서 만든 최종 결과값 저장 배열)
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> su[i];
//
//    int idx = 1; // answer 배열에 idx 1부터 n까지 이분 탐색으로 위치를 찾는다!
//    answer[1] = {su[1], 1}; // 값, 인덱스
//    dp[1] = 1;
//
//    /* LIS 1,2 + 3,4 합친 내용이다.
//     * 범위 때문에 LIS를 구할 때는 NlogN 인 이분 탐색으로 길이를 찾고
//     * dp 배열을 통해서 각 su 값마다 길이를 저장한 후,
//     * answer 배열에 저장되어 있는 su 값과 인덱스를 활용하여
//     * 역순으로 뒤부터 돌면서 result 함수에 su 값을 저장을 한다.
//     * reserve 로 거꾸로 출력해주면 끝!
//     *
//     * 이분탐색은 su 배열과 비교하면서 새로운 배열에 가장 긴 수열을 저장하는 방식이다.
//     * 그러므로,
//     * su     = 1 2 -4 -3 -2 -1 4 5 0 6 이라는 값이 주어졌을 때,
//     * answer = -4 -3 -2 -1 0 5 6       이처럼 최적의 위치를 찾느라 뒤에 있는 값이 덮어 씌워질 수 있다.
//     *
//     * 올바를 순서를 뽑기 위해서 dp배열을 만들었고,
//     * su = 1 2 -4 -3 -2 -1 4 5 0 6
//     * dp = 1 2  1  2  3  4 5 6 5 7     이런식으로 각 su 값마다의 최대 길이를 저장해 주었고,
//     *
//     * 뒤부터 돌면서 길이를 하나씩 줄여가며 제일 뒤쪽에 만나는 값을 차곡차곡 넣어주면서 순서가 꼬이지 않게 했다.
//    */
//
//    for (int i = 1; i <= n; i++) {
//        int answerValueToIDX = answer[idx].second; // answer의 값이 어디에 있는지 알려주는 인덱스
//
//        if (answer[idx].first < su[i]) { // 다음 올 su가 현재 위치 값보다 크다면
//            answer[idx + 1].first = su[i]; // 다음 배열에 추가하기
//            answer[idx + 1].second = i;    // su 값이 어디 위치에 있는지 index 저장 (순서대로 값 찾기 위해)
//
//            dp[i] = dp[answerValueToIDX] + 1; // su 값의 dp 길이 갱신
//            idx++;                            // idx 증가
//        } else {
//            int start = 1, end = idx;
//            while (start < end) {
//                int mid = (start + end) / 2;
//
//                if (answer[mid].first < su[i])
//                    start = mid + 1;
//                else
//                    end = mid;
//            }
//
//            answer[end].first = su[i];              // su 값이 현재 answer 보다 작거나 같으면 덮어 씌우기
//
//            answerValueToIDX = answer[end].second;  // idx가  아닌 찾아낸 위치를 넣어주므로 end
//            dp[i] = dp[answerValueToIDX];           // 증가한 수열이 아니므로 같은 길이 갱신
//        }
//    }
//    cout << idx << endl;
//
//    int tmp = idx;
//    for (int i = n; i >= 1; i--) {          // 역순으로 가장 큰 길이 dp 값을 차례대로 넣어준다.
//        if (dp[i] == tmp)
//            result.push_back(su[i]), tmp--; // 찾아서 넣었으면 다음 큰 길이의 dp 값을 찾아서 넣는다.
//    }
//
//    reverse(result.begin(), result.end());  // 역순으로 넣었으니 뒤집어 주기
//
//    for (int i : result)
//        cout << i << ' ';
//};
//
////
//// Created by Mac2 on 2021/04/23.
////
//
