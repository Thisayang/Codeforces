#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	int x;
	int y;
	cin >> x >> y;
	int ans = (n + min(x, y) - 1) / min(x, y);
	cout << ans << endl;
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