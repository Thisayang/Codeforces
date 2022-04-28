#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[210];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		for (int i = 0; i < m; ++ i) {
			cin >> a[i];
		}
		if (m == 1) {
			cout << max(abs(a[0] - 1) + 1, abs(a[0] - n) + 1) << endl;
		} else {
			sort(a, a + m);
			int ans = 0;
			for (int i = 0; i < m; ++ i) {
				if(i == 0) ans = max(ans, abs(a[i] - 1) + 1);
				else if (i == m - 1) ans = max(ans, abs(a[i] - n) + 1);
				if (i != 0) ans = max(abs(a[i] - a[i - 1] + 2) / 2, ans);
				
			}
			cout << ans << endl;
		}
	}
	return 0;
}