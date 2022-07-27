#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(100010, 0);
	cin >> t;
	while (t --) {
		cin >> n;
		int ans = 0, tmp = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] % 2 == 1) ans ++;
		}
		if (ans == 0 || ans == n) cout << 0 << endl;
		else {
			ans = min(ans, n - ans);
			cout << ans << endl;
		}
	}
	return 0;
}