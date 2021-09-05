//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, tower;
//stack<pl> st;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i) {
//        cin >> tower;
//
//        // stack = { 탑의 높이, index }
//        // 지금 들어올 탑의 높이 > 스택 top()의 탑 높이라면,
//        // 지금 들어올 탑보다 높이가 작은 것은 다 빼내기
//        while (!st.empty() && tower > st.top().first)
//            st.pop();
//
//        // 스택이 만약 비어있다?
//        // 지금 들어올 탑의 높이가 가장 크다
//        // 탑 높이, 인덱스 넣어주고
//        // 신호를 받을 탑이 없으므로 0 출력
//        if (st.empty()) {
//            st.push({tower, i});
//            cout << 0 << ' ';
//        } else {
//            // 만약 스택안에 나보다 큰 타워가 있다면,
//            // 나보다 큰 높이의 타워의 인덱스 출력하고
//            // 다음 더 작은 타워를 위해 현재 탑 높이, 인덱스 저장
//            cout << st.top().second << ' ';
//            st.push({tower, i});
//        }
//    }
//}
////
//// Created by Mac2 on 2021/08/30.
////
//
