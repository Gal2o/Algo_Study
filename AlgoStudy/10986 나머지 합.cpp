//#include <bits/stdc++.h>
//
//#define mx 1000001
//using namespace std;
//typedef long long ll;
//
//int n, m;
//ll sum[mx], cnt[1001], answer;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        ll temp;
//        cin >> temp;
//
//        // 모듈러 연산의 성질
//        // (A + B) % C == (A%C + B%C) % C
//        // 덧셈, 뺄셈, 곱셈 모두 성립한다.
//        sum[i] = (sum[i - 1] + temp) % m;
//        cnt[sum[i]]++;
//    }
//
//    for (int i = 0; i < m; i++)
//        cout << cnt[i] << ' ';
//    cout << endl;
//
//    answer = cnt[0];
//    for (int i = 0; i < m; i++) {
//        ll temp = cnt[i];
//        // 조합 사용 nC2
//        answer += temp * (temp - 1) / 2;
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/03.
////
//
