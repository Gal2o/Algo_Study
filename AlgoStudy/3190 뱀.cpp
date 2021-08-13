//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, char> pl;
//typedef pair<int, int> pp;
//int mp[100][100];
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//
//int n, k, L;
//int dir = 3, TM = 1; // 시작 방향은 오른쪽, 1초 부터 시작
//queue<pl> op;
//
//void Dummy() {
//    deque<pp> snake;
//    snake.emplace_back(0, 0), mp[0][0] = 2; // 뱀 시작 넣어주고, 맵에 표시
//
//    // 뱀은 2, 사과는 1
//    while (1) {
//        int ny = snake.front().first + dy[dir];
//        int nx = snake.front().second + dx[dir];
//
//        if (mp[ny][nx] == 2 || ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//            break;
//
//        // 사과가 없으면, 꼬리를 꺼내서 맵을 0으로 초기화, pop_back();
//        if (mp[ny][nx] == 0) {
//            int ty = snake.back().first, tx = snake.back().second;
//            mp[ty][tx] = 0;
//            snake.pop_back();
//        }
//
//        // 뱀은 방향만큼 하나 증가한다.
//        snake.push_front({ny, nx});
//        mp[ny][nx] = 2;
//
//        int nextT = op.front().first, nextD = op.front().second;
//
//        if (TM == nextT) {
//            op.pop();
//
//            switch (dir) {
//                case 0:
//                    nextD == 'L' ? dir = 2 : dir = 3;
//                    break;
//                case 1:
//                    nextD == 'L' ? dir = 3 : dir = 2;
//                    break;
//                case 2:
//                    nextD == 'L' ? dir = 1 : dir = 0;
//                    break;
//                case 3:
//                    nextD == 'L' ? dir = 0 : dir = 1;
//                    break;
//            }
//        }
//
//        TM++;
//    }
//}
//
//int main() {
//    cin >> n >> k;
//
//    for (int i = 0; i < k; i++) {
//        int a, b;
//        cin >> a >> b;
//        mp[a - 1][b - 1] = 1;
//    }
//
//    cin >> L;
//
//    for (int i = 0; i < L; i++) {
//        int a;
//        char b;
//        cin >> a >> b;
//        op.push({a, b});
//    }
//
//    Dummy();
//
//    cout << TM << endl;
//}
////
//// Created by Mac2 on 2021/08/05.
////
//
