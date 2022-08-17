#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, k, tmp, ans = 0;
	cin >> n >> m >> k;
	vector<int> a(n), b(n);
	map<int, int> mp;
	FOR(i, 0, n) cin >> a[i];
	FOR(i, 0, n) {
		cin >> b[i];
		if (mp[b[i]] == 0) mp[b[i]] = a[i];
		else mp[b[i]] = max(mp[b[i]], a[i]);
	}
	FOR(i, 0, k) {
		cin >> tmp;
		if (mp[b[tmp - 1]] != a[tmp - 1]) ans ++;
	}
	cout << ans << endl;
	return 0;
}