#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int ans = 0;
		if ((n - 1) & 1) {
			ans ++;
		} else ans += 2;
		if ((m - 1) & 1) {
			ans ++;
		} else ans += 2;
		if (ans & 1) cout << "Burenka" << endl;
		else cout << "Tonya" << endl;
	}
	return 0;
}