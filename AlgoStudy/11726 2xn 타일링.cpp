//#include <iostream>
//using namespace std;
//#define mx 10007
//int n;
//int answer[1001];
//
//int main() {
//    cin >> n;
//
//    answer[1] = 1; // |
//    answer[2] = 2; // ||, =
//
//    // answer[3] => ||| , |= ,  =|
//    // answer[4] => |||| , == , ||= , =|| , |=|
//    // 2xn 직사각형 채우는 법 -> 2x(n-1) or 2x(n-2)
//    for(int i = 3; i <=n; i ++){
//        answer[i] = (answer[i - 2] + answer[i - 1]) % mx;
//    }
//
//    cout << answer[n] << endl;
//}
////
//// Created by Mac2 on 2021/04/19.
////
//
