#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	vector<ll> a(14);
	ll mx = 0, sum;
	FOR(i, 0, 14) cin >> a[i];
	FOR(i, 0, 14) {
		ll tmp = a[i] % 14;
		sum = 0;
		vector<ll> b = a;
		b[i] = 0;
		if (tmp == 0) {
			FOR(j, 0, 14) {
				int t = (i + j) % 14;
				b[t] += a[i] / 14;
				if (b[t] % 2 == 0) sum += b[t];
			}
		} else {
			FOR(j, 0, 14) {
				int t = (i + j) % 14;
				if (j != 0 && j <= tmp) b[t] += a[i] / 14 + 1;
				else b[t] += a[i] / 14;
				if (b[t] % 2 == 0) sum += b[t];
			}
		}
		mx = max(mx, sum);
	}
	cout << mx << endl;
	return 0;
}