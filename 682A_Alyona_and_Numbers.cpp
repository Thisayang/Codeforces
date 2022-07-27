#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, m;
	cin >> n >> m;
	ll x = n % 5, y = m % 5, cnt1 = n / 5, cnt2 = m / 5;
	ll ans = cnt1 * cnt2;
	for (int i = 1; i < 5; ++ i) {
		ll t1 = cnt1, t2 = cnt2;
		if (x >= i) t1 ++;
		if (y >= 5 - i) t2 ++;
		ans += t1 * t2;
	}
	cout << ans << endl;
	return 0;
}