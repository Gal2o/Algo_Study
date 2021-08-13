//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//int N, L;
//deque<pl> dq;
//
//// 슬라이딩 윈도우
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> N >> L;
//
//    for (int i = 1; i <= N; i++) {
//        int a;
//        cin >> a;
//
//        int left = i - L + 1;
//
//        // left 범위 보다 작아지면 pop_front()
//        if (!dq.empty() && dq.front().second < left)
//            dq.pop_front();
//
//        // dq.first = 값, second = 인덱스
//        // 맨 앞에 있는것이 가장 작고, 현재 dq.back()이 a보다 크면 꺼내고 a를 넣어서
//        // 오름차순 + 슬라이딩 윈도우로 dq에 넣는다
//        while (!dq.empty() && dq.back().first > a)
//            dq.pop_back();
//
//        dq.push_back({a, i});
//        cout << dq.front().first << ' ';
//    }
//}
////
//// Created by Mac2 on 2021/08/12.
////
//
