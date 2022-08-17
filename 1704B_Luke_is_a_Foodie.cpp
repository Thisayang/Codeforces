#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x, tmp;
	cin >> t;
	while (t --) {
		cin >> n >> x;
		vector<int> a(n), b(n);
		int cnt = 0, ans = 0;
		FOR(i, 0, n) {
			cin >> tmp;
			a[i] = tmp - x;
			b[i] = tmp + x;
		}
		ll l = a[0], r = b[0];
		FOR(i, 1, n) {
			if (l > b[i] || r < a[i]) {
				ans ++;
				l = a[i];
				r = b[i];
			} else {
				if (l <= a[i]) {
					l = a[i];
				} else if (r >= b[i]) {
					r = b[i];
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}