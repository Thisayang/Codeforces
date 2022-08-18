#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s[4];
	int x[] = {1, -1, 0, 0, 1, -1, 1, -1};
	int y[] = {0, 0, 1, -1, 1, -1, -1, 1};
	int flg = 0;
	FOR(i, 0, 4) cin >> s[i];
	FOR(i, 0, 4) {
		FOR(j, 0, 4) {
			if (s[i][j] == 'x') {
				int a = 1, b = 0;
				FOR(k, 0, 8) {
					int sx = i + x[k], sy = j + y[k];
					if (sx >= 0 && sx < 4 && sy >= 0 && sy < 4) {
						if (s[sx][sy] == 'x') a ++;
						else if (s[sx][sy] == '.') b ++;
					}
					if (k % 2 == 1) {
						if (a == 2 && b == 1) flg = 1;
						a = 1, b = 0;
					}
				}
			} else if (s[i][j] == '.') {
				int cnt = 0;
				FOR(k, 0, 8) {
					int sx = i + x[k], sy = j + y[k];
					if (sx >= 0 && sx < 4 && sy >= 0 && sy < 4) {
						if (s[sx][sy] == 'x') cnt ++;
					}
					if (k % 2 == 1) {
						if (cnt == 2) flg = 1;
						else cnt = 0;
					}
				}
			}
		}
	}
	cout << (flg == 1 ? "YES" : "NO") << endl;
	return 0;
}