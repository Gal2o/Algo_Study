//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<string, string> pl;
//
//vector<string> record = {{"Enter uid1234 Muzi"},
//                         {"Enter uid4567 Prodo"},
//                         {"Leave uid1234"},
//                         {"Enter uid1234 Prodo"},
//                         {"Change uid4567 Ryan"}};
//
//int main() {
//    vector<string> answer;
//
//    vector<pl> v;
//    map<string, string> id;
//
//    for (auto r: record) {
//        stringstream ss(r);
//        string s;
//        vector<string> input;
//
//        while (ss >> s)
//            input.push_back(s);
//
//        string op = input[0];
//        string uid = input[1];
//
//        if (op == "Enter") {
//            v.push_back({op, uid});
//            id[uid] = input[2];
//        } else if (op == "Leave") {
//            v.push_back({op, uid});
//        } else {
//            id[uid] = input[2];
//        }
//    }
//
//    for (auto i: v) {
//        string op = i.first;
//        string uid = i.second;
//
//        if (op == "Enter")
//            answer.push_back(id[uid] + "님이 들어왔습니다.");
//        else if (op == "Leave")
//            answer.push_back(id[uid] + "님이 나갔습니다.");
//    }
//
//    for (auto i: answer)
//        cout << i << endl;
//}
////
//// Created by Mac2 on 2021/09/10.
////
//
