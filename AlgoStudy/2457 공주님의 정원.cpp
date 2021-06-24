//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//int n;
//vector<pl> v;
//
//int main() {
//
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a, b, c, d;
//        cin >> a >> b >> c >> d;
//
//        v.push_back({a * 100 + b, c * 100 + d});
//    }
//
//    sort(v.begin(), v.end());
//
//    // 시작은 3월 1일 부터,
//    // mx 는 가장 오래 피는 꽃의 날짜
//    int start = 301, idx = 0, mx = 0, ans = 0;
//
//    while (start <= 1130) {
//
//        // idx ~ n 까지 돌면서 start > v[i].first && 가장 최대 길이 구하고 갱신
//        for (int i = idx; i < n; i++) {
//
//            // 피는 날짜가 start 보다 크다면 바로 종료 (피는 날짜 작은 순으로 정렬)
//            if (start < v[i].first)
//                break;
//
//            // 지는 날짜가 mx 보다 크다면 idx, mx 갱신
//            if (v[i].second > mx)
//                mx = v[i].second, idx = i;
//        }
//
//        // mx를 start와 같도록 갱신했는데 <= 1130 동안 갱신 한 적이 없다면 없음.
//        if (mx == start) {
//            cout << 0;
//            return 0;
//        } else // 피는 날짜를 mx로 두고 다시 탐색
//            start = mx, ans++;
//    }
//    /*
//     * 갱신 순서.
//     * start = 301, mx = 0, idx = 0 으로 시작
//     * 첫번째 for 문에서
//     * 301 > 101 이고 531 > 0 이므로 mx = 531, idx = 0,
//     * 301 > 101 이고 630 > 531 이므로 mx = 630, idx = 1;
//     * 301 < 515 이므로 break
//     * mx = 630 != start = 301 이므로 start = 630, ans++ 하고 다시 돌기
//     *
//     * start = 630, mx = 630, idx = 1 으로 시작
//     * 두번째 for 문에서
//     * 630 > 515 이고 831 > 630 이므로 mx = 831, idx = 2,
//     * 630 > 610 이고 1210 > 831 이므로 mx = 1210, idx = 3;
//     * mx = 1210 != start = 630 이므로 start = 1210, ans++ 하고 다시 돌기
//     * 1130 < 1210 이므로 while 탈출
//     */
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/21.
////
//
