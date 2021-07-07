//#include <bits/stdc++.h>
//
//#define mx 10001
//using namespace std;
//typedef long long ll;
//int n;
//ll cnt; // 10000 * 10000 * 10000 은 21억 이상
//vector<int> arr;
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a;
//        cin >> a;
//
//        arr.push_back(a);
//    }
//
//    // 일단 오름차순으로 정렬.
//    sort(arr.begin(), arr.end());
//
//    // 세 용액과 비슷하게 값 하나 고정 하고 투포인터 시작
//    for (int i = 0; i < n; i++) {
//        int st = i + 1, ed = n - 1;
//
//
//        while (st < ed) {
//            int hap = arr[i] + arr[st] + arr[ed];
//
//            // 만약 세 개의 합이 같다면,
//            if (hap == 0) {
//                // 만약 st ~ ed 가 다 같은 값이면 ?
//                if (arr[st] == arr[ed]) {
//                    // nC2 가 전체 갯수 (조합)
//                    cnt += (ed - st + 1) * (ed - st) / 2;
//                    break;
//                } else {
//                    // 만약 오른쪽에 중복 값이 있다면
//                    int r = arr[ed], rcnt = 0;
//                    // 하나씩 왼쪽으로 땡기면서(ed--) 같은 값이 아닐 때까지 rcnt 증가
//                    while (r == arr[ed])
//                        ed--, rcnt++;
//
//                    // 왼쪽에도 중복 값이 있다면, 같은 개념으로 lcnt 증가
//                    int l = arr[st], lcnt = 0;
//                    while (l == arr[st])
//                        st++, lcnt++;
//
//                    // 두 갯수의 곱이 전체 갯수
//                    cnt += (rcnt * lcnt);
//                }
//            } else if (hap < 0) // 0이 아닌데 음수다 st++
//                st++;
//            else                // 0이 아닌데 양수다 ed--
//                ed--;
//        }
//    }
//
//    cout << cnt << endl;
//}
////
//// Created by Mac2 on 2021/06/25.
////
//
//
