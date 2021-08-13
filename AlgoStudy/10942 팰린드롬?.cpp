#include <bits/stdc++.h>

#define mx 2001
using namespace std;

int n, m, a, b;
int arr[mx], dp[mx][mx];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // dp[x][y] 는 x에서 y까지 범위가 펠린드롬인지 확인하기
    for (int i = 1; i <= n; i++) {
        dp[i][i] = 1; // 길이 1일 때 초기화

        // 길이 2일때 초기화
        if (arr[i] == arr[i - 1]) // 뒤에 있는 숫자와 같은 수면 1, 아니면 0
            dp[i - 1][i] = 1;
    }

    // 길이 3부터 시작
    for (int i = 2; i < n; i++) {
        for (int j = 1; j <= n - i; j++) { // 시작은 1부터, n에서 i(길이) 만큼 뺀 것 까지
            int k = i + j; // 범위의 끝

            // 처음과 끝의 arr 값이 같고, 그 사이가 펠린드롬이라면 성립한다.
            if (arr[j] == arr[k] && dp[j + 1][k - 1] == 1)
                dp[j][k] = 1;
        }
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;

        cout << dp[a][b] << "\n";
    }
}
//
// Created by Mac2 on 2021/07/21.
//

