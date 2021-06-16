//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//
//ll n, a, b, res;
//int k, q;
//
//int main() {
//    cin >> n >> k >> q;
//
//    for (int i = 0; i < q; i++) {
//        scanf("%lld %lld", &a, &b);
//
//        res = 0;
//
//        // k가 1이면 그냥 일직선 이므로 노드와 노드의 차이만 해주면 된다.
//        if (k == 1) {
//            printf("%lld\n", llabs(a - b));
//            continue;
//        }
//
//        while (1) {
//            if (a == b) {
//                printf("%lld\n", res);
//                break;
//            }
//
//            // 노드 레벨 맞춰주기 & 조상 찾기
//            ll tmp = max(a, b);
//            a = min(a, b);
//            /*
//             * K진 트리에서 조상을 찾는 공식 P = (NODE - 2) / K + 1
//             */
//            b = (tmp - 2) / k + 1;
//            res++;
//        }
//    }
//}
////
//// Created by Mac2 on 2021/05/28.
////
//
