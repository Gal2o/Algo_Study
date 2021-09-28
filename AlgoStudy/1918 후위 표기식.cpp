//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//string ip;
//stack<char> op;
//string answer;
//
//int main() {
//    cin >> ip;
//
//    for (int i = 0; i < ip.size(); i++) {
//        cout << answer << endl;
//        // 알파벳은 바로 출력
//        if (ip[i] >= 'A' && ip[i] <= 'Z')
//            answer += ip[i];
//        else {
//            // 연산자
//            // 우선순위 '('  >  '*','/'  >  '+','-'  >  ')'
//            // 현재 연산자 우선순위 > top() 우선순위라면, push
//            // 현재 연산자 우선순위 < top() 우선순위라면, top()이 자기보다 낮은 우선순위까지 pop
//            if (ip[i] == '(') {
//                op.push(ip[i]);
//            } else if (ip[i] == '*' || ip[i] == '/') {
//                while (!op.empty() && (op.top() == '*' || op.top() == '/'))
//                    answer += op.top(), op.pop();
//
//                op.push(ip[i]);
//
//            } else if (ip[i] == '+' || ip[i] == '-') {
//                while (!op.empty() && op.top() != '(')
//                    answer += op.top(), op.pop();
//
//                op.push(ip[i]);
//
//            } else { // 현재 연산자 ')' 면, '(' 전까지 모두 빼고
//                while (!op.empty() && op.top() != '(')
//                    answer += op.top(), op.pop();
//
//                op.pop(); // '('도 빼주기 (괄호닫기)
//            }
//        }
//    }
//
//    // 남아있는 것 다 빼기
//    while (!op.empty())
//        answer += op.top(), op.pop();
//
//    cout << answer << endl;
//
//}
////
//// Created by Mac2 on 2021/09/24.
////
//
