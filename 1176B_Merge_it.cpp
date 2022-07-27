#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
	cin >> t;
	while (t --) {
		cin >> n;
		int ans = 0, cnt1 = 0, cnt2 = 0;
		FOR(i, 0, n) {
			cin >> a[i];
			if (a[i] % 3 == 0) ans ++;
			else if (a[i] % 3 == 1) cnt1 ++;
			else cnt2 ++;
		}
		int tmp = min(cnt1, cnt2);
		ans += tmp;
		cnt1 -= tmp;
		cnt2 -= tmp;
		ans += cnt1 / 3 + cnt2 / 3;
		cout << ans << endl;
	}
	return 0;
}