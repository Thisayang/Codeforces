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
	ll a, b, x, y;
	cin >> a >> b >> x >> y;
	ll g = gcd(x, y);
	x /= g;
	y /= g;
	cout << min(a / x, b / y) << endl;
	return 0;
}