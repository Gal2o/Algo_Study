//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, k, ans = 1e9;
//int arr[10][10], chk[10];
//
//// 플로이드 와샬 + DFS 문제
//void DFS(int idx, int cnt, int hap) {
//    if (cnt == n) {
//        // 최소 값 갱신
//        if (ans > hap)
//            ans = hap;
//        return;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (i == idx)
//            continue;
//
//        // 방문 한적 없으면, 체크 & 거리의 합 ++
//        if (!chk[i]) {
//            chk[i] = 1;
//            DFS(i, cnt + 1, hap + arr[idx][i]);
//            chk[i] = 0;
//        }
//    }
//}
//
//int main() {
//    cin >> n >> k;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> arr[i][j];
//
//    // 플로이드 와샬
//    // 각 정점까지 가는 거리의 최소 값을 갱신
//    for (int k = 0; k < n; k++) { // 거쳐가는 노드
//        for (int i = 0; i < n; i++) { // 출발
//            for (int j = 0; j < n; j++) { // 도착
//                // i,1 + 1+j 가 기존 i,j 보다 작으면 갱신한다.
//                if (arr[i][k] + arr[k][j] < arr[i][j])
//                    arr[i][j] = arr[i][k] + arr[k][j];
//            }
//        }
//    }
//
//    // 출발 k에서 부터 각 정점까지 들렀을 때, 최소가 답.
//    // 출발 이므로 체크 하고 DFS 시작
//    chk[k] = 1;
//    DFS(k, 1, 0);
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/29.
////
//
