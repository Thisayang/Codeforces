#include <bits/stdc++.h>

using namespace std;

int solve(int n, int a , int b, int c) {
	int ans = n / (a + b + c) * 3;
	int mod = n % (a + b + c);
	if (mod > 0) {
		ans++;
		mod -= a;
	}
	if (mod > 0) {
		ans++;
		mod -= b;
	}
	if (mod > 0) {
		ans++;;
	}
	cout << ans << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	int a;
	int b;
	int c;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b >> c;
		solve(n, a, b, c);
	}
	return 0;
}