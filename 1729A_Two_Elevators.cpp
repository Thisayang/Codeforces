#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c, ans;
	cin >> t;
	while(t --) {
		cin >> a >> b >> c;
		if (b < c) {
			if (a < 2 * c - b) ans = 1;
			else if (a > 2 * c - b) ans = 2;
			else ans = 3;
		} else {
			if (a < b) ans = 1;
			else if (a > b) ans = 2;
			else ans = 3;
		}
		cout << ans << endl;
	}
	return 0;
}