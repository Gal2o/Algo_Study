//#include <bits/stdc++.h>
//
//#define mx 1000001
//#define endl '\n'
//#define swap(x, y, temp) ( (temp = x), (x = y), (y = temp) )
//using namespace std;
//
//int n;
//int arr[mx];
//
//// 최악의 경우 역순일 때, O(n2), 보통은 O(nlogN)
//void quick_sort(int left, int right) {
//    // 원소가 1개 일때 return
//    if (left >= right)
//        return;
//
//    // pivot은 가장 왼쪽으로 두기
//    int pivot = left;
//    // low는 pivot 바로 앞, high는 분할의 끝주소
//    int low = pivot + 1, high = right;
//    int temp; // swap 임시 변수
//
//    // low, high가 교차될 때까지
//    while (low <= high) {
//        while (low <= high && arr[low] <= arr[pivot])
//            low++;
//
//        while (high > left && arr[high] >= arr[pivot])
//            high--;
//
//        // 왼쪽, 오른쪽이 교차 됬다면,
//        if (low > high) {
//            // pivot과 교환
//            swap(arr[high], arr[pivot], temp);
//        } else {
//            // 왼쪽, 오른쪽이 교차가 아니면,
//            // low, high 끼리 swap
//            swap(arr[low], arr[high], temp);
//        }
//    }
//
//    // 분할 하기
//    quick_sort(left, high - 1);
//    quick_sort(high + 1, right);
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    quick_sort(0, n - 1);
//
//    for (int i = 0; i < n; ++i) {
//        cout << arr[i] << endl;
//    }
//}
////
//// Created by Mac2 on 2021/09/01.
////
//
