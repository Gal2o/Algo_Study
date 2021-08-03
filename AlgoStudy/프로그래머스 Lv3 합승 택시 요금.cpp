//#include <bits/stdc++.h>
//
//#define mx 201
//using namespace std;
//int n = 7, s = 3, a = 4, b = 1;
//vector<vector<int>> fares = {{5, 7, 9},
//                             {4, 6, 4},
//                             {3, 6, 1},
//                             {3, 2, 3},
//                             {2, 1, 6}};
////                             {4, 6, 50},
////                             {2, 4, 66},
////                             {2, 3, 22},
////                             {1, 6, 25}};
//int arr[mx][mx];
//
//int main() {
//    int answer = 1e9;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (i == j)
//                continue;
//
//            arr[i][j] = 20000000; // 1e9로 잡으면 범위 넘어가서 -로 바뀌어서 비교가 안됌.
//        }
//    }
//
//    for (int i = 0; i < fares.size(); i++) {
//        arr[fares[i][0]][fares[i][1]] = fares[i][2];
//        arr[fares[i][1]][fares[i][0]] = fares[i][2];
//    }
//
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (arr[i][j] > arr[i][k] + arr[k][j])
//                    arr[i][j] = arr[i][k] + arr[k][j];
//            }
//        }
//    }
//
//    // 플로이드 와샬로 최단거리 갱신 후,
//    // [시작점 -> i] + [i -> a] + [i -> b] 를 더하면
//    // 정답을 알 수 있다.
//
//    // 마찬가지로 다익스트라로
//    // dijkstra(s, i) + dijkstra(i, a) + dijkstra(i, b)로
//    // chk[i], chk[a], chk[b] 를 리턴 받아서 더해도 된다.
//    for (int i = 1; i <= n; i++)
//        answer = min(answer, arr[s][i] + arr[i][a] + arr[i][b]);
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/29.
////
//
