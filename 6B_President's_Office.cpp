#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int x[] = {1, -1, 0, 0}, y[] = {0, 0, 1, -1};
void dfs(int sx, int sy, int  n, int m, char ch, vector<vector<char>> &v) {
	FOR(i, 0, 4) {
		int stx = sx + x[i], sty = sy + y[i];
		if (stx >= 0 && stx < n && sty >= 0 && sty < m) {
			if (v[stx][sty] == ch) {
				v[stx][sty] = '.';
				dfs(stx, sty, n, m, ch, v);
			}
		}
		
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	char ch;
	cin >> n >> m >> ch;
	vector<vector<char>> v(n, vector<char>(m, 0));
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			cin >> v[i][j];
		}
	}
	int ans = 0;
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			if (v[i][j] == ch) {
				v[i][j] = '.';
				FOR(k, 0, 4) {
					int stx = i + x[k], sty = j + y[k];
					if (stx >= 0 && stx < n && sty >= 0 && sty< m) {
						if (v[stx][sty] != ch && v[stx][sty] != '.') {
							ans ++;
							char key = v[stx][sty];
							v[stx][sty] = '.';
							dfs(stx, sty, n, m, key, v);
						}
					}
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}