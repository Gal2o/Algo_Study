//#include <bits/stdc++.h>
//
//#define mx 300000
//
//using namespace std;
//typedef long long ll;
//
//int n, k;
//string name[mx];
//int duple[21]; // 이름 길이 갯수 체크
//
//// 상,하로 슬라이딩 윈도우
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> k;
//
//    for (int i = 0; i < n; i++)
//        cin >> name[i];
//
//    // 정답의 갯수는 최대 N = 300000, 1 <= K <= N,
//    // N * N / 2 이므로 int 범위 넘어감
//    ll cnt = 0;
//
//    // 처음 슬라이딩 윈도우 초기화
//    // 0번째부터 k까지 길이의 갯수 체크
//    // 0번째 이름의 길이가 2 이상 -> 좋은 친구가 있다.
//    for (int i = 0; i <= k; i++)
//        duple[name[i].size()]++;
//
//    // 본인 제외 하고 cnt에 넣어줌
//    if (duple[name[0].size()] > 1)
//        cnt += duple[name[0].size()] - 1;
//
//    // 그다음 1 부터 n - 1 미만 까지, n - 1 번째는 본인만 있기에 친구 구할 수 없음
//    for (int i = 1; i < n - 1; i++) {
//        // i - 1 번째 이름의 길이 갯수 -1 하고
//        duple[name[i - 1].size()]--;
//        int next = i + k;
//
//        // 만약 새로 들어올 이름의 인덱스가 n - 1 을 초과 하면
//        if (next > n - 1) {
//            // 지금 내 이름의 길이의 갯수가 2 이상이다 ->  좋은 친구가 있다.
//            // 본인 제외하고 cnt에 더해주기
//            if (duple[name[i].size()] > 1)
//                cnt += duple[name[i].size()] - 1;
//        } else {
//            // 새로 들어올 이름의 인덱스가 n - 1 보다 작다면,
//            // 새로 들어올 이름의 길이 갯수 +1
//            duple[name[next].size()]++;
//
//            // (본인의 이름의 길이의 누적되어 있는 값) + 1 이 2 이상이면 -> 좋은친구 있음
//            // 본인 제외하고 cnt에 더해주기
//            if (duple[name[i].size()] > 1)
//                cnt += duple[name[i].size()] - 1;
//        }
//    }
//
//    cout << cnt << endl;
//}
////
//// Created by Mac2 on 2021/06/24.
////
//
