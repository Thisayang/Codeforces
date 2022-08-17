#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll l, r, ans = 0;
	set<long long> sett;
	vector<long long> a;
	sett.insert(4);
	sett.insert(7);
	for (auto it = sett.begin(); it != sett.end(); ++ it) {
		a.push_back(*it);
		if (*it * 10 + 4 > 4444444444) continue;
		sett.insert(*it * 10 + 4);
		sett.insert(*it * 10 + 7);
	}
	cin >> l >> r;
	for (int i = 0; l <= r; ++ i) {
		if (a[i] < l) continue;
		if (a[i] >= r) ans += (r - l + 1) * a[i];
		else ans += (a[i] - l + 1) * a[i];
		l = a[i] + 1;
	}
	cout << ans << endl;
	return 0;
}