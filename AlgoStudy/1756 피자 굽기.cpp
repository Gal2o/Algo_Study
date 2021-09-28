//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 300001
//using namespace std;
//
//int d, n, pizza[mx], arr[mx];
//
//int main() {
//    cin >> d >> n;
//
//    for (int i = 0; i < d; ++i) {
//        cin >> arr[i];
//
//        // 오븐 크기 재조정 하기
//        if (i > 0) {
//            // 위의 오븐 크기 < 아래 오븐 크기 라면,
//            // 위 오븐 크기로 맞춰준다
//            if (arr[i - 1] < arr[i])
//                arr[i] = arr[i - 1];
//        }
//    }
//
//    for (int i = 0; i < n; ++i)
//        cin >> pizza[i];
//
//    // 5 6 4 3 6 2 3
//    // -> 5 5 4 3 3 2 2
//
//    int idx = 0, answer;
//
//    // 뒤에서 부터 검사를 하면서
//    // 피자 반죽 <= 오븐 크기 라면,
//    // 갯수(idx) 증가, answer 갱신
//    for (int i = d - 1; i >= 0; i--) {
//        if (pizza[idx] <= arr[i])
//            idx++, answer = i;
//
//        if (idx == n)
//            break;
//    }
//
//    // 피자 반죽이 다 들어갔으면,
//    // 0 ~ n-1 이므로 answer + 1
//    if (idx == n)
//        cout << answer + 1 << endl;
//    else
//        cout << 0 << endl;
//}
////
//// Created by Mac2 on 2021/09/14.
////
//
