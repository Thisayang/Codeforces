#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a, ll b) {
	if (a < b) return gcd(b, a);
	ll r;
	while (a % b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, tmp;
	cin >> t;
	while (t --) {
		cin >> n;
		tmp = n % 2520;
		if (tmp == 0) cout << n << endl;
		else {
			for (ll i = 0; i <= 2520 - tmp; ++ i) {
				ll x = n + i;
				while (x > 0) {
					if (x % 10 != 0) {
						if ((n + i) % (x % 10) != 0) {
							goto loop;
						} 
					} 
					x /= 10;
				}
				cout << n + i << endl;
				break;
				loop: ;
			}
		}
	}
	return 0;
}