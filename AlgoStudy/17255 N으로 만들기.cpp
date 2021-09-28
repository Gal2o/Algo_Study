//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//string n;
//set<string> answer;
//
//// map으로 중복처리 하면, 어딘가에서 중복이 생겨서 답이 틀린다
//// 인덱스만 벗어나지 않는 범위에서
//// 답이 나오는 것 중에서 중복처리를 하자 (set)
//void DFS(int st, int ed, string s, string q) {
//    if (s.size() == n.size()) {
//        answer.insert(q);
//        return;
//    }
//
//    int prev = st - 1, next = ed + 1;
//
//    if (prev >= 0) {
//        string pc;
//        pc += n[prev];
//
//        DFS(prev, ed, pc + s, q + pc + s);
//    }
//
//    if (next < n.size()) {
//        string nc;
//        nc += n[next];
//
//        DFS(st, next, s + nc, q + s + nc);
//    }
//}
//
//int main() {
//    cin >> n;
//
//    for (int i = 0; i < n.size(); i++) {
//        string s;
//        s += n[i];
//        DFS(i, i, s, s);
//    }
//
//    cout << answer.size() << endl;
//}
////
//// Created by Mac2 on 2021/09/23.
////
//
