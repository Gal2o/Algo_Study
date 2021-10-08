//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, t, arr[13], chk[13], answer;
//
//void dfs(int cnt) {
//    if (cnt == n - 1) {
//        // 0이 왼쪽, 1이 오른쪽
//        // 애초에 배열은 오름차순으로 정렬되어 있다.
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                // 방향이 서로 다른데,
//                if (chk[i] != chk[j]) {
//                    // 두 개의 공의 거리 <= 시간*2 이면 충돌
//                    if (abs(arr[i] - arr[j]) <= t * 2)
//                        answer++;
//                }
//            }
//        }
//        return;
//    }
//
//    // 방향을 왼쪽 or 오른쪽
//    for (int i = 0; i < 2; i++)
//        chk[cnt] = i, dfs(cnt + 1);
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; ++i)
//        cin >> arr[i];
//
//    cin >> t;
//
//    sort(arr, arr + n);
//    dfs(0);
//
//    // 분모는 2^n 승
//    cout << (double) answer / (1 << n);
//}
////
//// Created by Mac2 on 2021/10/05.
////
//
