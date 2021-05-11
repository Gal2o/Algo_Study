//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int l, c, mo, ja;
//int chk[15];
//string ans;
//vector<char> enter;
//
//// 쉬워서 풀이 안함
//void dfs(int idx, int cnt) {
//    if (cnt == l && mo >= 1 && ja >= 2) {
//        cout << ans << endl;
//        return;
//    }
//
//    for (int i = idx; i < c; i++) {
//        if (!chk[i]) {
//            char a = enter[i];
//            chk[i] = 1, ans += a;
//
//            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
//                mo++;
//            else
//                ja++;
//
//            dfs(i + 1, cnt + 1);
//
//            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
//                mo--;
//            else
//                ja--;
//
//            ans.pop_back(), chk[i] = 0;
//        }
//    }
//}
//
//int main() {
//    cin >> l >> c;
//
//    for (int i = 0; i < c; i++) {
//        char a;
//        cin >> a;
//        enter.push_back(a);
//    }
//
//    sort(enter.begin(), enter.end());
//
//    dfs(0, 0);
//}
////
//// Created by Mac2 on 2021/05/11.
////
//
