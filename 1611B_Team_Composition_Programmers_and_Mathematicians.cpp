#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, a, b;
	cin >> t;
	while (t --) {
		cin >> a >> b;
		if (a == 0 || b == 0 || a + b < 4) {
			cout << 0 << endl;
		} else {
			ll MIN = min(a, b);
			ll MAX = max(a, b);
			ll x = MAX - MIN;
			ll cnt = x / 2 > MIN ? MIN : x / 2;
			cnt += (MIN - cnt) / 2; 
			cout << cnt << endl;
		}
	}
	return 0;
}