//#include <iostream>
//#include <string>
//#include <math.h>
//
//using namespace std;
//int n, width;
//double answer;
//char map[5][100];
//string v[10];
//
//string bulb[10] = { // 0 ~ 9 까지 전등 정보를 저장한다.
//        {"####.##.##.####"},
//        {"..#..#..#..#..#"},
//        {"###..#####..###"},
//        {"###..####..####"},
//        {"#.##.####..#..#"},
//        {"####..###..####"},
//        {"####..####.####"},
//        {"###..#..#..#..#"},
//        {"####.#####.####"},
//        {"####.####..####"},
//};
//
//int main() {
//    cin >> n;
//
//    width = 4 * n - 1; // n 일때 가로의 크기
//
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < width; j++) {
//            cin >> map[i][j];
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < width; j++) {
//            // 4로 나눴을 때, 3이면 빈 공간이므로 스킵하고
//            // 몫이 각 자리수의 배열 index이므로 v[0 ~ n-1]에 정보를 저장한다.
//            if (j % 4 == 3)
//                continue;
//
//            v[j / 4].push_back(map[i][j]);
//        }
//    }
//
//    // 0부터 n-1 까지 입력된 전등 값을 돌면서
//    for (int k = 0; k < n; k++) {
//        double tmp = 0;
//        int cnt = 0;
//
//        // 0부터 9까지 가능한 숫자를 확인한다.
//        for (int i = 0; i < 10; i++) {
//            bool flag = true;
//
//            // 입력된 정보가 #인데 전등 정보가 .이면 유효한 전등이 아니므로 스킵한다.
//            for (int j = 0; j < bulb[i].size(); j++) {
//                if (v[k][j] == '#' && bulb[i][j] == '.') {
//                    flag = false;
//                    break;
//                }
//            }
//
//            // 모든 값의 합은 (각 자리수의 가능한 숫자들의 합 / 가능한 숫자의 개수) * 10^(n - k + 1)
//            if (flag) {
//                tmp += (i * pow(10, n - (k + 1)));
//                cnt++;
//            }
//        }
//
//        // 유효한 숫자가 없다면, -1을 출력한다.
//        if (cnt == 0) {
//            cout << -1 << endl;
//            return 0;
//        }
//
//        answer += tmp / cnt;
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/04/28.
////
//
