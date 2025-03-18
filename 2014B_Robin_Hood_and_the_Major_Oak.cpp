#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k) {
	int ans = (n + 1) / 2;
	int cnt = (n - k + 1) / 2;
	cout << ((ans  - cnt) % 2 ? "NO" : "YES") << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		solve(n, k);
	}
	return 0;
}