//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//int n, answer, arr[10001];
//
//// 색을 바꾼 위치 [idx] 부터 위 아래로 확장하면서 팡!
//int cal(int idx) {
//    int u = idx, d = idx, res = n;
//
//    while (u >= 0 && d < n && arr[u] == arr[d]) {
//        int cnt = 0, tcolor = arr[u];
//
//        // 처음 시작한 위치에서는 2개를 세고 시작하므로
//        // cnt를 -1로
//        // 팡! 후에는 정상적으로 0부터 세기
//        if (idx == u && idx == d)
//            cnt = -1;
//
//        while (u >= 0 && arr[u] == tcolor) {
//            u--;
//            cnt++;
//        }
//
//        while (d < n && arr[d] == tcolor) {
//            d++;
//            cnt++;
//        }
//
//        // 팡! 이 존재하면 터트리고 다시 찾기
//        if (cnt >= 4) {
//            res -= cnt;
//            continue;
//        }
//
//        // 만약 터지는게 없다면 break
//        break;
//    }
//
//    // 남은 갯수를 리턴해준다
//    return res;
//}
//
//int main() {
//    fastio
//
//    cin >> n;
//    answer = n;
//
//    for (int i = 0; i < n; ++i)
//        cin >> arr[i];
//
//    for (int i = 0; i < n; i++) {
//        int color = arr[i];
//
//        for (int j = 1; j <= 3; j++) {
//            // 같은 색을 4개 이상 주지 않으므로,
//            // 원래 주어진 색을 제외하고 바꾸기
//            if (color != j) {
//                arr[i] = j;
//
//                // answer의 최대 값은 n
//                answer = min(answer, cal(i));
//            }
//        }
//
//        arr[i] = color;
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/09/15.
////
//
