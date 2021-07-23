//#include <bits/stdc++.h>
//
//using namespace std;
//
//int T, N, a;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> T;
//
//    while (T--) {
//        cin >> N;
//
//        vector<int> answer;
//        multiset<int> s;
//
//        // 멀티 셋으로 정렬되어 있는 것 중앙값 뽑아내기
//        for (int i = 1; i <= N; i++) {
//            cin >> a;
//
//            s.insert(a);
//
//            // 홀수 일 때,
//            if (i % 2) {
//                auto it = s.begin();
//
//                for (int i = 0; i < s.size() / 2; i++)
//                    it++;
//
//                answer.push_back(*it);
//            }
//        }
//
//        cout << answer.size() << "\n";
//        for (int i = 1; i <= answer.size(); i++) {
//            cout << answer[i - 1] << ' ';
//
//            if (i % 10 == 0)
//                cout << "\n";
//        }
//        cout << "\n";
//    }
//}
////
//// Created by Mac2 on 2021/07/23.
////
//
