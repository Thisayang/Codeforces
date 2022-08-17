#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	ll tmp = 1;
	while (tmp <= n) {
		tmp *= 10;
	}
	tmp = tmp / 10 - 1;
	ll t = n - tmp, ans = 0;
	while (tmp) {
		ans += tmp % 10;
		tmp /= 10;
	}
	while (t) {
		ans += t % 10;
		t /= 10;
	}
	cout << ans << endl;
	return 0;
}