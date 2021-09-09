//#include <bits/stdc++.h>
//
//#define endl '\n'
//using namespace std;
//int t, n, m, answer;
//string s;
//
//struct trie {
//    trie *node[123]; // 소문자 z=122, 대문자 Z=90, .=46
//    bool fin, del;
//
//    trie() {
//        memset(node, 0, sizeof node);
//        fin = false;
//        del = false;
//    }
//
//    ~trie() {
//        for (int i = 0; i < 123; ++i) {
//            if (node[i])
//                delete node[i];
//        }
//    }
//
//    void insert(const char *s, bool isdel) {
//        if (*s == NULL) {
//            // 문자열 끝, del 지워도 되는지 갱신
//            fin = del = isdel;
//            return;
//        }
//
//        int now = *s;
//
//        if (!node[now])
//            node[now] = new trie();
//
//        // 지워도 되는 건지 갱신
//        del = isdel;
//
//        node[now]->insert(s + 1, isdel);
//    }
//
//    void find() {
//        // 먼저 지워도 되는 문자들은 모두 true이고
//        // 나중에 지우면 안되는 문자들을 넣었으니 false로 덮어씌워졌다
//        // BAPC (false), .(true), i, o, t(true), n,u,e (true), t,x(true)
//        // DFS를 타고 가면서 del이 true면 answer++ 하고 return
//
//        // filter 같은 경우엔 t에서 return이 된다
//        if (del) {
//            answer++;
//            return;
//        }
//
//        // 만약 단어 끝까지 왔는데 지워도 되면 answer++;
//        // return은 하면 안된다 다음 노드가 있을 수 있기 때문
//        // clean 같은 경우이다 -> 다음 단어 cleanup.~
//        if (fin)
//            answer++;
//
//        // 다음 노드가 있으면 DFS
//        for (int i = 0; i < 123; i++) {
//            if (node[i]) {
//                node[i]->find();
//            }
//        }
//    }
//};
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        trie *root = new trie;
//        answer = 0;
//
//        // 지워야 할 것들
//        cin >> n;
//        for (int i = 0; i < n; ++i) {
//            cin >> s;
//
//            // isdel을 true
//            root->insert(s.c_str(), true);
//        }
//
//        // 지우면 안되는 것들
//        cin >> m;
//        for (int i = 0; i < m; ++i) {
//            cin >> s;
//
//            // isdel을 false로
//            root->insert(s.c_str(), false);
//        }
//
//        root->find();
//        cout << answer << endl;
//
//        delete root;
//    }
//
//}
////
//// Created by Mac2 on 2021/09/01.
////
//
