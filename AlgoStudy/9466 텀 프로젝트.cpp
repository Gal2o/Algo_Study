//#include <iostream>
//
//using namespace std;
//int t, n, ans;
//int map[100001], chk[100001], done[100001]; // 입력, 체크, 팀 확인 여부
//
//void dfs(int idx) {
//    // 노드를 방문해서 체크
//    chk[idx] = 1;
//
//    // 다음 가야할 노드
//    int next = map[idx];
//
//    // 다음 가야할 노드를 방문한 적이 없으면 체크 후 dfs
//    if (!chk[next])
//        dfs(next);
//
//    // 방문한 노드가 팀이 만들어져 있지 않으면
//    else if (!done[next]) {
//
//        // 노드들의 값을 순회하면서 팀이 만들어지는 사람 증가
//        for (int i = next; i != idx; i = map[i])
//            ans++;
//
//        // 자기 자신 증가
//        ans++;
//    }
//
//    // 팀 확인 여부를 체크하고 return
//    done[idx] = 1;
//}
//
//int main() {
//    scanf("%d", &t);
//
//    for (int i = 0; i < t; i++) {
//        scanf("%d", &n);
//
//        for (int j = 1; j <= n; j++)
//            scanf("%d", &map[j]), chk[j] = 0, done[j] = 0;
//
//        // 팀이 되는 사람들의 수 count
//        ans = 0;
//
//        // chk가 안되어 있는 노드를 방문한다.
//        for (int i = 1; i <= n; i++)
//            if (!chk[i])
//                dfs(i);
//
//        printf("%d\n", n - ans);
//    }
//}
////
//// Created by Mac2 on 2021/05/12.
//// 다시 한번 풀어보기