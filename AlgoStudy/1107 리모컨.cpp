//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, m, st = 100;
//int broken[10];
//int answer = 1e9;
//
//// 바로 떠올리기 힘들었던 문제
//void dfs(string su, int cnt, int idx) {
//    // 최대 채널은 500000이므로 자릿수가 6이 넘어가면 return
//    // 이런 제한을 둔 이유는 만약 채널이 99999인데
//    // 고장난 버튼이 2 3 4 5 6 7 8 9이면, 100000 에서 -1하면 최솟값
//    // 즉, 자릿수가 주어진 채널을 넘어간다 해도 최소값은 더 높은 자릿수에서 발생할 수 있기 때문,
//    if (idx > 6)
//        return;
//
//    // 누른 채널이 자릿수가 0보다 커야 Segfault 가 안난다
//    // |주어진 채널 - 선택한 채널| + 채널 누른 횟수로 최소값 갱신
//    if (su.size() > 0) {
//        int temp = cnt + abs(n - stoi(su));
//        if (answer > temp)
//            answer = temp;
//    }
//
//    for (int i = 0; i < 10; i++) {
//        if (broken[i])
//            continue;
//
//        // 고장난 버튼을 제외하고 0 ~ 9 까지 채널을 눌러본다.
//        string p = to_string(i);
//        dfs(su + p, cnt + 1, idx + 1);
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    // 일단 고장난 버튼은 체크 해준다.
//    for (int i = 0; i < m; i++) {
//        int a;
//        cin >> a;
//
//        broken[a] = 1;
//    }
//
//    // 주어진 채널이 시작 채널 100과 같다면 바로 끝내기
//    if (n == st) {
//        cout << 0 << endl;
//        return 0;
//    } else {
//        // 아니라면 일단 +, - 버튼 만으로 횟수를 구해서 answer에 갱신 시킨다.
//        // |n - st| 가 채널의 차이므로, +,- 으로만 누를 수 있는 횟수
//        int temp = abs(n - st);
//
//        if (answer > temp)
//            answer = temp;
//
//        // 그리고 빈 문자열, 누른 횟수 = 0, 현재 자릿수 = 0로 완탐 시작
//        dfs("", 0, 0);
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/26.
////
//
