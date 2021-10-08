//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef unsigned long long ll;
//
//int n;
//ll arr[101], dp[101][21];
//
//ll dfs(int idx, ll hap) {
//    // 도중에 음수 또는 20이 넘어가면 안되므로 예외 처리
//    if (hap < 0 || hap > 20)
//        return 0;
//
//    // idx == n && hap == arr[idx] 이면 틀린다
//    // 위 코드는 만약 값이 다르면, 현재 dp 값을 준다고 예상
//    // 마지막 값이 다르다면 0을 리턴해 줘야 한다.
//    if (idx == n) {
//        if (hap == arr[idx])
//            return 1;
//        else
//            return 0;
//    }
//
//    ll &cur = dp[idx][hap];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 0;
//
//    cur += dfs(idx + 1, hap + arr[idx])
//           + dfs(idx + 1, hap - arr[idx]);
//
//    return cur;
//}
//
//int main() {
//    fastio
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i)
//        cin >> arr[i];
//
//    memset(dp, -1, sizeof dp);
//
//    // 양수만 가능하다
//    // 그러므로 첫 수가 만약 0이면 덧셈도 0 이상 , 뺄셈도 0 이상이므로 틀림
//    // 1번째 수는 고정으로 박고 2번째 인덱스 부터 시작하자
//    cout << dfs(2, arr[1]) << endl;
//}
//// Created on 2021/10/08.