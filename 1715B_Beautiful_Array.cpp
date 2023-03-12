#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, k, b, s;
	cin >> t;
	while (t --) {
		cin >> n >> k >> b >> s;
		if (s / k < b) cout << "-1" << endl;
		else if (s / k > b) {
			ll tmp = s - (b * k + (k - 1));
			if (k == 1) cout << "-1" << endl;
			else if ((tmp + k - 2) / (k - 1) + 1 > n) cout << "-1" << endl;
			else {
				cout << b * k + (k - 1) << " ";
				FOR(i, 1, n) {
					if (tmp >= k - 1) {
						cout << k - 1 << " ";
						tmp -= (k - 1);
					} else {
						cout << tmp << " ";
						tmp = 0;
					}
				}
				cout << endl;
			}			
		} else {
			FOR(i, 1, n) cout << 0 << " ";
			cout << s << endl;
		}
	}
	return 0;
}