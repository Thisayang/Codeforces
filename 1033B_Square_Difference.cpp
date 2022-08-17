#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, a, b;
	cin >> t;
	while (t --) {
		cin >> a >> b;
		if (a - b == 1) {
			ll tmp = a + b, flg = 0;
			for (ll i = 2; i < sqrt(tmp) + 1; ++ i) {
				if (tmp % i == 0) {
					flg = 1;
					break;
				}
			}
			cout << (flg == 1 ? "NO" : "YES") << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}