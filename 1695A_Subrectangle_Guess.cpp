#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[50][50];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int mx = -2e9, ans = 0;
		for (int i = 1; i <= n; ++ i) {
			for (int j = 1; j <= m; ++ j) {
				cin >> a[i][j];
				if (a[i][j] > mx) {
					mx = a[i][j];
					ans = max(i, n - i + 1) * max(j, m - j + 1);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}