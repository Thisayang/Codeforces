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
		vector<int> a(n);
		FOR(i, 0, n) {
			cin >> a[i];
		}
		int ans = 0;
		if (n > 1) {
			int mn = *min_element(a.begin(), a.end());
			int mx = *max_element(a.begin(), a.end());
			if (a[0] == mn || a[n - 1] == mx) {
				ans = mx - mn;
			} else {
				FOR(i, 0, n - 1) {
					ans = max(ans, a[i] - a[i + 1]);
				}
				ans = max(ans, a[n - 1] - a[0]);
				ans = max(ans, mx - a[0]);
				ans = max(ans, a[n - 1] - mn);
			}
		}
		cout << ans << endl;
	}
	return 0;
}