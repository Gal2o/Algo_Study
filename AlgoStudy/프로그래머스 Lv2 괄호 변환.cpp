//#include <bits/stdc++.h>
//
//using namespace std;
//string p = "()))((()";
//string answer;
//
//bool avail(string s) {
//    stack<char> st;
//
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == '(') {
//            st.push(s[i]);
//        } else {
//            if (st.empty())
//                continue;
//
//            if (st.top() == '(')
//                st.pop();
//            else
//                st.push(s[i]);
//        }
//    }
//
//    if (st.size() != 0)
//        return false;
//    else
//        return true;
//}
//
//string dfs(string s) {
//    if (s.empty())
//        return s;
//
//    if (avail(s))
//        return s;
//
//    string u, v;
//    int s1 = 0, s2 = 0;
//
//    // 균형잡힌 문자열로 자르기
//    for (int i = 0; i < s.size(); i++) {
//        s[i] == '(' ? s1++ : s2++;
//
//        if (s1 != 0 && s2 != 0 && s1 == s2) {
//            u = s.substr(0, i + 1);
//            v = s.substr(i + 1, s.size());
//            break;
//        }
//    }
//
//    // 3. 문자열 u가 "올바른 괄호 문자열" 이라면 v는 1단계부터 시작
//    // 3-1. 수행한 결과 문자열을 u에 붙힌다.
//    if (avail(u)) {
//        u += dfs(v);
//        return u;
//    } else {
//        // 4. 문자열 u가 "올바른 괄호 문자열"이 아니라면
//        // 4-1. 빈 문자열에 '(' 를 붙힌다.
//        string res = "(";
//        // 4-2. 문자열 v에 대해 1단계부터 작업
//        res += dfs(v);
//        // 4-3. ')'를 다시 붙힌다.
//        res += ")";
//
//        // 4-4. u의 첫번째, 마지막 문자를 제거하고 나머지 문자열을 뒤집어서 뒤에 붙힌다.
//        if (u.size() > 2) {
//            for (int i = 1; i < u.size() - 1; i++) {
//                u[i] == ')' ? res += '(' : res += ')';
//            }
//        }
//
//        return res;
//    }
//}
//
//int main() {
//    answer = dfs(p);
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/28.
////
//
