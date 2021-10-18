//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tp;
//int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
//
//int n;
//int answer;
//vector<vector<int>> arr;
//int dirP[9][8]; // num : 1~8, d : 0~7
//vector<pl> op; // 1~N
//
//int put(int x) {
//    for (int i = 0; i <= n; i++) {
//        if (arr[i][x] > 0)
//            return i;
//    }
//
//    return -1;
//}
//
//void gravity() {
//    for (int x = 1; x <= 4; x++) {
//        queue<int> q;
//
//        for (int y = n; y >= 0; y--) {
//            if (arr[y][x] > 0)
//                q.push(arr[y][x]), arr[y][x] = 0;
//        }
//
//        int init = n;
//        while (!q.empty()) {
//            arr[init--][x] = q.front();
//            q.pop();
//        }
//    }
//}
//
//int isClear() {
//    for (int y = n; y >= 0; y--) {
//        int cnt = 0;
//
//        for (int x = 1; x <= 4; x++) {
//            if (arr[y][x] > 0)
//                cnt++;
//        }
//
//        if (cnt == 4)
//            return y;
//    }
//
//    // 클리어 할 거 없음.
//    return -1;
//}
//
//void trim() {
//    queue<tp> q;
//
//    for (int y = 0; y <= n; y++) {
//        for (int x = 1; x <= 4; x++) {
//            if (arr[y][x] > 0) {
//                int num = arr[y][x], fy, fx;
//                arr[y][x] = 0; // 0으로 바꿔주기
//
//                for (int i = 0; i < 8; i++) {
//                    int ny = y + dy[dirP[num][i]], nx = x + dx[dirP[num][i]];
//
//                    if (ny < 0 || nx < 1 || ny > n || nx > 4)
//                        continue;
//
//                    fy = ny, fx = nx;
//                    break;
//                }
//
//                q.emplace(fy, fx, num);
//            }
//        }
//    }
//
//    while (!q.empty()) {
//        auto[y, x, num] = q.front();
//        q.pop();
//
//        if (!arr[y][x])
//            arr[y][x] = num;
//        else {
//            if (arr[y][x] > num)
//                arr[y][x] = num;
//        }
//    }
//}
//
//void print() {
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= 4; ++j) {
//            cout << arr[i][j] << ' ';
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//int solve(int num, int x) {
//    // 블록 놓기
//    int y = put(x);
//    y == -1 ? arr[n][x] = num : arr[y - 1][x] = num;
//
//    int score = 0;
//    while (true) {
//        y = isClear();
//
//        if (y == -1)
//            break;
//
//        for (int j = 1; j <= 4; j++)
//            arr[y][j] = 0;
//
//        score++;
//        gravity();
//    }
//
//    trim();
//    gravity();
//
//    return score;
//}
//
//void dfs(int idx, int hap) {
//    if (idx == n) {
//        int score = 0;
//        while (true) {
//            int y = isClear();
//
//            if (y == -1)
//                break;
//
//            for (int j = 1; j <= 4; j++)
//                arr[y][j] = 0;
//
//            score++;
//            gravity();
//        }
//
//        answer = max(answer, hap + score);
//        return;
//    }
//
//    auto[num, x] = op[idx];
//    vector<vector<int>> tmp = arr;
//
//    if (x) {
//        dfs(idx + 1, hap + solve(num, x));
//        arr = tmp;
//    } else {
//        for (int c = 1; c <= 4; c++) {
//            dfs(idx + 1, hap + solve(num, c));
//            arr = tmp;
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//    arr.resize(n + 1, vector<int>(5, 0));
//
//    for (int i = 1; i <= 8; ++i) {
//        for (int j = 0; j < 8; ++j) {
//            int a;
//            cin >> a;
//            dirP[i][j] = --a;
//        }
//    }
//
//    for (int i = 0; i < n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        op.emplace_back(a, b);
//    }
//
//    dfs(0, 0);
//
//    cout << answer << endl;
//}
//// Created on 2021/10/13.