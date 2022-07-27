#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, u, a, b;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		map<int, pair<int, int>> mp;
		FOR(i, 0, n) {
			cin >> u;
			if (mp.count(u) == 0) {
				mp[u].first = i;
				mp[u].second = i;
			} else {
				mp[u].second = i;
			}
		}
		FOR(i, 0, k) {
			cin >> a >> b;
			if (mp.count(a) == 0 || mp.count(b) == 0 || mp[a].first > mp[b].second) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}