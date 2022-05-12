#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<ll> a(200010, 0), x(200010, 0);;
	cin >> t;
	while (t --) {
		cin >> n;
		x.clear();
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		x[n] = 0;
		ll ans = 0;
		for (int i = n - 1; i >= 0; -- i) {
			x[i + 1] = a[i];
			if (i + 1 + a[i] <= n) {
				x[i + 1] += x[i + 1 + a[i]];
			}
			ans = max(ans, x[i + 1]);
		}
		cout << ans << endl;
	}
	return 0;
}