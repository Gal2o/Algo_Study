//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//string input;
//vector<string> v;
//
//int main() {
//    fastio
//    cin >> input;
//
//    if (input.find("::") != string::npos) {
//        // n1의 매개변수는 :: -> 길이 2
//        input.replace(input.find("::"), 2, ":X:");
//    }
//
//    // :X: 로 replace 시키므로, 제일 마지막에 ::가 왔을 경우 틀린다
//    // 만약 input 제일 끝에 :가 있으면 잘라주기
//    if (input[input.size() - 1] == ':')
//        input.pop_back();
//
//    // 8개의 필드
//    string temp;
//
//    // :를 기준으로 잘라서 벡터에 넣기
//    for (auto i: input) {
//        if (i == ':') {
//            if (!temp.empty())
//                v.push_back(temp), temp.clear();
//        } else
//            temp += i;
//    }
//    // for문 끝나고 남은 것 마저 넣기
//    v.push_back(temp);
//
//    // 만약 ::(X)가 없으면 sz는 8이고, 있다면 0 이상
//    int sz = 8 - v.size();
//    for (int i = 0; i < v.size(); i++) {
//        string res;
//
//        if (v[i] == "X") {
//            // X가 있으면, 남은 필드 만큼 0000 채워주기
//            for (int j = 0; j <= sz; j++) {
//                cout << "0000";
//
//                if (j < sz)
//                    cout << ':';
//            }
//        } else {
//            // 4자리가 아니면 앞에 0 붙혀주기
//            for (int j = v[i].size(); j < 4; j++)
//                res += '0';
//
//            cout << res + v[i];
//        }
//
//        if (i < v.size() - 1)
//            cout << ':';
//    }
//}
//// Created on 2021/10/07.