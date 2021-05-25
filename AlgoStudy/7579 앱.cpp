//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, m, total;
//int mem[101], esc[101];
//int dp[10001];
//// n,m 으로 하면 100 * 10000000 이므로 메모리 터진다.
//// n,c 로 최대 비용을 찾는다.
//
//// 냅색 기초 풀어보고 다시 풀어보기.
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++)
//        cin >> mem[i];
//
//    for (int i = 1; i <= n; i++)
//        cin >> esc[i], total += esc[i];
//
//    // i는 1 ~ n 까지
//    for (int i = 1; i <= n; i++)
//        for (int j = total; j >= esc[i]; j--) // 총 비용 ~ i번째 비용까지
//            dp[j] = max(dp[j], dp[j - esc[i]] + mem[i]); // 최대 메모리 값
//
//    int cnt = 0;
//    for (int i = 0; i <= total; i++) // 비용이 0부터 total 까지 일 때,
//        if (dp[i] < m) // m 보다 작은 최대 메모리 값의 갯수
//            cnt++;
//
//    cout << cnt << endl;
//}
////
//// Created by Mac2 on 2021/05/21.
////
//
