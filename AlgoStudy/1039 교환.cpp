//#include <bits/stdc++.h>
//
//#define mx 1000001
//using namespace std;
//typedef pair<string, int> pl;
//
//string s;
//int k;
//int chk[mx][11]; // 범위를 10 까지 했더니 내자마자 틀림.. 멍청
//int answer = 0;
//
//// 뭔가 이상한 문제..
//// 최대 값은 1000000 이므로 회수와 함께 체크 하도록
//// chk[mx][11] 만들기
//int main() {
//    cin >> s >> k;
//
//    queue<pl> q;
//    q.push({s, 0});
//    // 처음 입력 받은 값 , 횟수 0 체크 후 bfs 시작
//    chk[stoi(s)][0] = 1;
//
//    while (!q.empty()) {
//        string su = q.front().first;
//        int cnt = q.front().second;
//        q.pop();
//
//        // 횟수 도달하면 최대값 갱신 하고 continue
//        if (cnt == k) {
//            if (answer < stoi(su))
//                answer = stoi(su);
//
//            continue;
//        }
//
//        for (int i = 0; i < su.size() - 1; i++) {
//            for (int j = i + 1; j < su.size(); j++) {
//                // i < j 인 것 중에서 i, j 바꿔서 string tmp 만들기
//                string tmp = su;
//                tmp[i] = su[j];
//                tmp[j] = su[i];
//
//                // 만약 맨 앞이 0이거나, 1000000 을 넘거나, 중복인 경우 제외하고
//                // queue 에 넣기
//                if (tmp[0] != '0' && stoi(tmp) < mx && !chk[stoi(tmp)][cnt + 1]) {
//                    chk[stoi(tmp)][cnt + 1] = 1;
//                    q.push({tmp, cnt + 1});
//                }
//            }
//        }
//    }
//
//    // answer 가 그대로면 -1
//    if (answer == 0)
//        cout << -1 << endl;
//    else
//        cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/05.
////
//
