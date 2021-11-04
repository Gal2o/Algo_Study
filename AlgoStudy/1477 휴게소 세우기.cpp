//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, m, l;
//int answer;
//vector<int> rest;
//
//// 이분 탐색은 알았지만, 어떻게 풀어야 할 지 감이 안왔던 문제
//int main() {
//    cin >> n >> m >> l;
//
//    for (int i = 0; i < n; ++i) {
//        int a;
//        cin >> a;
//        rest.emplace_back(a);
//    }
//
//    // 거리의 끝은 0, l 이므로 넣어주고 휴게소와 정렬
//    rest.emplace_back(0), rest.emplace_back(l);
//    sort(rest.begin(), rest.end());
//
//    int st = 1, ed = l - 1;
//
//    // mid = 거리(l) 를 기준으로 이분탐색
//    while (st < ed) {
//        int mid = (st + ed) / 2;
//        int cnt = 0;
//
//        // 각 구간 별, 길이를 구한다.
//        // 구간 별 길이 / 이분 탐색한 거리로 휴게소 갯수를 증가
//        for (int i = 0; i < rest.size() - 1; i++) {
//            int dist = rest[i + 1] - rest[i];
//
//            cnt += dist / mid;
//
//            // 만약 나누어 떨어진다면, 이미 휴게소가 있는 것이므로 갯수 --
//            if (!(dist % mid))
//                cnt--;
//        }
//
//        if (cnt > m)
//            st = mid + 1;
//        else
//            ed = mid;
//    }
//
//    cout << st << endl;
//}
//// Created on 2021/11/03.