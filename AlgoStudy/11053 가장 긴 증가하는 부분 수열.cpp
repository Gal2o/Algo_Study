//#include <iostream>
//
//using namespace std;
//int n, answer;
//int su[1001], answer[1001];
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> su[i];
//
//    for (int i = 1; i <= n; i++) {
//        answer[i] = 1;
//        for (int j = 0; j < i; j++) {
//            if (su[j] < su[i])
//                answer[i] = max(answer[j] + 1, answer[i]);
//        }
//
//        if(answer[i] > answer)
//            answer = answer[i];
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/04/20.
////
//
