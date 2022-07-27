#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c, d;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c >> d;
		int ans = 0;
		if (a < b) ans ++;
		if (a < c) ans ++;
		if (a < d) ans ++;
		cout << ans << endl;
	}
	return 0;
}