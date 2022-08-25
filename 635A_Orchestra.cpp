#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int solve(int a, int b, int c, int d, vector<vector<char>>& v) {
	int cnt = 0;
	for (int i = a; i <= c; ++ i) {
		for (int j = b; j <= d; ++ j) {
			if (v[i][j] == '#') cnt ++;
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int r, c, n, k, a, b, ans = 0;
	cin >> r >> c >> n >> k;
	vector<vector<char>> v(r + 1, vector<char> (c + 1, '*'));
	FOR(i, 0, n) {
		cin >> a >> b;
		v[a][b] = '#';
	}
	FOR(i, 1, r + 1) {
		FOR(j, 1, c + 1) {
			FOR(x, i, r + 1) {
				FOR(y, j, c + 1) {
					if (solve(i, j, x, y, v) >= k) ans ++;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}