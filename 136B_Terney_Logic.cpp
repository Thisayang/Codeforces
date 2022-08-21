#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, c;
	cin >> a >> c;
	if (a == c) cout << 0 << endl;
	else {
		string s = "", t = "";
		while(a > 0) {
			s = char(a % 3 + '0') + s;
			a /= 3;
		}
		while (c > 0) {
			t = char(c % 3 + '0') + t;
			c /= 3;
		}
		int l = s.length(), r = t.length();
		if (l < r) {
			for (int i = 0; i + l < r; ++ i) s = '0' + s;
		} else {
			for (int i = 0; i + r < l; ++ i) t = '0' + t;
		}
		ll ans = 0;
		FOR(i, 0, max(l, r)) {
			s[i] = ((t[i] + 3) - s[i]) % 3;
			ans = ans * 3 + s[i];
		}
		cout << ans << endl;
	}
	return 0;
}