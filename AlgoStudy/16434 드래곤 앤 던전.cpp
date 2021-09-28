//#include <bits/stdc++.h>
//
//#define fastio ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
//#define endl '\n'
//#define mxHp 1e18
//using namespace std;
//typedef long long ll;
//typedef tuple<ll, ll, ll> tp;
//
//int n, atk;
//vector<tp> info;
//
//bool simul(ll hp) {
//    ll pAtk = atk, pHp = hp;
//
//    for (auto i: info) {
//        auto[t, a, h] = i;
//
//        if (t == 1) {
//            // 몹의 공격력, 체력, 몹의 공격 횟수 (몬스터 체력 / 내 공격력) 만큼 살 수 있다
//            ll eAtk = a, eHp = h, eCnt;
//
//            // 만약 몬스터 체력 / 내 공격력이 딱 떨어진다면, => eCnt
//            // 몬스터는 먼저 죽으므로, eCnt - 1 번 공격할 수밖에 없다
//            if (eHp % pAtk == 0)
//                eCnt = eHp / pAtk - 1;
//            else
//                eCnt = eHp / pAtk;
//
//            // 내 체력에서 횟수 * 몬스터 공격력 만큼 데미지 빼기
//            pHp -= eAtk * eCnt;
//
//            if (pHp <= 0)
//                return false;
//
//        } else {
//            // 포션으로 채우기
//            pAtk += a, pHp += h;
//            pHp = min(pHp, hp);
//        }
//    }
//
//    return true;
//}
//
//int main() {
//    fastio
//
//    cin >> n >> atk;
//
//    for (int i = 0; i < n; ++i) {
//        int t, a, h;
//
//        cin >> t >> a >> h;
//
//        info.emplace_back(t, a, h);
//    }
//
//    ll st = 0, ed = mxHp, answer;
//
//    while (st < ed) {
//        ll mid = (st + ed) / 2;
//
//        if (!simul(mid)) {
//            st = mid + 1;
//        } else {
//            ed = mid;
//            answer = mid;
//        }
//    }
//
//    cout << answer << endl;
//}
////
//// Created by Mac2 on 2021/09/15.
////
//
