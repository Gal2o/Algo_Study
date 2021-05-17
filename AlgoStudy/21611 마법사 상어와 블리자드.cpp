//#include <iostream>
//#include <vector>
//#include <queue>
//#include <deque>
//
//using namespace std;
//
//int n, m, d, s, map[100][100], ans;
//int sy, sx, snail;
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//int hy[4] = {1, 0, -1, 0}, hx[4] = {0, 1, 0, -1};
//vector<int> beed;
//
//void valinit() {
//    sy = sx = (n / 2) - 1; // 상어 시작 위치
//    snail = 2;  // 달팽이 만들 때, 초기 값
//}
//
//void frozen() {
//    int mid = n / 2;
//
//    for (int i = 1; i <= s; i++) {
//        int ny = mid + (dy[d] * i), nx = mid + (dx[d] * i);
//
//        if (ny < 0 || nx < 0 || ny > n - 1 || nx > n - 1)
//            continue;
//
//        // 1단계, 구슬 부수고 map 0으로 초기화, beed에 구슬 종류 넣기
//        map[ny][nx] = 0;
//    }
//}
//
//void fill() {
//    // 상어, snail 값 초기화
//    valinit();
//    queue<int> q;
//
//    // 달팽이 돌면서 0 아닌 값들 모아주기
//    while (1) {
//        // 달팽이의 네변 중 한 변을 채우는 수가 n보다 크면 맵 밖으로 나가므로 break
//        if (snail > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            for (int i = 0; i < snail; i++) {
//                sy += hy[d], sx += hx[d];
//
//                if (map[sy][sx] != 0)
//                    q.push(map[sy][sx]);
//            }
//        }
//        sy--, sx--, snail += 2;
//    }
//
//    valinit();
//    // map 을 0으로 다 초기화 하고 달팽이 돌면서 q값 채우기
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            map[i][j] = 0;
//
//    while (1) {
//        // q에 값이 없거나, snail 한 변이 map 사이즈 보다 커질 때,
//        if (snail > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            for (int i = 0; i < snail; i++) {
//                if (q.empty())
//                    return;
//
//                int m = q.front();
//                q.pop();
//
//                sy += hy[d], sx += hx[d];
//                map[sy][sx] = m;
//            }
//        }
//
//        sy--, sx--, snail += 2;
//    }
//}
//
//bool exploide() {
//    // 변수 초기화
//    valinit();
//
//    deque<pair<int, int>> q;
//    bool flag = false;
//    int exp = -1; // 같은 구슬인지 비교할 임시 값, 처음에는 -1
//
//    while (1) {
//        if (snail > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            for (int i = 0; i < snail; i++) {
//                sy += hy[d], sx += hx[d];
//
//                if (map[sy][sx] == exp)
//                    q.push_back({sy, sx});
//                else {
//                    if (q.size() >= 4) {
//                        // 4개 이상이다가 다른 구슬을 만났으면
//                        // 인접한 4개 이상 구슬들은 0으로 초기화 하고 fill로 다시 채울 것이다
//                        while (!q.empty()) {
//                            int fy = q.front().first, fx = q.front().second;
//                            q.pop_front();
//
//                            beed.push_back(map[fy][fx]), map[fy][fx] = 0;
//                        }
//
//                        flag = true; // 4개 이상인 것이 있었다.
//                    } else // 다른 값을 만났지만, 4개 이상이 아니면? 쌓아뒀던 큐 clear()
//                        q.clear();
//
//                    exp = map[sy][sx]; // 다음 비교할 exp 갱신
//                    q.push_back({sy, sx}); // q에 넣어주고 다시 달팽이 돌기
//                }
//            }
//        }
//        sy--, sx--, snail += 2;
//    }
//    return flag;
//};
//
//void binding() {
//    // 변수 초기화
//    valinit();
//
//    vector<int> v; // 구슬의 갯수, 종류 순서대로 넣기
//    int exp = map[sy + 1][sx]; // 비교 값은 상어 바로 왼쪽 값이 처음 시작
//    int cnt = 0; // 구슬의 갯수는 0개 부터 시작
//
//    while (1) {
//        if (snail > n)
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            for (int i = 0; i < snail; i++) {
//                sy += hy[d], sx += hx[d];
//
//                if (map[sy][sx] == exp)
//                    cnt++;
//                else {
//                    v.push_back(cnt), v.push_back(exp); // 갯수, 종류로 넣기
//                    exp = map[sy][sx], cnt = 1; // 다음 비교 값, 갯수 초기화
//                }
//            }
//        }
//
//        sy--, sx--, snail += 2;
//    }
//
//    // 변수 초기화 하고 map 0으로 초기화 하고
//    valinit();
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            map[i][j] = 0;
//
//    cnt = 0; // v 배열을 0번째 부터 돌기 위해 재활용
//    // 달팽이 돌면서 v에 값들 쌓기
//    while (1) {
//        if (snail > n || v.size() == 0) // 이곳이 에러.. v가 비어있으면 안돌게 해야한다.
//            break;
//
//        for (int d = 0; d < 4; d++) {
//            for (int i = 0; i < snail; i++) {
//                sy += hy[d], sx += hx[d];
//
//                // 달팽이 돌다가 v 배열 밖으로 넘어가면 return
//                if (cnt > v.size() - 1)
//                    return;
//
//                map[sy][sx] = v[cnt];
//                cnt++;
//            }
//        }
//        sy--, sx--, snail += 2;
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> map[i][j];
//
//    while (m--) {
//        cin >> d >> s;
//        d--;
//
//        // 얼음파편 던지기
//        frozen();
//        // 빈 공간 채워주기
//        fill();
//        // 4개 이상 붙어 있는 것들 지우기
//        while (1) {
//            // 더 이상 4개 이상 붙어 있는 구슬이 없으면 break;
//            if (!exploide())
//                break;
//
//            // 4개 이상 폭발 했으면 다시 채워준다.
//            fill();
//        }
//        // 마지막 인접한 구슬 (갯수, 구슬의 종류) 끼리 묶어주기
//        binding();
//    }
//
//    for (int i : beed)
//        ans += i;
//
//    cout << ans << endl;
//}