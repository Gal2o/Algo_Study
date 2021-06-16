//#include <bits/stdc++.h>
//
//#define mx 100005
//using namespace std;
//
//int n, sq[mx];
//
//// 분할 정복
//int divide(int s, int e) {
//    if (s == e) // 막대 하나 까지 쪼갰다면,
//        return sq[s];
//
//    // 양쪽으로 나눠서 둘 중, 큰 넓이를 반환한다. (분할 정복)
//    int mid = (s + e) / 2;
//    int ret = max(divide(s, mid), divide(mid + 1, e));
//
//    // 둘 중 골라낸 큰 넓이와, 가운데 가로 2인 넓이를 비교한다.
//    int l = mid, r = mid + 1; // 가운데에 두 사각형
//
//    // 높이는 당연히 낮은 사각형이 높이
//    int h = min(sq[l], sq[r]);
//    ret = max(ret, h * (r - l + 1));
//
//    // s < l, r < e  s,e 의 범위 안에서 직사각형 확장
//    while (l > s || r < e) {
//        if (r < e && (l == s || sq[l - 1] < sq[r + 1])) // 오른쪽으로 확장
//            h = min(h, sq[r + 1]), r++;
//        else                                            // 왼쪽으로 확장
//            h = min(h, sq[l - 1]), l--;
//
//        // 기존 넓은 직사각형과 범위가 확장 된 직사각형 다시 비교
//        ret = max(ret, h * (r - l + 1));
//    }
//    return ret;
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> sq[i];
//
//    cout << divide(1, n);
//}
////
//// Created by Mac2 on 2021/05/26.
////
//
