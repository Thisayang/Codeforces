#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		long long ans = 0;
		for (int i = 1; i < m; ++ i) ans += i;
		for (int j = m; j <= n * m; j += m) ans += j;
		cout << ans << endl;
	}
	return 0;
}