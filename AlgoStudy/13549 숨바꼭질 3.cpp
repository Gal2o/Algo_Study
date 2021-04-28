//#include <iostream>
//#include <queue>
//
//#define mx 100001
//
//using namespace std;
//int n, k, chk[mx], fin = 1e9;
//
//int main() {
//    cin >> n >> k;
//
//    queue<pair<int, int>> q;
//    q.push({n, 0});
//
//    while (!q.empty()) {
//        int fvalue = q.front().first;
//        int ftm = q.front().second;
//
//        // 같은 depth 에서 더 작은 ftm이 나올 수 있기 때문에
//        // pop() 이후에 chk를 하고, 최소 값 저장후, continue로 그 이후 작업을 안하게 한다.
//        q.pop();
//        chk[fvalue] = 1;
//
//        if (fvalue == k) {
//            if (fin > ftm)
//                fin = ftm;
//            continue;
//        }
//
//        for (int i = 0; i < 3; i++) {
//            int v;
//
//            i == 0 ? v = fvalue - 1 : i == 1 ? v = fvalue + 1 : v = fvalue * 2;
//
//            if (v < 0 || v > mx - 1 || chk[v])
//                continue;
//
//            if (i == 2)
//                q.push({v, ftm});
//            else
//                q.push({v, ftm + 1});
//        }
//    }
//
//    cout << fin << endl;
//}
//
////
//// Created by Mac2 on 2021/04/27.
////
//
