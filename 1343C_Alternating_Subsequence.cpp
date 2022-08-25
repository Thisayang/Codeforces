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
		ll flg = 0, ans = 0, mn = 0, mx = 0;
		if (a[0] < 0) {
			FOR(i, 0, n) {
				if (a[i] < 0) {
					if (flg == 0) {
						mn = a[i];
						ans += mx;
						flg = 1;
					} else {
						mn = max(mn, a[i]);
					}
				} else if (a[i] > 0) {
					if (flg == 1) {
						ans += mn;
						flg = 0;
						mx = a[i];
					} else {
						mx = max(mx, a[i]);
					}
				}
			}
			if (flg == 0) ans += mx;
			else ans += mn;
		} else {
			FOR(i, 0, n) {
				if (a[i] < 0) {
					if (flg == 0) {
						mn = a[i];
						ans += mx;
						flg = 1;
					} else {
						mn = max(mn, a[i]);
					}
				} else if (a[i] > 0) {
					if (flg == 1) {
						ans += mn;
						flg = 0;
						mx = a[i];
					} else {
						mx = max(mx, a[i]);
					}
				}
			}
			if (flg == 0) ans += mx;
			else ans += mn;
		}
		cout << ans << endl;
	}
	return 0;
}