//#include <bits/stdc++.h>
//
//#define endl '\n'
//using namespace std;
//
//int n, k;
//
//// 이런 방법으로 사용할 수 있다
//// 전체를 익히기
//struct trie {
//
//    // map 안에 string, trie 노드로 선언
//    map<string, trie *> mp;
//
//    trie() {
//
//    }
//
//    ~trie() {
//        for (auto it = mp.begin(); it != mp.end(); it++)
//            delete it->second;
//    }
//
//    // ex. p는 이런식으로 입력되어 있으면,
//    //   0     1     2
//    // APPLE BANANA KIWI
//    void insert(vector<string> &p, int idx) {
//        if (idx == p.size())
//            return;
//
//        // 만약 p[idx]에서 안들어간게 있으면, 새로운 트라이 만들고,
//        // 아니면 있었던 트라이 타고 가서
//        // 다음 idx의 string들 순회
//        if (mp.find(p[idx]) == mp.end())
//            mp[p[idx]] = new trie();
//
//        mp[p[idx]]->insert(p, idx + 1);
//    }
//
//    // 처음 트라이의 depth는 0
//    void find(int depth) {
//        // 없으면 for문이 바로 끝난다
//        for (auto it = mp.begin(); it != mp.end(); it++) {
//            // 타고 들어간 depth 만큼 -- 출력하기
//            for (int i = 0; i < depth; i++)
//                cout << "--";
//            cout << it->first << endl;
//
//            // trie 끝까지 타고 가기 -> depth + 1
//            it->second->find(depth + 1);
//        }
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> n;
//
//    trie *root = new trie();
//    for (int i = 0; i < n; ++i) {
//        cin >> k;
//
//        vector<string> s;
//
//        // string 단위로 들어간다
//        // [KIWI][BANANA]
//        // [KIWI][APPLE]
//        for (int j = 0; j < k; ++j) {
//            string a;
//            cin >> a;
//
//            s.push_back(a);
//        }
//
//        root->insert(s, 0);
//    }
//
//    root->find(0);
//    delete root;
//}
////
//// Created by Mac2 on 2021/08/31.
////
//
