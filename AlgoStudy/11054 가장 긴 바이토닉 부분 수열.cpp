//#include <iostream>
//#include <vector>
//
//using namespace std;
//int n, su[1002], dp;
//int udp[1002], ddp[1002];
//
//int main() {
//
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> su[i];
//    }
//
////  왼쪽 부터 증가하는 수열 만들기
//    for (int i = 1; i <= n; i++) {
//        udp[i] = 1;
//        for (int j = 1; j < i; j++) {
//            if (su[i] > su[j])
//                udp[i] = max(udp[j] + 1, udp[i]);
//        }
//    }
//
////  오른쪽 부터 증가하는 수열 만들기
////  but 왼쪽에서 부터 감소하는 수열을 만들면 안된다! 왼쪽에서 부터 감소 수열이라 하면 그림을 그려봐도 말이 안됌
////  양 쪽의 끝에서 부터 만나는 지점을 합쳐야 하기 때문에 조심!
//    for (int i = n; i >= 1; i--) {
//        ddp[i] = 1;
//        for (int j = n; j > i; j--) {
//            if (su[i] > su[j])
//                ddp[i] = max(ddp[j] + 1, ddp[i]);
//        }
//    }
//
//    // 같은 인덱스의 합에서 가장 큰 것 - 1, -1을 해줘야 중복을 뺄 수 있다.
//    for (int i = 1; i <= n; i++)
//        dp = max(dp, udp[i] + ddp[i] - 1);
//
//    cout << dp << endl;
//}
////
//// Created by Mac2 on 2021/04/20.
////
//
//
