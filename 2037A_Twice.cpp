#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
	int a[n] = {0};
	int tmp;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		a[tmp - 1]++;
	}
	for (int i = 0; i < n; ++i) {
		ans += a[i] / 2;
	}
	cout << ans << endl;
	return;
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