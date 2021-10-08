//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n;
//string answer;
//
//void dfs(int cnt) {
//    for (int i = 1; i <= (cnt / 2); ++i) {
//        // 중앙에서 자릿수를 늘려나가면서 반반 비교 하려고 했는데 옳은 답이 아님
//        // 끝에서부터, 자릿수를 늘려가며 비교
//        // i는 비교할 자릿수
//        // 1211 이라면,
//        // i == 1 에서 12[1][1] 에서 걸러짐
//        // 1213 이라면,
//        // i == 1 이면, 12[1][3] 비교
//        // i == 2 이면, [12][13] 비교
//        // 애초에 12123 같은 중복 문자는 cnt = 4에서 걸러짐
//        string a = answer.substr(cnt - (i * 2), i); // 앞쪽
//        string b = answer.substr(cnt - i, i);       // 뒷쪽
//
//        if (a == b)
//            return;
//    }
//
//    if (cnt == n) {
//        cout << answer << endl;
//        exit(0);
//    }
//
//    for (int i = 1; i <= 3; i++) {
//        answer += (char) (i + '0');
//        dfs(cnt + 1);
//        answer.pop_back();
//    }
//}
//
//int main() {
//    cin >> n;
//
//    dfs(0);
//}
//// Created on 2021/10/06.