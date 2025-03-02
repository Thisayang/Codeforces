#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
	int a[n], b[n];
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	for (int i = 0; i < n - 1; ++i) {
		if (a[i] > b[i + 1]) {
			ans += a[i] - b[i + 1];
		}
	}
	ans += a[n - 1];
	cout << ans << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		solve(n);
	}
	return 0;
}