//#include <iostream>
//
//using namespace std;
//int n,answer;
//int su[1001], answer[1001];
//
//int main() {
//    cin >> n;
//
////  가장 긴 증가하는 부분 수열과 동일
//    for (int i = 1; i <= n; i++)
//        cin >> su[i];
//
////  answer[1] -> 시작은 무조건 길이가 1로 동일
//    for (int i = 1; i <= n; i++) {
//        answer[i] = 1;
//        for (int j = 0; j < i; j++) {
////          for문 하나로는 못했음
////          0부터 도는 이유 -> ex) 배열 중간에 제일 큰 숫자가 나왔을 경우 1을 넣어줄게 answer[0]밖에 없음
////          0부터 돌면서 이전 값이 앞에 있는 것보다 크면 ? 그 큰 숫자의 dp값에 + 1 과 현재 answer 값을 비교해서 큰 것 넣어주기
//            if (su[j] > su[i])
//                answer[i] = max(answer[j] + 1, answer[i]);
//        }
//
////      answer[n]이 가장 크다고 볼 수 없으므로 answer 객체에 최대 dp값 저장
//        if(answer[i] > answer)
//            answer = answer[i];
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/04/19.
////
//
