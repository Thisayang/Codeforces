#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[20][20];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int mn = 110;
		int cnt = 0, sum = 0;
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < m; ++ j) {
				cin >> a[i][j];
				if (a[i][j] < 0) cnt ++;
				mn = min(mn, abs(a[i][j]));
				sum += abs(a[i][j]);
			}
		}
		if (cnt % 2 == 0) cout << sum << endl;
		else cout << sum - 2 * mn << endl;
	}
	return 0;
}