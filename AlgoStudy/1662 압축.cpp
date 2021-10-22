//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<char, int> pl;
//
//string str;
//stack<pl> st;
//int answer;
//
//int main() {
//    cin >> str;
//
//    for (auto i: str) {
//        // 숫자 or (   => push
//        if (i >= '0' && i <= '9' || i == '(')
//            st.emplace(i, 1); // 처음 입력 받았을 때는, 모두 길이가 1
//        else {
//            // 닫는 괄호 ) 면,
//            // 괄호 안의 문자열 길이 구하기
//            int tmp = 0;
//
//            while (true) {
//                // '(' 괄호 닫을 수 있으면,
//                if (st.top().first == '(') {
//                    st.pop();
//
//                    // 무조건 바로 앞은 곱할 숫자
//                    int r = st.top().first - '0';
//
//                    // 지금까지 더한 문자열 길이에 곱해주기
//                    st.top().second = r * tmp;
//                    break;
//                }
//
//                // '(' 만나기 전까지 문자들의 길이 더하기
//                tmp += st.top().second;
//                st.pop();
//            }
//        }
//    }
//
//    while (!st.empty())
//        answer += st.top().second, st.pop();
//
//    cout << answer << endl;
//}
//// Created on 2021/10/21.