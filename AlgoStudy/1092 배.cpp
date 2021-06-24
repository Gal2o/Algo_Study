//#include <bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, bool> pl;
//int n, m, a;
//vector<int> crain, box;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a;
//        crain.push_back(a);
//    }
//    sort(crain.begin(), crain.end(), greater<int>());
//
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        cin >> a;
//        box.push_back(a);
//    }
//    sort(box.begin(), box.end(), greater<int>());
//
//    int time = 0, escape = 0;
//
//    /*
//     * 반례
//     * 3
//     * 6 8 9
//     * 9
//     * 1 2 3 4 5 6 7 8 9
//     *
//     * 작은 순서 대로 하면 시간이 4가 걸린다.
//     * 큰 순서대로 뽑아야
//     * time = 1 > 9 8 6
//     * time = 2 > 7 5 4
//     * time = 3 > 3 2 1
//     * 로 최솟값 판별
//     */
//    while (1) {
//        if (box.empty())
//            break;
//
//        bool flag = false;
//
//        for (auto c : crain) {
//            for (int i = 0; i < box.size(); i++) {
//                if (c >= box[i]) {
//                    box.erase(box.begin() + i);
//                    escape++;
//                    flag = true;
//                    break;
//                }
//            }
//        }
//
//        if (!flag)
//            break;
//
//        time++;
//    }
//
//    if (!box.empty())
//        cout << -1 << endl;
//    else cout << time << endl;
//}
////
//// Created by Mac2 on 2021/06/21.
////
//
