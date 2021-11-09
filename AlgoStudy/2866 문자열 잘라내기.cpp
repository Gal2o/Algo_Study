//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int r, c, answer;
//vector<string> v, res;
//
//int main() {
//    cin >> r >> c;
//
//    // 모든 입력 받기
//    for (int i = 0; i < r; ++i) {
//        string s;
//        cin >> s;
//        v.emplace_back(s);
//    }
//
//    // 입력 받은 문자열을 세로로 만들어서 res에 넣기
//    for (int i = 0; i < c; ++i) {
//        string tmp;
//        for (int j = 0; j < r; ++j) {
//            tmp += v[j][i];
//        }
//
//        res.emplace_back(tmp);
//    }
//
//    // r - 1 번만큼 돌면서
//    for (int i = 1; i < r; ++i) {
//        set<string> s;
//
//        // 세로로 받은 문자열 앞글자를 하나씩 없애면서
//        for (auto &j: res) {
//            j.erase(j.begin());
//
//            // set에 넣는다.
//            s.insert(j);
//        }
//
//        // s의 크기가 c라면 answer++;
//        // 아니면 break;
//        if (s.size() == c)
//            answer++;
//        else
//            break;
//    }
//
//    cout << answer << endl;
//}
//// Created on 2021/11/09.