//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//typedef unsigned long long ll;
//int n, m;
//
//vector<pl> v;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        // 반대로 가는 선분만 골라서,
//        // 작은 수, 큰 수 로 바꿔서 v에 넣어준다.
//        if (a > b)
//            v.push_back({b, a});
//    }
//
//    // 오름차 순으로 정렬
//    sort(v.begin(), v.end());
//
//    ll s = -1, e = -1;
//
//    // 0부터 m까지는 무조건 가야 하기 때문에 총합은 m부터 시작
//    ll answer = m;
//
//    // 선긋기 하기
//    for (int i = 0; i < v.size(); i++) {
//        ll p1 = v[i].first, p2 = v[i].second;
//
//        if (i == 0) {
//            s = p1, e = p2;
//            continue;
//        }
//
//        if (p1 <= e)
//            e = max(e, p2);
//        else {
//            // 반대로 가는 선분을 최대한 길게 하고,
//            // 반대로 온 만큼 제자리로 가려면 그만큼 더해줘야 하므로
//            // X2 이다.
//            answer += 2 * (e - s);
//
//            s = p1, e = p2;
//        }
//    }
//
//    // 마지막 선분 더해주기
//    answer += 2 * (e - s);
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/08.
////
//
