//#include <bits/stdc++.h>
//
//#define endl '\n'
//using namespace std;
//
//int n, ans;
//bool init;
//
//struct trie {
//    bool fin;
//    int cnt; // 자식 갯수 세기용
//    trie *node[26];
//
//    trie() {
//        memset(node, NULL, sizeof node);
//        fin = false;
//        cnt = 0;
//    }
//
//    ~trie() {
//        for (int i = 0; i < 26; ++i) {
//            if (node[i])
//                delete node[i];
//        }
//    }
//
//    void insert(const char *s) {
//        if (*s == NULL) {
//            fin = true;
//            return;
//        }
//
//        int now = *s - 'a';
//
//        // 자식 만들 때마다 가진 노드의 수 ++
//        if (!node[now]) {
//            node[now] = new trie();
//            cnt++;
//        }
//
//        node[now]->insert(s + 1);
//    }
//
//    void find(const char *s) {
//        if (*s == NULL)
//            return;
//
//        // 처음 글자는 무조건 입력해야한다
//        if (init) {
//            init = false;
//            ans++;
//        } else {
//            // 두번째 글자부터,
//            // 만약에 글자가 마지막 글자라면 입력해야 한다
//            if (fin) {
//                ans++;
//            } else if (cnt >= 2) {
//                // 자식 노드가 2개 이상이면 입력 해야한다
//                ans++;
//            }
//        }
//
//        int now = *s - 'a';
//
//        node[now]->find(s + 1);
//    }
//};
//
//int main() {
//    while (cin >> n) {
//        trie *root = new trie();
//
//        string s;
//        vector<string> v;
//        ans = 0;
//
//        // hello -> h입력, e자동, l입력, l자동, o입력
//        // heaven -> h입력, e자동, a입력, ven자동
//
//        // 입력받은 단어들을 모두 트라이로 만든다
//        for (int i = 0; i < n; ++i) {
//            cin >> s;
//
//            root->insert(s.c_str());
//            v.push_back(s);
//        }
//
//        // 입력 받은 단어들을 find로 돌리면서 ans를 갱신한다
//        for (int i = 0; i < n; ++i) {
//            init = true; // 첫 시작은 true
//
//            root->find(v[i].c_str());
//        }
//
//        printf("%.2f\n", (double) ans / n);
//
//        delete root;
//    }
//}
////
//// Created by Mac2 on 2021/08/31.
////
//
