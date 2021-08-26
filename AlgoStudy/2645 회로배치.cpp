//#include <bits/stdc++.h>
//
//#define MX 51
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//
//int n, k, m;
//int sy, sx, ey, ex; // 시작, 끝 좌표
//int arr[MX][MX]; // 이미 깔린 회로 k로 마킹해두기
//int chk[MX][MX]; // 다익스트라용 chk
//
//int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
//vector<pl> kuk[501]; // 이미 배치된 회로 좌표 저장용
//vector<pl> res;     // 역추적 해서 답이 될 좌표 저장용
//vector<pl> answer;  // 답 저장용
//
//int dir(pl p1, pl p2) {
//    // y가 같다면 x에 따라서 방향 정해주기
//    if (p1.first == p2.first) {
//        // p1 x보다 p2 x가 오른쪽에 있다면 오른쪽으로 가자
//        if (p1.second < p2.second)
//            return 3;
//        else // 아니면 왼쪽
//            return 2;
//    } else if (p1.second == p2.second) { // x가 같다면 y에 따라서 방향 정해주기
//        // p1 y보다 p2 y가 더 아래에 있으면 내려가기
//        if (p1.first < p2.first)
//            return 1;
//        else // 아니면 위로
//            return 0;
//    }
//}
//
//void firstDraw() {
//    // 이미 깔린 회로들을 arr에 k로 초기화 시킨다
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < kuk[i].size() - 1; ++j) {
//            // 최소한의 좌표만 저장되어 있으므로,
//            // i, i+1 사이 방향을 알아내서 BFS를 돌린다
//            int d = dir(kuk[i][j], kuk[i][j + 1]);
//
//            auto[sy, sx] = kuk[i][j];
//            auto[ey, ex] = kuk[i][j + 1];
//            queue<pl> q;
//            q.push({sy, sx}), arr[sy][sx] = k;
//
//            while (!q.empty()) {
//                auto[fy, fx] = q.front();
//                q.pop();
//
//                if (fy == ey && fx == ex)
//                    break;
//
//                int ny = fy + dy[d], nx = fx + dx[d];
//
//                if (arr[ny][nx] == 0 || arr[ny][nx] == k) {
//                    q.push({ny, nx}), arr[ny][nx] = k;
//                }
//            }
//        }
//    }
//}
//
//void dijkstra() {
//    priority_queue<tp, vector<tp>, greater<tp>> pq;
//    pq.push({1, sy, sx}), chk[sy][sx] = 1;
//
//    while (!pq.empty()) {
//        auto[val, fy, fx] = pq.top();
//        pq.pop();
//
//        // 도착지 왔으면 탈출
//        if (fy == ey && fx == ex) {
//            break;
//        }
//
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//            int nval;
//
//            if (ny < 1 || nx < 1 || ny > n || nx > n)
//                continue;
//
//            // 이미 배치된 회로가 아니면 현재거리 + 1, 아니면 현재거리 + k
//            arr[ny][nx] == 0 ? nval = val + 1 : nval = val + arr[ny][nx];
//
//            if (chk[ny][nx] > nval) {
//                chk[ny][nx] = nval;
//                pq.push({nval, ny, nx});
//            }
//        }
//    }
//}
//
//void makeResult() {
//    int mxt = chk[ey][ex]; // mxt는 다익스트라로 뽑아둔 최단 거리
//
//    priority_queue<tp, vector<tp>, greater<>> q;
//    q.push({chk[ey][ex], ey, ex});
//
//    while (!q.empty()) {
//        auto[val, fy, fx] = q.top();
//        q.pop();
//
//        // 만약 맨 앞에 있는 거리가 q에서 가장 작은 거리인데 최단거리보다 크다면,
//        // 역추적 안해도 된다
//        if (val > mxt)
//            continue;
//
//        // val < mxt 인 것만 저장
//        res.emplace_back(fy, fx);
//
//        if (fy == sy && fx == sx)
//            break;
//
//        for (int i = 0; i < 4; ++i) {
//            int ny = fy + dy[i], nx = fx + dx[i];
//
//            if (ny < 1 || nx < 1 || ny > n || nx > n)
//                continue;
//
//            // 다음 거리가  현재거리보다 작다면
//            // q에 넣고 mxt 갱신 (계속 제일 작은 것으로 갱신된다)
//            if (chk[ny][nx] < chk[fy][fx]) {
//                q.push({chk[ny][nx], ny, nx});
//                mxt = chk[ny][nx];
//            }
//        }
//    }
//}
//
//void makeAnswer() {
//    // 시작 좌표는 고정 이므로 바로 저장
//    answer.push_back(res[0]);
//
//    // dir 함수로 시작-res[1] 번째의 방향 초기화
//    int d = dir({sy, sx}, {res[1]});
//
//    // 1부터 도착좌표 전까지
//    for (int i = 1; i < res.size() - 1; i++) {
//        int cd = dir(res[i], res[i + 1]);
//
//        // 만약 d랑 cd가 방향이 다르다면, 90도 꺾인 것이므로,
//        // res[i]를 저장하고 d는 cd로 갱신
//        if (d != cd) {
//            d = cd;
//            answer.push_back(res[i]);
//        }
//    }
//
//    // 도착 좌표도 고정이므로 바로 저장
//    answer.emplace_back(ey, ex);
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> n >> sy >> sx >> ey >> ex >> k >> m;
//
//    for (int i = 0; i < m; i++) {
//        int a;
//        cin >> a;
//        for (int j = 0; j < a; ++j) {
//            int a, b;
//            cin >> a >> b;
//            kuk[i].emplace_back(a, b);
//        }
//    }
//
//    // 이미 배치된 회로 k로 chk 해주기
//    firstDraw();
//
//    // 다익스트라로 최단거리를 찾아보자
//    fill(&chk[0][0], &chk[MX - 1][MX], 1e9);
//    dijkstra();
//
//    // 역추적으로 최단 경로 뽑아내기
//    makeResult();
//
//    // res는 역추적해서 거꾸로 저장되어 있으므로, reverse
//    reverse(res.begin(), res.end());
//
//    // 답 뽑아내기
//    makeAnswer();
//
//    // 최단거리 출력
//    cout << chk[ey][ex] << endl;
//    // 답 배열 사이즈 출력
//    cout << answer.size() << ' ';
//    // 좌표 출력
//    for (auto i: answer)
//        cout << i.first << ' ' << i.second << ' ';
//}
////
//// Created by Mac2 on 2021/08/26.
////
//
