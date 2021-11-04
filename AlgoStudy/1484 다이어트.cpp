//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int g;
//
//int main() {
//    cin >> g;
//
//    bool flag = false;
//    int st = 1, ed = 2;
//
//    while (st < ed) {
//        // 현재 몸무게^2 - 기억 몸무게^2
//        int hap = ed * ed - st * st;
//
//        // 만약 g와 같다면 출력 후,
//        if (hap == g) {
//            cout << ed << endl;
//            st++, ed++, flag = true;
//        } else if (hap < g) // 작으면 현재 몸무게 증가
//            ed++;
//        else // 크면 기억 몸무게 증가
//            st++;
//    }
//
//    if (!flag)
//        cout << -1 << endl;
//}
//// Created on 2021/11/03.