#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<ll> a(n);
		ll cnt = 0, flg = 1, sum = 0, ans = 0;
		FOR(i, 0, n) {
			cin >> a[i];
			if (a[i] == 0) {
				if (flg == 0) cnt ++;
			} else flg = 0;
			sum += a[i];
		}
		ans = cnt + (sum - a[n - 1]);
		if (a[n - 1] == 0) ans --;
		if (ans < 0) ans = 0;
		cout << ans << endl;
	}
	return 0;
}