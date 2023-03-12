#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, a, k;
	cin >> t;
	while (t --) {
		cin >> a >> k;
		for (ll i = 1; i < k; ++ i) {
			ll tmp = a, mx = a % 10, mn = a % 10;
			while (tmp > 0) {
				mx = max(mx, tmp % 10);
				mn = min(mn, tmp % 10);
				tmp /= 10;
			}
			if (mn == 0) {
				break;
			} else a = a + mn * mx;
		}
		cout << a << endl;
	}
	return 0;
}