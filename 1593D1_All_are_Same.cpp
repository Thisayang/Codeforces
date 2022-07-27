#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int gcd(int a, int b) {
	if (a < b) return gcd(b, a);
	int r;
	while (a % b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[50];
	cin >> t;
	while (t --) {
		cin >> n;
		set<int> sett;
		forn(i, 0, n) {
			cin >> a[i];
			sett.insert(a[i]);
		}
		if (sett.size() == 1) cout << -1 << endl;
		else {
			sett.clear();
			sort(a, a + n);
			for (int i = 1; i < n; ++ i) {
				if (a[i] - a[0] != 0) sett.insert(a[i] - a[0]);
			}
			int ans = *sett.begin();
			for (auto it = sett.begin(); it != sett.end(); ++ it) {
				for (auto itt = sett.begin(); itt != sett.end(); ++ itt) {
					if (it == itt) continue;
					ans = min(ans, gcd(*it, *itt));
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}