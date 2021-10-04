//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int ff, fs, sf, ss;
//
//// 무슨 문제인지 모르겠다.
//int main() {
//    // 빠르게 시작 빠르게 끝남 ff
//    // 빠르게 시작 느리게 끝남 fs
//    // 느리게 시작 빠르게 끝남 sf
//    // 느리게 시작 느리게 끝남 ss
//    cin >> ff >> fs >> sf >> ss;
//
//    // 1. 빠르게 시작하는 노래는 빠르게 끝나는 노래 다음 ff, sf > ff, fs
//    // 2. 느리게 시작하는 노래는 느리게 끝나는 노래 다음 fs, ss > sf, ss
//    // 3. 빠르게 시작하는 노래 1개 이상이면, 첫 곡은 빠르게 시작하는 곡
//    // 없다면, 무시
//
//    // 3번 만족 X
//    if (!ff && !fs) { // ff, fs는 없다
//        if (!sf) // sf가 0이면 ss만 남는다
//            cout << ss << endl;
//        else // 2번 조건 만족 ss > sf
//            cout << ss + 1 << endl;
//    } else if (!fs) // fs가 0이면, ff 다음에 올게 없다 그러므로 ff만
//        cout << ff << endl;
//    else { // 3번 만족
//        // ff, fs, sf, ss 다 있다.
//        // ff는 가장 앞
//        // sf가 fs 이상이면, 1번 조건 만족 sf 다음이 fs 이므로, fs * 2 마지막은 ss
//        if (sf >= fs)
//            cout << ff + fs + fs + ss << endl;
//        else // sf < fs 이면, 2번 조건 만족 fs 다음 sf 이므로, sf * 2
//            cout << ff + sf + sf + ss + 1 << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/29.
////
//
