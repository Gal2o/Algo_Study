//#include <bits/stdc++.h>
//
//#define MOD (int)1e6 + 7
//#define MAX 51
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, m, c;
//int arr[MAX][MAX];
//int chk[MAX][MAX][MAX][MAX];
//int dy[2] = {1, 0}, dx[2] = {0, 1};
//
//// y, x, 앞으로 방문할 오락실이 몇개인지, 이전 지나온 오락실, 없으면 0
//int DFS(int y, int x, int cnt, int val) {
//    // 목적지에 도착 했을 때,
//    if (y == n - 1 && x == m - 1) {
//        // 목적지에 오락실이 없고, 방문 횟수가 남아있지 않으면 1
//        if (cnt == 0 && arr[y][x] == 0)
//            return 1;
//
//        // 또는 들를 횟수 1번 남아있는데, 목적지에 있는 오락실 번호 > 이전에 들른 오락실 번호면 1
//        else if (cnt == 1 && arr[y][x] > val)
//            return 1;
//
//        // 나머지는 0
//        else
//            return 0;
//    }
//
//    int &cur = chk[y][x][cnt][val];
//
//    if (cur != -1)
//        return cur;
//
//    cur = 0;
//
//    for (int i = 0; i < 2; i++) {
//        int ny = y + dy[i], nx = x + dx[i];
//
//        if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
//            continue;
//
//        // 현재 위치가 오락실이 아님
//        if (arr[y][x] == 0) {
//            cur += DFS(ny, nx, cnt, val);
//            cur %= MOD;
//        } else if (arr[y][x] > val) {
//            // 현재 위치가 지금까지 들렀던 오락실 번호 보다 큼
//            cur += DFS(ny, nx, cnt - 1, arr[y][x]);
//            cur %= MOD;
//        }
//    }
//    return cur;
//}
//
//int main() {
//    cin >> n >> m >> c;
//
//    for (int i = 1; i <= c; ++i) {
//        int a, b;
//        cin >> a >> b;
//
//        arr[--a][--b] = i;
//    }
//
//    memset(chk, -1, sizeof chk);
//
//    for (int i = 0; i <= c; i++) {
//        cout << DFS(0, 0, i, 0) << ' ';
//    }
//}
////
//// Created by Mac2 on 2021/08/23.
////
//
