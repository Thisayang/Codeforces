#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<ll> a(n);
		FOR(i, 0, n) {
			cin >> a[i];
		}
		ll ans = 0;
		FOR(i, 1, n - 1) {
			if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
				if (a[i] - a[i - 1] >= a[i] - a[i + 1]) {
					ans += a[i] - a[i + 1];
					a[i] = a[i + 1];
				} else {
					ans += a[i] - a[i - 1];
					a[i] = a[i - 1];
				}
			}
		}
		if (n != 1) {
			if (a[0] > a[1]) {
				ans += a[0] - a[1];
				a[0] = a[1];
			}
			if (a[n - 1] > a[n - 2]) {
				ans += a[n - 1] - a[n - 2];
				a[n - 1] = a[n - 2];
			}
			ans += a[0] + a[n - 1];
			FOR(i, 1, n) {
				ans += abs(a[i] - a[i - 1]);
			}
		} else if (n == 1) ans = a[0];
		cout << ans << endl;
	}
	return 0;
}