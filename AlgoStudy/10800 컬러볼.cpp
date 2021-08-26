//#include <bits/stdc++.h>
//
//#define mx 200001
//using namespace std;
//typedef tuple<int, int, int> tp;
//int n, answer[mx], color[mx];
//vector<tp> ball;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        int a, b;
//        cin >> a >> b;
//        ball.push_back({b, i, a}); // 크기, 공 번호, 색
//    }
//
//    // 3 1 3
//    // 4 4 8
//    // 1 1 10
//    // 2 3 15
//    // 공 크기 오름차 순으로
//    sort(ball.begin(), ball.end());
//
//    // 비교를 위한 index, 지금까지 뽑은 공 크기 합
//    // next가 풀이에서 가장 중요한 키워드
//    int next = 0, hap = 0;
//    for (auto i : ball) {
//        // 공을 작은 크기 부터 뽑는다 => idx번 공을 뽑는다
//        auto[sz, idx, c] = i;
//        tp prev = ball[next];
//
//        // 비교할 공은 마찬가지로 제일 크기가 작은 공부터 시작
//        // 비교할 공들은 현재 뽑은 공보다 크기가 작아야만 잡을 공에 포함한다
//        // ex.
//        // 1 10
//        // 2 10
//        // 3 10 이면, 아무도 공을 잡을 수 없다
//        while (sz > get<0>(prev)) {
//            // 자기보다 작은 공들을 hap에 더해주고
//            hap += get<0>(prev);
//            // 색 별로도 합해준다
//            color[get<2>(prev)] += get<0>(prev);
//
//            // 그리고 그 다음 크기의 공을 뽑는다
//            prev = ball[++next];
//        }
//
//        // 현재 공 번호가 잡을 수 있는 공은
//        // 지금까지 뽑은 공(hap) - 현재 뽑은 공의 색과 같은 공들의 합(color[c])
//        answer[idx] = hap - color[c];
//    }
//
//    for (int i = 1; i <= n; i++)
//        cout << answer[i] << '\n';
//}
////
//// Created by Mac2 on 2021/08/03.
////
//
