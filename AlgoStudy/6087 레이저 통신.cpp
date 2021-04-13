#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;
int w, h, mirror = 987654321;
char map[100][100];
int chk[100][100][5];

pair <int, int> st, fin;
int dy[4] = { -1, 1, 0, 0 }, dx[4] = { 0, 0, -1, 1 };

int main() {
	cin >> w >> h;

	int tmp = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> map[i][j];

			if (tmp == 0 && map[i][j] == 'C')
				st.first = i, st.second = j, tmp++;

			if (tmp == 1 && map[i][j] == 'C')
				fin.first = i, fin.second = j;
		}
	}

	queue <tuple <int, int, int>> q;
	q.push({ st.first, st.second, -1 });

	while (!q.empty()) {

	}

	cout << mirror << endl;
}