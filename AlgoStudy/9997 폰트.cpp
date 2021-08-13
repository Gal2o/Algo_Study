//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//int N, answer;
//
//vector<ll> str;
//
//void dfs(int index, ll sz) {
//    // index가 (N-1)이면 단어의 갯수만큼 세었음
//    if (index == N - 1) {
//        // 비트마스킹 된 sz == (전체 알파벳 갯수 체크 0부터 시작이니까 (1 << 26) -1)
//        // 이면 알파벳이 다 포함 되었다.
//        if (sz == (1 << 26) - 1)
//            answer++;
//
//        return;
//    }
//
//    // 사전을 0부터 넣고 넣는다면 sz 비트마스킹
//    dfs(index + 1, (sz | str[index + 1]));
//    // 안넣고 반복한다.
//    dfs(index + 1, sz);
//}
//
//// 각 단어의 알파벳 위치를 비트마스킹
//// ex. abc
//// 0.....0111 이런식으로
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        string s;
//        cin >> s;
//
//        ll temp = 0;
//        // 입력 받은 단어 마다 알파벳 체크 (비트마스킹)
//        for (auto i : s)
//            temp |= (1 << (i - 'a'));
//
//        str.push_back(temp);
//    }
//
//    dfs(-1, 0);
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/09.
////
//
