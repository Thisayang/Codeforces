#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, l1, r1, l2, r2, ans = 0, a = 1e9 + 10, b = 0, c = 1e9 + 10, d = 0;
	cin >> n;
	FOR(i, 0, n) {
		cin >> l1 >> r1;
		a = min(a, r1);
		b = max(b, l1);
	}
	cin >> m;
	FOR(i, 0, m) {
		cin >> l2 >> r2;
		c = min(c, r2);
		d = max(d, l2);
	}
	ans = max(max(ans, d - a), b - c);
	cout << ans << endl;
	return 0;
}