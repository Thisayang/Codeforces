#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	int a[n];
	int maxn = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (i != n - 1) {
			maxn = max(maxn, a[i]);
		}
	}
	cout << maxn + a[n - 1] << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}