#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x, k;
	cin >> t;
	while (t --) {
		cin >> n >> x >> k;
		ll res = k / x, ans = 0;
		if (res >= n) res = n - 1;
		ans = (res + 1)  * res / 2;
		ans += (n - (res + 1)) * res;
		cout << ans << endl;
	}
	return 0;
}