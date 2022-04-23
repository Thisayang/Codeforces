#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		if ((n == 1 || m == 1) && n + m > 3) cout << "-1" << endl;
		else if (abs(n - m)< 2) cout << (n + m - 2) << endl;
		else {
			int mn = min(n, m), mx = max(n, m);
			int sum = mn + mn - 1;
			int tmp = mx - mn - 1;
			if (tmp % 2 == 0) sum += 4 * (tmp / 2);
			else sum += 4 * (tmp / 2) + 3;
			cout << sum << endl;
		}
	}
	return 0;
}