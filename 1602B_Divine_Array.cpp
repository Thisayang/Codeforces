#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, q, x, k;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<vector<int>> ans(n + 1, vector<int> (n + 1, 0));
		FOR(i, 0, n) cin >> ans[0][i];
		FOR(i, 0, n) {
			map<int, int> mp;
			FOR(j, 0, n) {
				mp[ans[i][j]] ++;
			}
			FOR(j, 0, n) {
				ans[i + 1][j] = mp[ans[i][j]];
			}
		}
		cin >> q;
		FOR(i, 0, q) {
			cin >> x >> k;
			cout << ans[min(k, n)][x - 1] << endl;
		}
	}
	return 0;
}