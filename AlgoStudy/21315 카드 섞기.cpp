//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n;
//deque<int> init, q;
//vector<int> answer;
//bool flag;
//
//// init == q 면 정답
//void dfs(int cnt) {
//    if (flag)
//        return;
//
//    if (cnt == 2) {
//        for (int i = 0; i < init.size(); ++i) {
//            if (init[i] != q[i])
//                return;
//        }
//
//        flag = true;
//        return;
//    }
//
//    deque<int> tmp = init;
//
//    // k의 범위는 1 부터, s^k가 n미만,
//    for (int i = 1; pow(2, i) < n; ++i) {
//        // 첫 번때 단계,
//        int first = (int) pow(2, i);
//
//        // 2^k 만큼 카드 올린다.
//        for (int j = 0; j < first; ++j) {
//            init.emplace_front(init.back());
//            init.pop_back();
//        }
//
//        // 2 ~ k + 1 단계
//        for (int j = 2; j <= i + 1; ++j) {
//            int up = i - j + 1;
//            int cd = (int) pow(2, up);
//
//            deque<int> sp;
//            // 직전 올렸던 카드들을 sp따로 저장해서
//            for (int k = 0; k < first; ++k) {
//                sp.emplace_back(init.front());
//                init.pop_front();
//            }
//
//            // sp에서 밑에서 부터 2 ^ (k - i + 1) 개를 위로 올린다.
//            for (int k = 0; k < cd; ++k) {
//                sp.emplace_front(sp.back());
//                sp.pop_back();
//            }
//
//            // 다시 패에 합쳐주기
//            while (!sp.empty()) {
//                init.emplace_front(sp.back());
//                sp.pop_back();
//            }
//            // 직전 카드를 갱신한다.
//            first = cd;
//        }
//
//        answer.push_back(i);
//        dfs(cnt + 1);
//
//        if (flag)
//            return;
//
//        answer.pop_back(), init = tmp;
//    }
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        int a;
//        cin >> a;
//        init.emplace_back(i + 1);
//        q.emplace_back(a);
//    }
//
//    // k는 9까지 가능
//    dfs(0);
//
//    for (auto i: answer)
//        cout << i << ' ';
//}
//// Created on 2021/11/04.