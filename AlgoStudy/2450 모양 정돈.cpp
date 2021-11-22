//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//
//int n, answer = 1e9;
//int arr[100000];
//int cnt[4];
//vector<int> v;
//
//int main() {
//    fastio
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//        cnt[arr[i]]++;
//    }
//
//    v.emplace_back(1);
//    v.emplace_back(2);
//    v.emplace_back(3);
//
//    // 나올 수 있는 정렬 경우의 수
//    // 1 2 3 / 1 3 2 / 2 1 3 / 2 3 1 / 3 1 2 / 3 2 1
//    do {
//        // 1 3 3 2 1 1 3 2
//        // 최소 교환 횟수 구하는 방법
//        // [그룹 1]에 있는 [그룹 (2, 3)]의 갯수 +
//        // max([그룹 2]에 있는 [그룹 3]의 갯수, [그룹 3]에 있는 [그룹 2]의 갯수)
//        // ---------------
//        // 1 1 1 2 2 3 3 3 -> 1에는 3이 두개 => 2 / 2에는 3이 1개, 3에는 1, 2 2개 => 1
//
//        int val[4];
//        int brr[4][4];
//        memset(brr, 0, sizeof brr);
//
//        // idx는 arr을 탐색하기 위한 가중치
//        // 조합이 2 1 3 일 때, 2가 2개이면,
//        // 0 1 검사하고 idx += 2
//        // 2 3 4 검사하고 idx += 3
//        // 5 6 7 검사하고 idx += 3
//        int idx = 0;
//        // 조합 만들기
//        for (int i = 0; i < v.size(); ++i) {
//            // 2 1 3 이면,
//            // 1번 그룹은 2, 2번 그룹은 1, 3번 그룹은 3
//            val[i] = v[i];
//            // i 번째 오는 수의 갯수만큼 for문 돌면서
//            for (int j = 0; j < cnt[v[i]]; ++j) {
//                // 만약 조합이 2 1 3 이면
//                // 2 그룹에 어떤 수가 몇 개 있는지
//                // 1 그룹에 어떤 수가 몇 개 있는지
//                // 3 그룹에 어떤 수가 몇 개 있는지 적어두고,
//                brr[v[i]][arr[idx + j]]++;
//            }
//            // idx는 그룹의 크기 만큼 증가
//            idx += cnt[v[i]];
//        }
//
//        // 그룹 1에 있는 그룹 2, 3의 갯수 + max(그룹 2에 있는 그룹 3 갯수, 그룹 3에 있는 그룹 2갯수)
//        answer = min(answer, brr[val[0]][val[1]] + brr[val[0]][val[2]]
//                             + max(brr[val[1]][val[2]], brr[val[2]][val[1]]));
//
//    } while (next_permutation(v.begin(), v.end()));
//
//    cout << answer << endl;
//}
//// Created on 2021/11/22.