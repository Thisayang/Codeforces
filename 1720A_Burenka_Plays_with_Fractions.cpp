#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, a, b, c, d;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c >> d;
		ll x = a * d, y = b * c;
		if (x == y) cout << 0 << endl;
		else if ((y != 0 && x % y == 0) || (x != 0 && y % x == 0)) cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}