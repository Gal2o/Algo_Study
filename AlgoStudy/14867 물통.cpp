//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//using namespace std;
//typedef tuple<int, int, int> tp;
//typedef pair<int, int> pl;
//
//int a, b, c, d;
//int answer = 1e9;
//set<pl> st;
//
//int main() {
//    cin >> a >> b >> c >> d;
//
//    priority_queue<tp, vector<tp>, greater<>> pq;
//    st.emplace(0, 0);
//    pq.emplace(0, 0, 0);
//
//    while (!pq.empty()) {
//        auto[cnt, ra, rb] = pq.top();
//        pq.pop();
//
//        if (ra == c && rb == d)
//            return cout << cnt << endl, 0;
//
//        // F(a)
//        if (ra < a && !st.count({a, rb})) {
//            st.emplace(a, rb);
//            pq.emplace(cnt + 1, a, rb);
//        }
//
//        // F(b)
//        if (rb < b && !st.count({ra, b})) {
//            st.emplace(ra, b);
//            pq.emplace(cnt + 1, ra, b);
//        }
//
//        // E(a)
//        if (ra > 0 && !st.count({0, rb})) {
//            st.emplace(0, rb);
//            pq.emplace(cnt + 1, 0, rb);
//        }
//
//        // E(b)
//        if (rb > 0 && !st.count({ra, 0})) {
//            st.emplace(ra, 0);
//            pq.emplace(cnt + 1, ra, 0);
//        }
//
//        // M(a,b) a -> b
//        if (b > rb) {
//            // b - rb (b 물통에 남아있는 공간)
//            if (b - rb >= ra) {// a에 남아있는 물보다 b의 빈공간이 크다면, 다 부어버리기
//                if (!st.count({0, rb + ra})) {
//                    st.emplace(0, rb + ra);
//                    pq.emplace(cnt + 1, 0, rb + ra);
//                }
//            } else {
//                // a에 남아있는 물이 b의 빈공간 보다 크다면, 꽉 찰만큼만 붓기
//                if (!st.count({ra - (b - rb), rb + (b - rb)})) {
//                    st.emplace(ra - (b - rb), rb + (b - rb));
//                    pq.emplace(cnt + 1, ra - (b - rb), rb + (b - rb));
//                }
//            }
//        }
//
//        // M(a,b)와 동일하게
//        // M(b,a) b -> a
//        if (a > ra) {
//            if (a - ra >= rb) {
//                if (!st.count({ra + rb, 0})) {
//                    st.emplace(ra + rb, 0);
//                    pq.emplace(cnt + 1, ra + rb, 0);
//                }
//            } else {
//                if (!st.count({ra + (a - ra), rb - (a - ra)})) {
//                    st.emplace(ra + (a - ra), rb - (a - ra));
//                    pq.emplace(cnt + 1, ra + (a - ra), rb - (a - ra));
//                }
//            }
//        }
//    }
//
//    cout << -1 << endl;
//}
//// Created on 2021/11/22.