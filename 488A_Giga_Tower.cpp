#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll a, flg = 0;
	cin >> a;
	if (a >= -8 && a < 8) cout << 8 - a << endl;
	else if (a >= 8) {
		for(ll i = 1; i < 11; ++ i) {
			ll tmp = i + a;
			while (tmp > 0) {
				if (tmp % 10 == 8) {
					cout << i << endl;
					flg = 1;
					break;
				}
				tmp /= 10;
			}
			if (flg == 1) break;
		}
	} else {
		for(ll i = 1; i < 11; ++ i) {
			ll tmp = i + a;
			while (tmp < 0) {
				if (tmp % 10 == -8) {
					cout << i << endl;
					flg = 1;
					break;
				}
				tmp /= 10;
			}
			if (flg == 1) break;
		}
	}
	return 0;
}