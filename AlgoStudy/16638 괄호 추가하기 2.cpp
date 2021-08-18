//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, bool> pl;
//int n, answer = -987654321;
//vector<int> su;
//vector<char> op;
//
//// 총 계산 곱셈 부터
//void DFS(int idx, vector<int> r) {
//    // 인덱스가 숫자 배열 끝이면,
//    if (idx == su.size()) {
//        vector<int> s = su;
//        vector<char> p = op;
//
//        // 괄호 제거
//        for (int i = 0; i < r.size(); i++) {
//            if (r[i] == 2) {
//                // su 배열에서 숫자 두개 i, i + 1
//                // op 배열에서 연산자 i
//                if (p[i] == '+') s[i] = s[i] + s[i + 1];
//                else if (p[i] == '-') s[i] = s[i] - s[i + 1];
//                else s[i] = s[i] * s[i + 1];
//
//                s.erase(s.begin() + i + 1);
//                p.erase(p.begin() + i);
//
//                // 여기서는 erase를 했는데 i-- 를 안해도 되는 이유가
//                // (1+2)+(3+4) 인접하지 않아서, 인덱스를 안빼줘도 된다.
//            }
//        }
//
//        // 곱셈 먼저 해주기
//        for (int i = 0; i < p.size(); i++) {
//            if (p[i] == '*') {
//                s[i] = s[i] * s[i + 1];
//
//                s.erase(s.begin() + i + 1);
//                p.erase(p.begin() + i);
//
//                // 여기서는
//                // 1*2*3*4 처럼
//                // 1*2 => 2, 2*3*4 차례대로 되야 하는데,
//                // i-- 를 하지 않으면 앞에 2가 무시된다
//                i--;
//            }
//        }
//
//        // 나머지 계산
//        // 왼쪽 부터 덧뺄셈만 하면 되니까 시작은 s[0]
//        int result = s[0];
//
//        // i+1을 하나씩 연산만 해주면 된다
//        for (int i = 0; i < p.size(); i++) {
//            if (p[i] == '+')
//                result += s[i + 1];
//            else
//                result -= s[i + 1];
//        }
//
//        answer = max(answer, result);
//
//        return;
//    }
//
//    // 괄호 안 묶으면 1
//    // 괄호로 묶으면 2
//    for (int i = 1; i <= 2; i++) {
//        if (idx + i <= su.size()) {
//            r.push_back(i);
//            DFS(idx + i, r);
//            r.pop_back();
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        char a;
//        cin >> a;
//
//        if (i % 2 == 0)
//            su.push_back(a - '0');
//        else
//            op.push_back(a);
//    }
//
//    // 빈 벡터 넣어서 시작
//    DFS(0, vector<int>());
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/13.
////
//
