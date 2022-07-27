#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<ll> a(n);
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		vector<ll> g(a.begin(), a.begin() + 2);
		for (int i = 0; i < n; ++ i) {
			g[i % 2] = __gcd(g[i % 2], a[i]);
		}
		vector<bool> good(2, true);
		for (int i = 0; i < n; ++ i) {
			good[i % 2] = good[i % 2] && (a[i] % g[(i % 2) ^ 1] > 0);
		}
		ll ans = 0;
		for (int i = 0; i < 2; ++ i) {
			if (good[i]) {
				ans = max(ans, g[i ^ 1]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}