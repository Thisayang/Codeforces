#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd (ll a, ll b) {
	if (a < b) return gcd(b, a);
	while (a % b != 0) {
		ll r = a % b;
		a = b;
		b = r;
	}
	return b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110];
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	ll ans = gcd(a[0], a[1]);
	for (int i = 2; i < n; ++ i) {
		ans = gcd(ans, a[i]);
	}
	cout << ans * n << endl;
	return 0;
}