//#include <bits/stdc++.h>
//
//using namespace std;
//vector<int> prices = {1, 2, 3, 2, 3};
//
//int main() {
//    vector<int> answer;
//
//    // 1은 2, 3, 2, 3 한번도 1보다 낮은적이 없으므로 4초
//    // 2는 3, 2, 3 한번도 2보다 낮은적이 없으므로 3초
//    // 3은 2, 3  바로 다음에 3보다 낮아졌으므로 1초
//    // 2는 3 낮아진적 없으므로 마지막까지 1초
//    // 3은 0초
//
//    // 10만 * 10만인데 효율성이 통과하는걸 보니 시간제약이 없는듯
//    for (int i = 0; i < prices.size(); i++) {
//        int cnt = 0;
//        for (int j = i + 1; j < prices.size(); j++) {
//            if (prices[i] > prices[j]) {
//                cnt++;
//                break;
//            } else
//                cnt++;
//        }
//
//        answer.push_back(cnt);
//    }
//
//    for (auto i : answer)
//        cout << i << ' ';
//}
////
//// Created by Mac2 on 2021/07/27.
////
//
