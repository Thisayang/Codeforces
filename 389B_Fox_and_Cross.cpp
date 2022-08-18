#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector< vector<char>> a(n, vector<char>(n, 0));
	FOR(i, 0, n) {
		FOR(j, 0, n) {
			cin >> a[i][j];
		}
	}
	int x[] = {1, -1, 0, 0}, y[] = {0, 0, 1, -1};
	FOR(i, 0, n) {
		FOR(j, 0, n) {
			if (a[i][j] == '#') {
				int flg = 0;
				FOR(k, 0, 4) {
					int sx = i + x[k], sy = j + y[k];
					if (sx >= 0 && sx < n && sy >= 0 && sy < n && a[sx][sy] == '#') flg ++;
				}
				if (flg == 4) {
					a[i][j] = '.';
					FOR(k, 0, 4) {
						int sx = i + x[k], sy = j + y[k];
						a[sx][sy] = '.';
					}
				}
			}
		}
	}
	int ok = 0;
	FOR(i, 0, n) {
		FOR(j, 0, n) {
			if (a[i][j] == '#') ok = 1;
		}
	}
	cout << (ok == 1 ? "NO" : "YES") << endl;
	return 0;
}