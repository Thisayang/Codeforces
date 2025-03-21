#include <bits/stdc++.h>

using namespace std;

int Solve(int l, int r, int d, int u) {
	if (l == r && l == d && l == u) {
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}

int main(void) {
	int t;
	int l;
	int r;
	int d;
	int u;
	cin >> t;
	while (t--) {
		cin >> l >> r >> d >> u;
		Solve(l, r, d, u);
	}
	return 0;
}