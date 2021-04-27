//#include <iostream>
//#include <string>
//
//using namespace std;
//string s;
//int chk[30], mx;
//
//int main() {
//    cin >> s;
//
//    for (int i = 0; i < s.size(); i++) {
//        s[i] = toupper(s[i]);
//
//        chk[s[i] - 'A']++;
//
//        mx = max(chk[s[i] - 'A'], mx);
//    }
//
//    int cnt = 0, idx = 0;
//    for(int i = 0; i < 30; i ++) {
//        if(chk[i] == mx)
//            cnt++, idx = i;
//    }
//
//    if(cnt > 1)
//        cout << '?' << endl;
//    else
//        cout << (char)(idx + 'A') << endl;
//}
////
//// Created by Mac2 on 2021/04/24.
////
//
