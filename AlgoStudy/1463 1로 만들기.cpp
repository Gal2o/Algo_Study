//#include <iostream>
//#include <vector>
//
//using namespace std;
//int n, answer;
//int answer[10000001];
//// 작은 연산부터 하나씩 쌓기
//
//int main() {
//    cin >> n;
//
//    answer[1] = 0, answer[2] = 1, answer[3] = 1;
////  1일때는 연산 X, 2일때는 2로 나눈다 (횟수 1번), 3일때는 3으로 나눈다 (횟수 1번)
//    for (int i = 4; i <= n; i++) {
//        answer[i] = answer[i - 1] + 1;
//        // 1을 빼는 연산 추가
//        // ex. i = 5, 5 -> 4 -> 2 -> 1 (횟수 3회)
//
//        if (i % 3 == 0) // 3으로 나눠 지면
//            answer[i] = min(answer[i], answer[i / 3] + 1);
//        // 1을 빼는 연산, 이전에 해놨던 연산 + 1
//        //  ex. i = 6, 6 -> 3 -> 1 (answer[3] 횟수에 + 1)
//
//        if (i % 2 == 0) // 2로 나눠 지면
//            answer[i] = min(answer[i], answer[i / 2] + 1);
//        // 동일한 방법으로
//    }
//
//    cout << answer[n] << endl;
//}
//
////
//// Created by Mac2 on 2021/04/19.
////
//
