#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int len = s.length(), f1 = 0, f2 = 0, f3 = 0, ans = 1e9 + 10;
		FOR(i, 0, len) {
			if (s[i] == '1') f1 = 1;
			else if (s[i] == '2') f2 = 1;
			else f3 = 1;
		}
		if (f1 + f2 + f3 < 3) cout << 0 << endl;
		else {
			int a = 1e9 + 10, b = 1e9 + 10, c = 1e9 + 10;
			FOR(i, 0, len) {
				if (s[i] == '1') {
					a = i;
				} else if (s[i] == '2') {
					b = i;
				} else {
					c = i;
				}
				ans = min(ans, max({a, b, c}) - min({a, b, c}) + 1);
			}
			cout << ans << endl;
		}
	}
	return 0;
}