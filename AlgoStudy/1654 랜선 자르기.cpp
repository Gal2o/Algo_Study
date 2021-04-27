//#include <iostream>
//#include <math.h>
//
//using namespace std;
//#define mx 1000001
//
//int k, n;
//long long lan[mx];
//
//int main() {
//    cin >> k >> n;
//
//    for (int i = 1; i <= k; i++) {
//        scanf("%d", &lan[i]);
//    }
//
//    long long start = 1, end = pow(2, 32) - 1; // 최대 값 설정에서 계속 틀림 ㅡㅡ
//
//    while (start < end - 1) {
//        long long res = 0, mid = (start + end) / 2;
//
//        for (int i = 1; i <= k; i++) {
//            res += (lan[i] / mid);
//        }
//
//        if (res < n) // 최대값이 나오도록 조건을 잘 걸어줘야 한다. min = 192, max = 200
//            end = mid;
//        else
//            start = mid;
//    }
//
//    cout << end - 1 << endl;
//}
//
////
//// Created by Mac2 on 2021/04/23.
////
//
