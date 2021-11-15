//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int t;
//string s;
//bool flag;
//
//void dfs(int l, int r, int cnt) {
//    // 왜 >= 이면 90퍼에서 틀릴까
//    // 길이가 짝수 일 때, 하나를 자르면 홀수 개가 되고,
//    // 펠린드롬이면, 같은 곳에 만날 수 밖에 없어서 엇갈리고
//
//    // 길이가 홀수 이면, 펠린드롬이 되는 길이는 짝수 이므로 엇갈릴 수 밖에 없다.
//    // 그래서 >= 가 불가능..?
//    if (l > r) {
//        cout << l << ' ' << r << endl;
//        flag = true;
//        return;
//    }
//
//    if (cnt > 1)
//        return;
//
//    if (s[l] == s[r])
//        dfs(l + 1, r - 1, cnt);
//    else {
//        dfs(l + 1, r, cnt + 1);
//        dfs(l, r - 1, cnt + 1);
//    }
//}
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        cin >> s;
//
//        int l = 0, r = s.size() - 1;
//
//        // 회문
//        while (l < r) {
//            if (s[l] == s[r])
//                l++, r--;
//            else
//                break;
//        }
//
//        // 길이가 짝수 일 때, l > r
//        // 길이가 홀수 일 때, l == r
//        if (l >= r) {
//            cout << 0 << endl;
//            continue;
//        }
//
//        // 유사 회문
//        flag = false;
//        dfs(0, s.size() - 1, 0);
//
//        if (flag) {
//            cout << 1 << endl;
//            continue;
//        }
//
//        cout << 2 << endl;
//    }
//}
//// Created on 2021/11/15.