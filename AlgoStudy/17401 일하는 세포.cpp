//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//
//// 주기 T, 거점 갯수 N
//// 적혈구가 움직이는 시간 D, 거점 잇는 혈관 갯수 M
//int t, n, d, m;
//
//struct matrix {
//    ll arr[21][21];
//
//    matrix() {
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < n; ++j) {
//                arr[i][j] = 0;
//            }
//        }
//    }
//};
//
//matrix init[101], temp, st;
//
//matrix operator*(const matrix &a, const matrix &b) {
//    matrix c;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            for (int k = 0; k < n; ++k) {
//                c.arr[i][j] += (a.arr[i][k] * b.arr[k][j]);
//                c.arr[i][j] %= MOD;
//            }
//        }
//    }
//
//    return c;
//}
//
//// 분할정복
//matrix pow(matrix a, ll b) {
//    // 몫이 0이면 기본행렬이랑 곱하게 하고
//    if (b == 0)
//        return temp;
//
//    // 1일 경우도 기본행렬이랑 곱하기
//    if (b & 1)
//        return a * pow(a, b - 1);
//
//    // 아니면 pow해서 지수 줄이기
//    matrix res = pow(a, b / 2);
//    return res * res;
//}
//
//int main() {
//    fastio
//    cin >> t >> n >> d;
//
//    for (int k = 0; k < t; ++k) {
//        cin >> m;
//
//        for (int i = 0; i < m; ++i) {
//            int a, b, c;
//            cin >> a >> b >> c;
//
//            init[k].arr[a - 1][b - 1] = c;
//        }
//    }
//
//    for (int i = 0; i < n; ++i)
//        temp.arr[i][i] = 1;
//
//    st = init[0];
//    for (int i = 1; i < t; ++i)
//        st = st * init[i];
//
//    // 몫 만큼 제곱을 몇 번 할지
//    // => D가 1e9 이고, t가 6 이라하면,
//    // 1e9하면 터지므로, 몫으로 몇 번 제곱할지 알 수 있다.
//    st = pow(st, d / t);
//
//    // 나머지는 이제 혈관지도를 곱해준다
//    for (int i = 0; i < d % t; ++i)
//        st = st * init[i];
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << st.arr[i][j] << ' ';
//        }
//        cout << endl;
//    }
//
//}
//// Created on 2021/10/14.