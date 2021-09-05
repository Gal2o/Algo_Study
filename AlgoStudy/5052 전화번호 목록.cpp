//#include <bits/stdc++.h>
//
//using namespace std;
//
//int t, n;
//
//struct TRIE {
//    TRIE *nd[10];
//    bool fin;
//    bool isnext;
//
//    TRIE() {
//        fin = isnext = false;
//        for (int i = 0; i < 10; ++i) {
//            nd[i] = NULL;
//        }
//    }
//
//    ~TRIE() {
//        for (int i = 0; i < 10; ++i) {
//            if (nd[i])
//                delete nd[i];
//        }
//    }
//
//    void insert(const char *s) {
//        // 입력 받은 문자열의 끝에 도착했다면,
//        if (*s == NULL) {
//            fin = true;
//            return;
//        }
//
//        int now = *s - '0';
//        // 다음 글자가 없는 경우 새로 트라이 만들어서 따라가기
//        if (!nd[now])
//            nd[now] = new TRIE;
//
//        // 다음 노드로 가기
//        nd[now]->insert(s + 1);
//    }
//
//    bool find(const char *s) {
//        // 입력받은 문자열이 끝이다
//        // 포함되는 부분이 없으므로 true
//        if (*s == NULL)
//            return true;
//
//        // 도중에 fin == true 가 나왔다면,
//        // a=91 12 54 26 , s=911 같은 상태가 발생
//        if (fin)
//            return false;
//
//        int now = *s - '0';
//
//        return nd[now]->find(s + 1);
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//
//        TRIE *root = new TRIE;
//        vector<string> s;
//        bool flag = true;
//
//        for (int i = 0; i < n; ++i) {
//            string a;
//            cin >> a;
//
//            // 입력 받은 모든 트라이 생성
//            root->insert(a.c_str());
//            // 트라이에서 찾기 위해 s에 따로 저장
//            s.push_back(a);
//        }
//
//        for (int i = 0; i < n; ++i) {
//            // 일관성이 아직 유지 되고 있다면,
//            // find를 사용해서 찾는다
//            if (flag)
//                flag = root->find(s[i].c_str());
//
//            // 일관성이 깨지면 바로 break
//            if (!flag)
//                break;
//        }
//
//        if (!flag)
//            cout << "NO" << endl;
//        else
//            cout << "YES" << endl;
//
//        delete root;
//    }
//}
////
//// Created by Mac2 on 2021/08/30.
////
//
