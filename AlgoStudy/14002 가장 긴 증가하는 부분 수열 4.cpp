//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int n, su[1001], answer[1001];
//vector<int> answer[1001];
//pair<int, int> result;
//// 은근 시간 많이 잡아먹은 문제
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> su[i];
//    }
//
//    // 기존 LIS 처럼 길이를 먼저 구해준다.
//    for (int i = 1; i <= n; i++) {
//        answer[i] = 1;
//        for (int j = 1; j < i; j++) {
//            if (su[i] > su[j] && answer[i] < answer[j] + 1) {
//                answer[i] = answer[j] + 1;
//            }
//        }
//
//        // 가장 긴 길이와 인덱스를 result 에 저장해 놓는다.
//        if (answer[i] > result.first)
//            result.first = answer[i], result.second = i;
//    }
//
//    /*  중요!! dp를 갱신하면서 요소를 쌓으면
//     *  su[] = 1 5 6 2 3 8
//     *  answer[] = 1 2 2 2 3 4  일 때,
//     *  dp가 2인 부분에서 요소를 쌓을때,
//     *  5,1 / 6,1 / 2,1 이고 (위의 식으로 dp를 갱신할 때를 가정)
//     *  dp가 3으로 갱신할 때, 요소들의 상태는
//     *  3,5,1 / 3,6,1 처럼 순서대로 쌓지 않는다.
//     *  그러므로 dp는 일단 쌓아두고, 뒤에서 부터 자신보다 dp값이 1 낮고 su가 낮은 수를 쌓으면 정상적으로 쌓을 수 있다.
//     */
//    for (int i = n; i >= 1; i--) {
//        int v = answer[i];              // 뒤에서 부터 자신의 answer 값
//        answer[i].push_back(su[i]); // 자신의 su을 쌓고,
//        for (int j = i; j >= 1; j--) {
//            if (v == answer[j] + 1 && su[i] > su[j]) {  // 자신보다 1낮은 dp의 값 && su 값이 나보다 작으면
//                answer[i].push_back(su[j]);         // 뒤에서부터 차곡차곡 쌓아준다.
//                v--;                                // 쌓았으면 다음 낮은 dp를 찾아야 하기 때문에 감소
//            }
//        }
//    }
//
//    cout << result.first << endl;
//
//    sort(answer[result.second].begin(), answer[result.second].end());
//
//    for (int i : answer[result.second])
//        cout << i << ' ';
//}
////
//// Created by Mac2 on 2021/04/22.
////
//
//
