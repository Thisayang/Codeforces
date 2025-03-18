#include <bits/stdc++.h>

using namespace std;

int Solve(int l, int r) {
	int ans = 0;
	if (l == r && l == 1) {
		ans = 1;
	} else {
		ans = r - l;
	}
	cout << ans << endl;
	return 0;
}

int main(void) {
	int t;
	int l;
	int r;
	cin >> t;
	while (t--) {
		cin >> l >> r;
		Solve(l ,r);
	}
	return 0;
}