#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int mx = *max_element(a.begin(), a.end());
		if (n * mx < k) {
			cout << -1 << endl;
			continue;
		}
		int ans = n + 1;
		for (int i = 0; i < k; ++ i) {
			int to = -2;
			for (int j = 0; j < n - 1; ++ j) {
				if (a[j] < a[j + 1]) {
					to = j;
					break;
				}
			}
			ans = to + 1;
			if (to == -2) break;
			a[to] ++;
		}
		cout << ans << endl;
	}
	return 0;
}