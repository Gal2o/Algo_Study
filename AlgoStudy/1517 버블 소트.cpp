//#include <bits/stdc++.h>
//
//#define mx 500001
//using namespace std;
//typedef long long ll;
//int N;
//ll answer;
//int arr[mx];
//int result[mx];
//
//void merge(int left, int mid, int right) {
//    int L = left;
//    int R = mid + 1;
//    int index = left;
//
//    while (L <= mid && R <= right) {
//        if (arr[L] <= arr[R]) {
//            result[index++] = arr[L++];
//        } else {
//            // swap 하는 부분
//            // 버블 정렬은 i > i+1 일때, swap이 이루어지므로
//            // arr[index] > arr[R] 일 경우,
//            // R - index 차이가 swap의 횟수이다.
//            // 병합 정렬에서는 1번으로 swap을 하므로 횟수에 인덱스 만큼의 차이를 더해준다
//            answer += (ll) (R - index);
//            result[index++] = arr[R++];
//        }
//    }
//
//    if (L <= mid) {
//        for (int i = L; i <= mid; i++) {
//            result[index++] = arr[i];
//        }
//    } else {
//        for (int i = R; i <= right; i++) {
//            result[index++] = arr[i];
//        }
//    }
//
//    for (int i = left; i <= right; i++)
//        arr[i] = result[i];
//}
//
//void mergesort(int left, int right) {
//    if (left < right) {
//        int mid = (left + right) / 2;
//
//        mergesort(left, mid);
//        mergesort(mid + 1, right);
//        merge(left, mid, right);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0);
//
//    cin >> N;
//
//    for (int i = 0; i < N; ++i) {
//        cin >> arr[i];
//    }
//
//    mergesort(0, N - 1);
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/08/10.
////
//
