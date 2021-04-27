//#include <iostream>
//#include <queue>
//
//using namespace std;
//int n, k;
//int chk[100001];
//
//int main() {
//    cin >> n >> k;
//
//    queue<int> q;
//    q.push(n);
//    chk[n] = 1;
//
//    // 가장 빨리 도착한 시간 탈출!
//    while (!q.empty()) {
//        int f = q.front();
//        q.pop();
//
//        if (f == k) {
//            cout << chk[f] - 1 << endl;
//            break;
//        }
//
//        if (f - 1 >= 0 && chk[f - 1] == 0)
//            chk[f - 1] = chk[f] + 1, q.push(f - 1);
//
//        if (f + 1 <= 100000 && chk[f + 1] == 0)
//            chk[f + 1] = chk[f] + 1, q.push(f + 1);
//
//        if (2 * f <= 100000 && chk[2 * f] == 0)
//            chk[2 * f] = chk[f] + 1, q.push(f * 2);
//    }
//}
////
//// Created by Mac2 on 2021/04/26.
////
//
