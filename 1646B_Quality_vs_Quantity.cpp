#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, a[200010];
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		sort(a, a + n);
		ll red = 0, blue = a[0], flg = 1;
		for (int st = 1, en = n - 1; st < en; ++ st, -- en) {
			red += a[en];
			blue += a[st];
			if (red > blue) {
				cout << "YES" << endl;
				flg = 0;
				break;
			}
		}
		if (flg) cout << "NO" << endl;
	}
	return 0;
}