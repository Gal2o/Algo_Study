//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mx 51
//using namespace std;
//
//int r1, c1, r2, c2;
//int arr[mx][mx];
//int hy[4] = {0, -1, 0, 1}, hx[4] = {1, 0, -1, 0};
//
//int main() {
//    cin >> r1 >> c1 >> r2 >> c2;
//
//    int su = 1, y = 0, x = 0, d = 0;
//    int dcnt = 1; // 한 소용돌이 방향으로 몇 칸 갈 수 있는지
//    int cnt = 0; // 지금 몇 칸 이동했는지
//
//    // 양 끝점이 0이 아니면 다채워짐
//    // 처음에 이동을 dcnt씩 묶어서 이동했는데,
//    // 그럴 경우 방향이 왼쪽 or 오른쪽일때, while 안의 범위를 su가 넘을 수가 있다.
//    /*
//     * ex.
//     * 0 0 0 0 0
//     * 0 5 4 3 0
//     * 0 6 1 2 0
//     * 0 7 8 9 10
//     * 0 0 0 0 0
//     * 9 까지를 [r2-r1][c2-c1] 이라 하면,
//     * dcnt는 7에서 오른쪽으로 갈때, 3만큼 가므로,
//     * 9 에서 탈출을 시켜줘야 자릿수 출력 때, 공백이 0칸
//     * 만약 su를 10까지 증가하게 하면 공백이 1칸 이므로 출력형식 오류 발생
//     */
//    while (!(arr[0][0] != 0 && arr[r2 - r1][0] != 0
//             && arr[0][c2 - c1] != 0 && arr[r2 - r1][c2 - c1] != 0)) {
//
//        // 맵이 범위 안에서만 적어주고
//        if (y >= r1 && x >= c1 && y <= r2 && x <= c2) {
//            arr[y - r1][x - c1] = su;
//        }
//
//        // 맵 범위가 아니면 su 증가만
//        su++, cnt++;
//        y += hy[d], x += hx[d];
//
//        if (cnt == dcnt) {
//            cnt = 0;
//            d++;
//
//            if (d > 3)
//                d = 0;
//
//            // 왼쪽 or 오른쪽이면 소용돌이 가는 방향이 1증가한다.
//            if (d == 0 || d == 2)
//                dcnt++;
//        }
//    }
//
//    // 출력 형식이 잘못되었습니다.
//    // 자릿수 만큼 띄어쓰기 해줘야함.
//    cnt = 0;
//    while (su > 0) {
//        su /= 10;
//        cnt++;
//    }
//
//    for (int i = 0; i <= r2 - r1; ++i) {
//        for (int j = 0; j <= c2 - c1; ++j) {
//            printf("%*d ", cnt, arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//// Created on 2021/11/08.