#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	int m;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		int a[n];
		int b[m];
		int ans = n * m;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int j = 0; j < m; ++j) {
			cin >> b[j];
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (a[i] + b[j] > k) {
					ans--;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}