#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, l, r;
	cin >> n >> m;
	vector<ll> a(n), b(n), c(n);
	FOR(i, 0, n) {
		cin >> a[i];
		if (i == 0) b[i] = 0;
		else {
			if (a[i] > a[i - 1]) b[i] = b[i - 1];
			else b[i] = b[i - 1] + (a[i - 1] - a[i]);
		}
	}
	ROF(i, n - 1, -1) {
		if (i == n - 1) c[i] = 0;
		else {
			if (a[i] > a[i + 1]) c[i] = c[i + 1];
			else c[i] = c[i + 1] + (a[i + 1] - a[i]);
		}
	}
	FOR(i, 0, m) {
		cin >> l >> r;
		if (l <= r) {
			cout << b[r - 1] - b[l - 1] << endl;
		} else {
			cout << c[r - 1] - c[l - 1] << endl;
		}
		
	}
	return 0;
}