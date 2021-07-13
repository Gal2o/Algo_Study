//#include <bits/stdc++.h>
//
//using namespace std;
//typedef tuple<int, int, int> tp;
//typedef pair<int, int> pl;
//
//int n;
//vector<tp> ed;
//
//// map 은 레드블랙트리, 자동으로 오름차순 정렬,
//// greater<>를 사용하면 내림차순으로 정렬한다.
//map<pl, int, greater<>> comp;
//
//// 정답 저장할 맵 (점, 높이)
//map<int, int> res;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int l, h, r;
//        cin >> l >> h >> r;
//
//        ed.push_back({l, h, r}); // 시작점, 높이, 끝점
//        ed.push_back({r, -h, l}); // 끝점, -높이, 시작점
//    }
//
//    sort(ed.begin(), ed.end());
//
//    // 처음 비교 대상의 높이는 -1로 초기화
//    int prev = -1;
////    // 가장 낮은 높이는 0으로 넣어주고 시작.
//    comp[{0, 0}] = 0;
//
//    // 넣은 점 갯수만큼 돌기
//    for (int i = 0; i < ed.size(); i++) {
//        int p1 = get<0>(ed[i]);
//        int h = get<1>(ed[i]);
//        int p2 = get<2>(ed[i]);
//
//        // h가 양수 => 시작점 / p1은 시작, p2는 끝점
//        if (h > 0) {
//            comp[{h, p1}] = p2;
//        } else {
//            // h가 음수 => 끝점 / p1은 끝점, p2는 시작
//            // 넣어둔 시작점을 삭제 한다.
//            auto it = comp.find({-h, p2}); // {-(음수높이), p2(시작점)}
//            comp.erase(it); // 지워준다.
//        }
//
//        // comp 배열은 높이 내림차순으로 정렬되고 있으므로
//        // 가장 앞에 있는 원소는 높이가 가장 높다.
//        // 끝점을 만나면 erase 하므로,
//        // 만약 시작점, 끝점 쌍을 맞춰서 다 빼내면
//        // {0,0} 이 남아있고, 아니면 시작점 {높이, 시작점} 이 남아있다.
//        auto it = comp.begin();
//        int H = it->first.first;
//
//        // res map 갱신 (정답 저장)
//        // 만약 이전 높이와 비교했을 때, 높이가 달라졌다면,
//        if (H != prev) {
//            prev = H; // 비교할 높이를 가장 앞에 있는 높이(제일 높은 높이)로 갱신
//
//            // 정답 맵(res) 에 저장
//            res[p1] = H;
//        }
//    }
//
//    // 만약 높이가 5인 건물이 연속으로 두개가 있을 때,
//    // 시작점 끝점
//    //  1    3
//    //  3    5
//    // 이럴 경우에는 높이가 변하지 않았으므로 한개만 출력해야 한다.
//    // 그러므로 이러한 작업을 해야한다.
//    // 이러한 작업을 하지 않으면 1 5 3 5 이런 식으로 두개가 출력된다.
//    prev = -1;
//    for (auto it = res.begin(); it != res.end(); it++) {
//        if (it->second != prev)
//            cout << it->first << ' ' << it->second << ' ';
//
//        prev = it->second;
//    }
//}
////
//// Created by Mac2 on 2021/07/06.
////
//
