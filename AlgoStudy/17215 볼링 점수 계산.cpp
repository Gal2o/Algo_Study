//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//string str;
//vector<char> frame[15];
//int answer, rnd;
//
//int main() {
//    cin >> str;
//
//    for (int i = 0; i < str.size(); i++) {
//        if (str[i] == 'S') {
//            // 스트라이크면 S 넣고 라운드++
//            frame[rnd++].push_back(str[i]);
//        } else {
//            // 스트라이크가 아니면 무조건 값이 두 개
//            frame[rnd].push_back(str[i++]);
//            frame[rnd].push_back(str[i]);
//            rnd++;
//        }
//    }
//
//    for (int r = 0; r < 10; ++r) {
//        // 해당 라운드에서 스트라이크
//        if (frame[r][0] == 'S') {
//            answer += 10;
//
//            // + 1 라운드도 스트라이크
//            if (frame[r + 1][0] == 'S') {
//                answer += 10;
//
//                // + 2 라운드도 스트라이크
//                if (frame[r + 2][0] == 'S') {
//                    answer += 10;
//                } else { // +2 라운드 스트라이크 아님, 첫 구 갯수 만큼 더해주기
//                    if (frame[r + 2][0] >= '1' && frame[r + 2][0] <= '9')
//                        answer += frame[r + 2][0] - '0';
//                }
//            } else { // + 1 라운드에서 스트라이크 아님, 스페어 처리 했는지 확인
//                if (frame[r + 1][1] == 'P')
//                    answer += 10;
//                else { // 스페어 처리 못함, 넘어트린 갯수만 더해주기
//                    for (int i = 0; i < 2; i++) {
//                        if (frame[r + 1][i] >= '1' && frame[r + 1][i] <= '9')
//                            answer += frame[r + 1][i] - '0';
//                    }
//                }
//            }
//        } else if (frame[r][1] == 'P') { // 해당 라운드에서 스페어 처리 인지 확인
//            answer += 10;
//            // 스페어였으면, 다음 라운드 첫 구 만큼 더해주기
//            if (frame[r + 1][0] == 'S') // 첫 구가 스트라이크면 +10
//                answer += 10;
//            else { // 스페어 처리 못함, 넘어 뜨린 갯수만 더해주기
//                if (frame[r + 1][0] >= '1' && frame[r + 1][0] <= '9')
//                    answer += frame[r + 1][0] - '0';
//            }
//        } else {
//            // 스트라이크, 스페어가 아님 점수만 더해주기
//            for (int i = 0; i < 2; i++) {
//                if (frame[r][i] >= '1' && frame[r][i] <= '9')
//                    answer += frame[r][i] - '0';
//            }
//        }
//    }
//
//    cout << answer << endl;
//}
//
//// Created on 2021/10/29.