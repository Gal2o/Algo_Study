//#include <iostream>
//#include <queue>
//#include <vector>
//#define mx 987654321
//using namespace std;
//
//int r, c, n;
//char map[101][101];
//int dy[4] = { -1,1,0,0 }, dx[4] = { 0,0, -1, 1 };
//
//int main() {
//	cin >> r >> c;
//
//	for (int i = 0; i < r; i++)
//		for (int j = 0; j < c; j++)
//			cin >> map[i][j];
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int stick;
//
//		cin >> stick;
//		stick = r - stick;
//
//		// 막대 던지기
//		if (i % 2 == 0) {
//			for (int i = 0; i < c; i++) {
//				if (map[stick][i] == 'x') {
//					map[stick][i] = '.';
//					break;
//				}
//			}
//		}
//		else {
//			for (int i = c - 1; i > -1; i--) {
//				if (map[stick][i] == 'x') {
//					map[stick][i] = '.';
//					break;
//				}
//			}
//		}
//
//		// 땅에 붙어 있는 것들은 제외 시키기
//		vector <vector <int>> chk(r, vector <int>(c, 0));
//		for (int i = 0; i < c; i++) {
//			if (map[r - 1][i] == 'x' && chk[r-1][i] == 0) {
//				queue <pair <int, int>> q;
//				q.push({ r - 1, i });
//				chk[r - 1][i] = 1;
//
//				while (!q.empty()) {
//					int fy = q.front().first, fx = q.front().second;
//					q.pop();
//
//					for (int i = 0; i < 4; i++) {
//						int ny = fy + dy[i], nx = fx + dx[i];
//						if (ny < 0 || nx < 0 || ny > r - 1 || nx > c - 1 || map[ny][nx] == '.' || chk[ny][nx] != 0)
//							continue;
//
//						q.push({ ny,nx }), chk[ny][nx] = 1;
//					}
//				}
//			}
//		}
//
//		// 떠 있는 클러스터 붙힐 높이 계산
//		int height = mx;
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				if (map[i][j] == 'x' && chk[i][j] == 0) {
//					queue <pair <int, int>> q;
//					q.push({ i,j }), chk[i][j] = 2;
//
//					while (!q.empty()) {
//						int fy = q.front().first, fx = q.front().second;
//						q.pop();
//
//						for (int k = fy + 1; k < r; k++) {
//							if (map[k][fx] == 'x' && chk[k][fx] == 1) {
//								if (height > k - fy - 1) {
//									height = k - fy - 1;
//									break;
//								}
//							}
//
//							if (map[k][fx] == '.' && k == r - 1) {
//								if (height > k - fy ) {
//									height = k - fy;
//									break;
//								}
//							}
//						}
//
//						for (int i = 0; i < 4; i++) {
//							int ny = fy + dy[i], nx = fx + dx[i];
//							if (ny < 0 || nx < 0 || ny > r - 1 || nx > c - 1 || map[ny][nx] == '.' || chk[ny][nx] != 0)
//								continue;
//
//							q.push({ ny,nx }), chk[ny][nx] = 2;
//						}
//					}
//				}
//			}
//		}
//
//		//붙히기
//		if (height != mx) {
//			for (int i = r - 1; i > -1; i--)
//				for (int j = 0; j < c; j++)
//					if (map[i][j] == 'x' && chk[i][j] == 2)
//						map[i][j] = '.', map[i + height][j] = 'x';
//		}
//	}
//
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++)
//			cout << map[i][j];
//		cout << endl;
//	}
//}
//
///*
//........
//........
//...x.xx.
//...xxx..
//..xxx...
//..x.xxx.
//..x...x.
//.xxx..x.
//
//........
//........
//.....xx.
//...xxx..
//..xxx...
//..x.xxx.
//..x...x.
//.xxx..x.
//6
//
//........
//........
//.....xx.
//...xx...
//..xxx...
//..x.xxx.
//..x...x.
//.xxx..x.
//5
//
//........
//........
//........
//...xx...
//..xxxxx.
//..x.xxx.
//..x...x.
//.xxx..x.
//merge
//
//........
//........
//........
//...xx...
//...xxxx.
//..x.xxx.
//..x...x.
//.xxx..x.
//4
//
//........
//........
//........
//...xx...
//...xxxx.
//..x.xx..
//..x...x.
//.xxx..x.
//3
//
//........
//........
//........
//........
//...xx...
//..xxxxx.
//..x.xxx.
//..xx..x.
//merge - 1
//
//
//*/
