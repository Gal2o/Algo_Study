//#include <iostream>
//
//using namespace std;
//int n, answer, su[1001];
//pair<int, int> answer[1001];
//// 11722, 11053 과 거의 유사함
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> su[i];
//
//    // 가장 큰 중가 부분 수열에 수열들의 합까지 구해야 하므로 dp배열은 pair로 만듦
//    for (int i = 1; i <= n; i++) {
////      초기화 값은 기본 길이 1, su의 인덱스 값
//        answer[i] = {1, su[i]};
//        for (int j = 0; j < i; j++) {
//            if (su[i] > su[j]) {
//                // 가장 긴 수열을 만들되, 수열의 값들을 합해준다
//                answer[i] = {max(answer[j].first + 1, answer[i].first), max(answer[j].second + su[i], answer[i].second)};
//            }
//
//            // 가장 긴 수열이 가장 큰 합이 안될 수도 있음을 유의해야함
//            if (answer < answer[i].second)
//                answer = answer[i].second;
//        }
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/04/20.
////
//
