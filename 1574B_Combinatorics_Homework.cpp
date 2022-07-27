#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c, k;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c >> k;
		int mx = a + b + c - 3, mn;
		int m = max(a, max(b, c));
		int tmp = mx + 3 - m;
		if (m <= tmp) mn = 0;
		else mn = (m - tmp) - 1;
		if (k >= mn && k <= mx) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}