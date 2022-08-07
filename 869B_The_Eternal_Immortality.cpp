#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll a, b, ans = 1;
	cin >> a >> b;
	if (b - a >= 10) ans = 0;
	else {
		for (ll i = a + 1; i <= b; ++ i) {
			ans *= (i % 10);
			ans %= 10;
		}
	}
	cout << ans << endl;
	return 0;
}