//#include <bits/stdc++.h>
//
//#define mx 3000001
//using namespace std;
//
//int n, d, k, c;
//int ans, cnt;
//int arr[mx], chk[3001];
//deque<int> q;
//
//int main() {
//
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n >> d >> k >> c;
//
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    // 맨 처음 k만큼 큐에 넣고 최대값 구한다.
//    for (int i = 0; i < k; i++) {
//        q.push_back(arr[i]);
//
//        // chk = 0 이면 갯수 증가
//        if (!chk[arr[i]])
//            cnt++;
//
//        chk[arr[i]]++;
//
//        ans = max(ans, cnt);
//    }
//
//    // 슬라이딩 윈도우 돌기
//    for (int i = 0; i < n - 1; i++) {
//        // 맨 앞에 초밥 빼기
//        q.pop_front();
//        // 해당 초밥의 가짓수--
//        chk[arr[i]]--;
//
//        // 만약 해당 초밥이 중복이 아니였으면 cnt--
//        if (!chk[arr[i]])
//            cnt--;
//
//        // 슬라이딩 윈도우의 마지막 인덱스는 (i + k) % n
//        int next = arr[(i + k) % n];
//        q.push_back(next);
//
//        // 다음 들어올 초밥이 중복이 없으면 cnt++
//        if (!chk[next])
//            cnt++;
//
//        // 방금 들어온 초밥 chk ++
//        chk[next]++;
//
//        // 쿠폰 초밥은 연속해있지 않아도 된다. ((슬라이딩 윈도우) 연속으로 먹었을 때, 주어지는 혜택)
//        // 만약 쿠폰으로 먹는 초밥이 중복이 아니면 cnt + 1
//        if (!chk[c])
//            ans = max(ans, cnt + 1);
//        else // 아니면 그냥 cnt
//            ans = max(ans, cnt);
//    }
//
//    cout << ans << endl;
//}
////
//// Created by Mac2 on 2021/06/22.
////
//
