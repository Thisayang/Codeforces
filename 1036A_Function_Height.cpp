#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, k;
	cin >> n >> k;
	if (n >= k) cout << 1 << endl;
	else {
		ll ans = k / n;
		if (k % n != 0) ans ++;
		cout << ans << endl;
	}
	return 0;
}