//#include <bits/stdc++.h>
//
//using namespace std;
//
//int t, n, m;
//long long answer;
//int arr[1001], brr[1001];
//vector<int> adp, bdp;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> t;
//
//    cin >> n;
//    // arr에 n만큼 배열 입력 받기
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    // arr의 부분합들을 모두 adp에 저장한다
//    for (int i = 0; i < n; ++i) {
//        int sum = arr[i];
//
//        adp.push_back(sum);
//        for (int j = i + 1; j < n; j++) {
//            sum += arr[j];
//            adp.push_back(sum);
//        }
//    }
//
//    cin >> m;
//    // m도 마찬가지
//    for (int i = 0; i < m; i++)
//        cin >> brr[i];
//
//    for (int i = 0; i < m; ++i) {
//        int sum = brr[i];
//
//        bdp.push_back(sum);
//        for (int j = i + 1; j < m; j++) {
//            sum += brr[j];
//            bdp.push_back(sum);
//        }
//    }
//
//    sort(adp.begin(), adp.end());
//    sort(bdp.begin(), bdp.end());
//
//    // adp를 돌면서
//    for (auto i : adp) {
//        // t - a의 부분합
//        int val = t - i;
//
//        // 일치하는 부분을 위아래로 잘라서
//        // 위치 찾기
//        // lower,upper_bound는 시작이 1이다
//        // lower_bound : val 이상이 처음 나오는 위치
//        // upper_bound : val 초과한 위치
//        auto s = lower_bound(bdp.begin(), bdp.end(), val);
//        auto e = upper_bound(bdp.begin(), bdp.end(), val);
//
//        // 그 사이 갯수를 더해주면 된다
//        answer += (e - s);
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/18.
////
//
