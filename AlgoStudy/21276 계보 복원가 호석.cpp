//#include <bits/stdc++.h>
//
//#define mx 1001
//using namespace std;
//
//int n, m, indegree[mx];
//map<string, int> mp;
//vector<string> name, root;
//vector<int> ed[mx], answer[mx];
//
//// 차근차근 구현하면 되는 문제
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//
//    // 처음 n개 만큼 이름을 주는 이유
//    // 이름은 유일한 값으로 주어지므로,
//    // 사전순으로 이름을 출력해야 하므로
//    // name에 입력받아서 사전순으로 정렬을 한다.
//    for (int i = 0; i < n; i++) {
//        string a;
//        cin >> a;
//        name.push_back(a);
//    }
//    sort(name.begin(), name.end());
//
//    // 이름이 사전순으로 정렬되어 있으므로,
//    // 이름순으로, i 값으로 인덱스 처리를 한다.
//    for (int i = 0; i < n; i++)
//        mp[name[i]] = i;
//
//    cin >> m;
//
//    // 유니온 파인드는 root만 알 수 있기에,
//    // 위상정렬을 사용한다.
//    for (int i = 0; i < m; i++) {
//        string x, y;
//        // x 조상중에 y 가 있다
//        cin >> x >> y;
//
//        // x의 인덱스값, y의 인덱스값을 찾아서
//        int xNum = mp[x];
//        int yNum = mp[y];
//
//        // 제일 끝에 있는 자식에게 간선을 연결하도록 한다.
//        // 그러므로 indegree가 0 인 것은 시조가 된다.
//        ed[yNum].push_back(xNum);
//        indegree[xNum]++;
//    }
//
//    queue<int> q;
//
//    // indegree가 0인 것을 queue 에 넣고
//    // 시조 이므로, root에 넣어준다.
//    for (int i = 0; i < n; i++) {
//        if (!indegree[i]) {
//            q.push(i);
//            root.push_back({name[i]});
//        }
//    }
//
//    // 시조의 갯수와, 이름을 출력한다
//    cout << root.size() << endl;
//    for (auto i : root)
//        cout << i << ' ';
//    cout << endl;
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        for (auto i : ed[cur]) {
//            int next = i;
//            indegree[next]--;
//
//            // 간선을 하나씩 잘라서,
//            // 0이 되면, cur에 next를 넣어준다
//            if (!indegree[next]) {
//                q.push(next);
//                answer[cur].push_back(next);
//            }
//        }
//    }
//
//    // 이제 정렬된 이름순, 인덱스로 answer의 배열에 들어있는 값을 꺼내서
//    // 사이즈와 이름들을 출력해 주면된다
//    for (int i = 0; i < n; i++) {
//        cout << name[i] << ' ' << answer[i].size() << ' ';
//
//        // 위상정렬은 같은 간선 수끼리는 순서가 보장 되지 않으므로
//        // 한번 정렬을 해야 사전순으로 나온다.
//        sort(answer[i].begin(), answer[i].end());
//
//        for (auto j : answer[i])
//            cout << name[j] << ' ';
//        cout << endl;
//    }
//}
////
//// Created by Mac2 on 2021/08/03.
////
//
