//#include <bits/stdc++.h>
//
//using namespace std;
//int n, t, m, p;
//string answer;
//
//int main() {
//    n = 2, t = 4, m = 2, p = 1;
//
//    int idx = 1, st = 0;
//    while (1) {
//        // answer 사이즈가 t보다 커지면 break
//        if (answer.size() > t)
//            break;
//
//        vector<int> v;
//
//        int su = st;
//        // 진법 변환 하기
//        while (1) {
//            v.push_back(su % n);
//            su /= n;
//
//            if (su == 0) {
//                break;
//            }
//        }
//
//        // 역순으로 바꿔줘야 함
//        reverse(v.begin(), v.end());
//
//        for (auto i : v) {
//            if (idx == p) {
//                // 10 이상이면 A~F 로 바꾸기
//                if (i >= 10) {
//                    char temp = i - 10 + 'A';
//                    answer += temp;
//                } else {
//                    answer += to_string(i);
//                }
//            }
//
//            // 다음 사람
//            idx++;
//            // 다음 사람이 m보다 커지면 1부터 다시 돌리기
//            if (idx > m)
//                idx = 1;
//        }
//
//        // 숫자 증가
//        st++;
//    }
//
//    // 0부터 t 까지만 잘라내기
//    answer = answer.substr(0, t);
//    for (auto i : answer)
//        cout << i;
//}
////
//// Created by Mac2 on 2021/07/27.
////
//
