#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k) {
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	if (n == 1) {
		cout << "YES\n" << 1 << endl;
		return 0;
	}
	int flg;
	for (int i = 0; i < n; ++i) {
		flg = 1;
		for (int j = 0; j < n; ++j) {
			if (i == j) {
				continue;
			}
			if (abs(a[i] - a[j]) % k == 0) {
				flg = 0;
				break;
			}
		}
		if (flg) {
			cout << "YES\n" << i + 1 << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		Solve(n, k);
	}
	return 0;
}