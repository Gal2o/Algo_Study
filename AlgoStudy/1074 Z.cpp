//#include <iostream>
//#include <math.h>
//
//using namespace std;
//int n, r, c, cnt;
//
//int main() {
//    cin >> n >> r >> c;
//
//    int size = pow(2, n);
//    int y = size / 2, x = size / 2; // 시작은 정가운데를 기준으로
//
//    // n번 횟수만큼 돌면서 사분면을 찾으면 된다.
//    while (n--) {
//        int t = pow(2, n) / 2; // n이 감소하면서 사분면을 좁혀 들어가면서 찾는다.
//        int s = pow(4, n); // 한 사분면을 건너 뛰면 16개 칸 더해주면됨.
//
//        cout << y << ' ' << x << ' ' << t << ' ' << s << ' ' << endl;
//        if (r < y && c < x) // 1사분면
//            x -= t, y -= t;
//        else if (r < y && c >= x) // 2사분면
//            x += t, y -= t, cnt += s;
//        else if (r >= y && c < x) // 3사분면
//            x -= t, y += t, cnt += s * 2;
//        else // 4사분면
//            x += t, y += t, cnt += s * 3;
//    }
//
//    cout << cnt << endl;
//}
////
//// Created by Mac2 on 2021/04/24.
////
//
