#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int r, d, n, x, y, rs, ans = 0;
	cin >> r >> d >> n;
	FOR(i, 0, n) {
		cin >> x >> y >> rs;
		double tmp = sqrt(x * x + y * y);
		if (tmp - rs >= r - d && tmp + rs <= r) ans ++;
	}
	cout << ans << endl;
	return 0;
}