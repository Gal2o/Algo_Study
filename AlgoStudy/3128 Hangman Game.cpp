//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//string s, ansP, ansN;
//int resP = 1e9, resN = 1e9;
//int chk[26]; // 누를 문자 체크
//int pdp[26][26][26], ndp[26][26][26]; // 문자열 길이, 알파벳 위치, 버튼 누른 횟수
//int len; // 공백, 중복 제거한 문자열 길이
//
//// 함수 두개 사용 이유 :
//// next -> prev
//// prev -> next 순으로 최솟값이 둘다 다름
//// dp 하나로 처리하고 싶었는데 안되서 dp 두개 사용하여 최솟값, string 찾아내서 처리
//int dP(int idx, int al, int btn, string str) {
//    if (idx == len) {
//        if (resP > btn) {
//            ansP = str;
//            resP = min(resP, btn);
//        }
//        return pdp[idx][al][btn] = btn;
//    }
//
//    int &cur = pdp[idx][al][btn];
//
//    if (cur != -1) return cur;
//    cur = 1e9;
//
//    for (int i = 0; i < 13; ++i) {
//        int next = al + i, prev = al - i;
//
//        if (next > 25) next -= 26;
//        if (prev < 0) prev += 26;
//
//        if (idx + 1 <= len) {
//            if (chk[prev]) {
//                chk[prev]--;
//                cur = min(cur, dP(idx + 1, prev, btn + i + 1, str + (char) (prev + 'A')));
//                chk[prev]++;
//            }
//
//            if (chk[next]) {
//                chk[next]--;
//                cur = min(cur, dP(idx + 1, next, btn + i + 1, str + (char) (next + 'A')));
//                chk[next]++;
//            }
//
//        }
//    }
//    return cur;
//}
//
//int dN(int idx, int al, int btn, string str) {
//    if (idx == len) {
//        if (resN > btn) {
//            ansN = str;
//            resN = min(resN, btn);
//        }
//        return ndp[idx][al][btn] = btn;
//    }
//
//    int &cur = ndp[idx][al][btn];
//
//    if (cur != -1) return cur;
//    cur = 1e9;
//
//    for (int i = 0; i < 13; ++i) {
//        int next = al + i, prev = al - i;
//
//        if (next > 25) next -= 26;
//        if (prev < 0) prev += 26;
//
//        if (idx + 1 <= len) {
//            if (chk[next]) {
//                chk[next]--;
//                cur = min(cur, dN(idx + 1, next, btn + i + 1, str + (char) (next + 'A')));
//                chk[next]++;
//            }
//
//            if (chk[prev]) {
//                chk[prev]--;
//                cur = min(cur, dN(idx + 1, prev, btn + i + 1, str + (char) (prev + 'A')));
//                chk[prev]++;
//            }
//        }
//    }
//    return cur;
//}
//
//int main() {
//    string tmp;
//    getline(cin, tmp);
//
//    stringstream os(tmp);
//    string buffer;
//
//    while (os >> buffer)
//        s += buffer;
//
//    for (auto i: s) {
//        if (!chk[i - 'A'])
//            chk[i - 'A']++, len++;
//    }
//
//    memset(pdp, -1, sizeof pdp);
//    memset(ndp, -1, sizeof ndp);
//
//    int s1 = dP(0, 0, 0, "");
//    int s2 = dN(0, 0, 0, "");
//
//    cout << min(s1, s2) << endl;
//    s1 > s2 ? cout << ansN << endl : cout << ansP << endl;
//}
//// Created on 2021/10/13.