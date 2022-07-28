#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll a, b, ans = 0;
	cin >> a >> b;
	if (a < b) swap(a, b);
	while (b != 0) {
		ll mx = max(a, b);
		ll mn = min(a, b);
		ans += mx / mn;
		a = mn;
		b = mx % mn;
	}
	cout << ans << endl;
	return 0;
}