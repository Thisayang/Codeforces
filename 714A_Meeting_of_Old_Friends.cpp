#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll l1, r1, l2, r2, k;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	ll mn = min(r1, r2);
	ll mx = max(l1, l2);
	ll ans = mn - mx + 1;
	if (mx > mn) {
		cout << 0 << endl;
		return 0;
	}
	if (k >= mx && k <= mn) {
		ans --;
	}
	cout << ans << endl;
	return 0;
}