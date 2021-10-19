//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//string str;
//stack<char> st;
//
//int main() {
//    fastio
//    cin >> str;
//
//    string tmp;
//    bool aflag = false; // PPPA, PPA, PPPPA 등.. 올바르게 A가 쌓여있는지
//
//    for (auto i: str) {
//        // 맨 처음 스택 비어 있을때, 그 외에는 스택은 비어 있을 수가 없음
//        if (st.empty()) {
//            if (i == 'P')
//                st.push(i);
//            else // A가 제일 먼저 들어오면 NP
//                return cout << "NP" << endl, 0;
//        } else {
//            // A가 들어왔을 때,
//            if (i == 'A') {
//                // P가 2개 이상 쌓여 있어야 PPAP를 만들 수 있다.
//                if (st.size() >= 2)
//                    st.push(i), aflag = true;
//                else // 2개 이상 없으면 out
//                    return cout << "NP" << endl, 0;
//            } else if (i == 'P') {
//                // 정상적으로 A가 쌓여 있는데, 그 다음이 P면 PPA 빼기
//                if (aflag) {
//                    aflag = false;
//                    st.pop(), st.pop(), st.pop();
//                }
//
//                // P 넣기
//                st.push(i);
//            }
//        }
//    }
//
//    if (st.size() == 1)
//        cout << "PPAP" << endl;
//    else
//        cout << "NP" << endl;
//}
//// Created on 2021/10/19.