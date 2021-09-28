//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 1e9
//using namespace std;
//typedef pair<int, int> pl;
//typedef long long ll;
//string s;
//int n, su;
//vector<string> op;
//stack<int> st;
//
//bool cal(ll su) {
//    st = stack<int>();
//    st.push(su);
//
//    for (auto i: op) {
//        if (i == "POP") {
//            if (st.empty()) return false;
//
//            st.pop();
//
//        } else if (i == "INV") {
//            if (st.empty()) return false;
//
//            auto a = st.top();
//
//            st.pop(), st.push(-a);
//
//        } else if (i == "DUP") {
//
//            st.push(st.top());
//
//        } else if (i == "SWP") {
//            if (st.size() < 2) return false;
//
//            auto a = st.top();
//            st.pop();
//
//            auto b = st.top();
//            st.pop();
//
//            st.push(a), st.push(b);
//
//        } else if (i == "ADD") {
//            if (st.size() < 2) return false;
//
//            auto a = st.top();
//            st.pop();
//
//            auto b = st.top();
//            st.pop();
//
//            if (abs(a + b) > mx) return false;
//
//            st.push(a + b);
//
//        } else if (i == "SUB") {
//            if (st.size() < 2) return false;
//
//            auto a = st.top();
//            st.pop();
//
//            auto b = st.top();
//            st.pop();
//
//            if (abs(b - a) > mx) return false;
//
//            st.push(b - a);
//
//        } else if (i == "MUL") {
//            if (st.size() < 2) return false;
//
//            auto a = st.top();
//            st.pop();
//
//            auto b = st.top();
//            st.pop();
//
//            if (llabs((ll) a * b) > mx) return false;
//
//            st.push(a * b);
//
//        } else if (i == "DIV") {
//            if (st.size() < 2) return false;
//
//            auto a = st.top();
//            st.pop();
//
//            auto b = st.top();
//            st.pop();
//
//            if (a == 0) return false;
//
//            // 몫은 a,b 중 하나만 음수라면 몫 => 음수
//            // 그러므로 둘 다 양수 or 음수면 몫 => 양수
//            if (a < 0 && b < 0 || a > 0 && b > 0) {
//                st.push((abs(b) / abs(a)));
//            } else
//                st.push(-(abs(b) / abs(a)));
//
//        } else if (i == "MOD") {
//            if (st.size() < 2) return false;
//
//            auto a = st.top();
//            st.pop();
//
//            auto b = st.top();
//            st.pop();
//
//            if (a == 0) return false;
//
//            // 나머지 값의 부호는 b의 부호와 같다
//            st.push(b % a);
//
//        } else {
//            // NUM X -> X를 가장 top에 저장
//            stringstream ss(i);
//            string op, num;
//
//            ss >> op >> num;
//
//            st.push(stoi(num));
//        }
//    }
//
//    return true;
//}
//
//int main() {
//    while (1) {
//        op.clear();
//
//        while (1) {
//            getline(cin, s);
//
//            if (s == "END") {
//                cin >> n;
//                break;
//            }
//
//            if (s == "QUIT")
//                return 0;
//
//            if (!s.empty())
//                op.push_back(s);
//        }
//
//        for (int i = 0; i < n; ++i) {
//            cin >> su;
//
//            if (!cal(su) || st.size() != 1)
//                cout << "ERROR" << endl;
//            else
//                cout << st.top() << endl;
//
//        }
//
//        cout << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/14.
////
//
