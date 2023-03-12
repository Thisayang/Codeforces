#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, type, l, r;
	ll ans = 0;
	cin >> n;
	vector<ll> a(n), b(n + 1, 0), c(n + 1, 0);
	FOR(i, 1, n + 1) {
		cin >> a[i - 1];
		b[i] = b[i - 1] + a[i - 1];
	}
	sort(a.begin(), a.end());
	FOR(i, 1, n + 1) {
		c[i] = c[i - 1] + a[i - 1];
	}
	cin >> m;
	FOR(i, 0, m) {
		cin >> type >> l >> r;
		if (type == 1) cout << b[r] - b[l - 1] << endl;
		else cout << c[r] - c[l - 1] << endl;
	}
	return 0;
}