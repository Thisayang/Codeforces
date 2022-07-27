#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, r, g, b;
	cin >> t;
	while (t --) {
		cin >> r >> g >> b;
		int mx = max(r, max(g, b)), sum = r + g + b;
		int ans, o = sum - mx;
		if (mx >= o) ans = o;
		else {
			ans = mx + (o - mx) / 2;
		}
		cout << ans << endl;
	}
	return 0;
}