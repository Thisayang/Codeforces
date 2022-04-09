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
		set<int> sett;
		tmp = n;
		while (tmp > 0) {
			if (tmp % 10 != 0) {
				sett.insert(tmp % 10);
			}
			tmp /= 10;
		}
		ll a, b;
		for (auto it = sett.begin(); it != sett.end(); ++ it) {
			if (it == sett.begin()) a = *(it);
			else {
				b = *(it);
				a = a * b / gcd(a, b);
			}
		}
		if (n % a == 0 || sett.size() == 1) cout << n << endl;
		else cout << n / a * a + a << endl;
	}
	return 0;
}