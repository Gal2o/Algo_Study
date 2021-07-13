//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//typedef long long ll;
//int n;
//ll answer;
//vector<pl> v;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a, b;
//
//        cin >> a >> b;
//        v.push_back({a, b});
//    }
//
//    sort(v.begin(), v.end());
//
//    // 첫 시작은 v[0] 시작점, 끝점
//    int minW = v[0].first, maxW = v[0].second;
//
//    // 1부터 끝까지
//    for (int i = 1; i < v.size(); i++) {
//        int s = v[i].first, e = v[i].second;
//
//        // 1    3
//        //    2     6
//        // 처럼 기존 저장되어있는 끝점보다 다음 시작점이 작거나 같고, 크거나 같으면
//        // maxW 갱신
//        if (maxW >= s && maxW <= e)
//            maxW = max(e, maxW);
//
//        // 1   3
//        //       4    5
//        // 또는
//        // 1   3
//        //     3     5
//        // maxW 가 다음 시작점 보다 작거나 같고, 다음 끝점이 크다면
//        // maxW - minW 만큼 answer 에 더해주고
//        // minW, maxW 갱신
//        else if (maxW <= s && maxW < e) {
//            answer += (ll) (maxW - minW);
//            minW = s, maxW = e;
//        }
//    }
//
//    // 만약 else if에 v의 마지막이 걸렸으면, 더해주지 않았으므로,
//    // maxW - minW 를 더해준다.
//    answer += (maxW - minW);
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/08.
////
//
