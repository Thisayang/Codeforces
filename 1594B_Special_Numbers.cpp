#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		ll ans = 0, result = 1;
		FOR(i, 0, 32) {
			if ((1 << i) & k) {
				ans = (ans + result) % mod;
			}
			result = (result * n) % mod;
		}
		cout << ans << endl;
	}
	return 0;
}