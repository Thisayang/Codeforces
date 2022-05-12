#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[210][210];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < m; ++ j) {
				cin >> a[i][j];
			}
		}
		int x[4] = {1, 1, -1, -1}, y[4] = {1, -1, 1, -1};
		int ans = 0;
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < m; ++ j) {
				int sum = a[i][j];
				for (int k = 0; k < 4; ++ k) {
					int tx = i + x[k], ty = j + y[k];
					while (tx >= 0 && tx < n && ty >= 0 && ty < m) {
						sum += a[tx][ty];
						tx += x[k];
						ty += y[k];
					}
				}
				ans = max(ans, sum);
			}
		}
		cout << ans << endl;
	}
	return 0;
}