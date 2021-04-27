//#include <iostream>
//#include <vector>
//#include <queue>
//#include <deque>
//
//using namespace std;
//int n, t, mid, result;
//int sy, sx, k, su, tmp, cnt;
//int map[25][25];
//int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
//int py[4] = {0, 1, 0, -1}, px[4] = {1, 0, -1, 0};
//vector<int> answer;
//
//void print() {
//    cout << endl;
//    for(int i = 0; i< n; i ++) {
//        for(int j =0; j <n; j++)
//            cout << map[i][j] << ' ';
//        cout << endl;
//    }
//}
//void mapinit() {
//    sy = n / 2 - 1, sx = sy, k = 2;
//    su = 0, tmp = -1, cnt = 1;
//}
//
//void change() {
//    mapinit();
//    vector<int> v;
//
//    while (1) {
//        if (k > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            for (int i = 0; i < k; i++) {
//                sy += dy[d], sx += dx[d];
//
//                if (map[sy][sx] == tmp) {
//                    cnt++;
//                } else {
//                    if (tmp != -1) {
//                        v.push_back(cnt);
//                        v.push_back(tmp);
//                    }
//                    cnt = 1;
//                    tmp = map[sy][sx];
//                }
//            }
//        }
//
//        sy--, sx--, k += 2;
//    }
//
//    mapinit();
//    while (1) {
//        if (k > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            if (v.size() - 1 < su)
//                break;
//
//            for (int i = 0; i < k; i++) {
//                if (v.size() - 1 < su)
//                    break;
//
//                sy += dy[d], sx += dx[d];
//
//                map[sy][sx] = v[su];
//                su++;
//            }
//        }
//
//        sy--, sx--, k += 2;
//    }
//
//}
//
//bool four() {
//    mapinit();
//    deque<pair<int, int>> q;
//    bool flag = false;
//
//    while (1) {
//        if (k > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            for (int i = 0; i < k; i++) {
//                sy += dy[d], sx += dx[d];
//
//                if (map[sy][sx] == tmp) {
//                    cnt++;
//                    q.push_back({sy, sx});
//                } else {
//                    if (cnt >= 4) {
//                        while (!q.empty()) {
//                            int fy = q.front().first, fx = q.front().second;
//                            q.pop_front();
//
//                            answer.push_back(map[fy][fx]);
//                            map[fy][fx] = 0;
//                        }
//                        flag = true;
//                        cnt = 1;
//                        tmp = map[sy][sx];
//                        q.push_back({sy, sx});
//                    } else {
//                        q.clear();
//                        q.push_back({sy, sx});
//                        tmp = map[sy][sx];
//                        cnt = 1;
//                    }
//                }
//            }
//        }
//
//        sy--, sx--, k += 2;
//    }
//
//    return flag;
//};
//
//void fill() {
//    // 달팽이 모양 for문 돌기
//    mapinit();
//    vector<int> v;
//
//    while (1) {
//        if (k > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            for (int i = 0; i < k; i++) {
//                sy += dy[d], sx += dx[d];
//
//                if (map[sy][sx] != 0)
//                    v.push_back(map[sy][sx]);
//            }
//        }
//
//        sy--, sx--, k += 2;
//    }
//
//    // 채우기
//    mapinit();
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            map[i][j] = 0;
//
//    while (1) {
//        if (k > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            if (v.size() - 1 < su)
//                break;
//
//            for (int i = 0; i < k; i++) {
//                if (v.size() - 1 < su)
//                    break;
//
//                sy += dy[d], sx += dx[d];
//
//                map[sy][sx] = v[su];
//                su++;
//            }
//        }
//
//        sy--, sx--, k += 2;
//    }
//}
//
//int main() {
//    cin >> n >> t;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> map[i][j];
//
//    while (t--) {
//        int d, p;
//        cin >> d >> p;
//
//        // 1단계. 방향 * 공격칸수 없애기
//        mid = n / 2;
//        for (int i = 1; i <= p; i++) {
//            int ny = mid + (py[d] * i), nx = mid + (px[d] * i);
//
//            if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//                continue;
//
//            answer.push_back(map[ny][nx]);
//            map[ny][nx] = 0;
//        }
//
//        // 2단계. 채워주기
//        fill();
////        print();
//
//        while(1) {
//            // 3단계. 4개 이상 붙어 있으면 지우기
//            if(!four())
//                break;
//            // 3-1단계. 붙히고 또 4개면 지우기 (flag 사용)
//            fill();
//        }
////        print();
//
//        // 4단계. (총 갯수, 숫자의 크기)로 초기화
//        change();
////        print();
//    }
//
//    for (int i : answer) {
//        result += i;
//    }
//
//    cout << result << endl;
//}
//
////
//// Created by Mac2 on 2021/04/26.
////
//
