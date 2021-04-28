//#include <iostream>
//#include <queue>
//
//using namespace std;
//priority_queue<long long> q;
//int n;
//long long x;
//
//// 우선순위 큐 쓰는건 맞았지만, n = 100000 만큼 돌 떄, cin, cout 시간 초과 발생
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &x);
//
//        if (x != 0) {
//            q.push(-x);
//        } else {
//            if (q.empty())
//                printf("%d\n", 0);
//            else {
//                printf("%lld\n", -q.top());
//                q.pop();
//            }
//        }
//    }
//}
////
//// Created by Mac2 on 2021/04/28.
////
//
//
