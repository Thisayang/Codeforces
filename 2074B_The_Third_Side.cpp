#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	int a;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		ans += a;
	}
	cout << ans - n + 1 << endl;
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