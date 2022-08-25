#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, ans = 0, flg = 0;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int> (m, 0));
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			cin >> v[i][j];
			ans += v[i][j];
		}
	}
	ROF(i, n - 1, 0) {
		ROF(j, m - 1, 0) {
			if (i == n - 1 || j == m - 1) {
				if (v[i][j] <= v[i - 1][j] || v[i][j] <= v[i][j - 1]) {
					flg = 1;
				}
				continue;
			}
			if (v[i][j] == 0) {
				v[i][j] = min(v[i + 1][j] - 1, v[i][j + 1] - 1);
				if (v[i][j] <= v[i - 1][j] || v[i][j] <= v[i][j - 1]) {
					flg = 1;
				}
				ans += v[i][j];
			}
		}
	}
	cout << (flg == 1 ? -1 : ans) << endl;
	return 0;
}