#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, p, a, b, c;
	while(cin >> t) {
		while(t --) {
			cin >> p >> a >> b >> c;
			a = (p + a - 1) / a * a;
			b = (p + b - 1) / b * b;
			c = (p + c - 1) / c * c;
			ll ans = min(min(a - p, b - p), c - p);
			cout << ans << endl;
		}
	}
	return 0;
}
