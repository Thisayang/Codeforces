#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, flg = 0;
	cin >> n >> m;
	vector< vector<char>> a(n, vector<char>(m));
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			cin >> a[i][j];
		}
	}
	int x[] = {1, 1, 1, 0, 0, -1, -1, -1};
	int y[] = {1, -1, 0, 1, -1, -1, 0, 1};
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			if (a[i][j] == '*') continue;
			else if (a[i][j] == '.') {
				FOR(k, 0, 8) {
					int sx = i + x[k], sy = j + y[k];
					if (sx >= 0 && sx < n && sy >= 0 && sy < m && a[sx][sy] == '*') {
						flg = 1;
						break;
					}
				}
			} else {
				int ans = 0;
				FOR(k, 0, 8) {
					int sx = i + x[k], sy = j + y[k];
					if (sx >= 0 && sx < n && sy >= 0 && sy < m && a[sx][sy] == '*') {
						ans ++;
					}
				}
				if (ans != a[i][j] - '0') {
					flg = 1;
					break;
				}
			}
			if (flg) break;
		}
		if (flg == 1) break;
	}
	cout << (flg ? "NO" : "YES") << endl;
	return 0;
}