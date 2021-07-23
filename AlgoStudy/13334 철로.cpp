//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> pl;
//
//int n, a, b, d, answer;
//vector<pl> arr, tmp;
//
//// multimap 은 중복이 된다.
//multimap<int, int> mp;
//
//bool comp(const pair<int, int> a, const pair<int, int> b) {
//    if (a.second == b.second)
//        return a.first < b.first;
//
//    return a.second < b.second;
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cin >> a >> b;
//
//        arr.push_back({min(a, b), max(a, b)});
//    }
//
//    cin >> d;
//
//    // 정렬 문제 때문에 틀린 문제
//    // 끝점 기준으로 오름차순으로 잡아야 한다.
//    // comp 함수를 만들어서 끝점 비교 후,
//    // 끝점이 작은 순으로 정렬, 만약 끝점이 같다면 시작점이 작은 순
//
//    // comp를 안쓰고 끝점, 시작점으로 arr에 넣어서 sort를 하게 되면,
//    // 정렬은 올바르게 되지만, map에 그대로 넣었을 때, 다시 정렬이 되면서 답이 틀리게 된다.
//    // 그러므로 map에 넣을 때는, {시작점, 끝점}으로 바꿔서 넣어줘야 틀리지 않는다.
//    sort(arr.begin(), arr.end(), comp);
//
//    // arr 탐색
//    for (auto i : arr) {
//        // 시작점 + d 가 끝점 이상 이면 넣는다.
//        if (i.first + d >= i.second)
//            mp.insert(i);
//
//        // map 탐색
//        // arr i번째 끝점이 map의 begin -> 시작점 + d 보다 크다면
//        // 제일 앞의 map 요소를 지운다. 아니면 break
//        for (auto it = mp.begin(); it != mp.end(); it = mp.begin()) {
//            if (it->first + d >= i.second)
//                break;
//
//            mp.erase(it);
//        }
//
//        answer = max(answer, (int) mp.size());
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/07/21.
////
//
