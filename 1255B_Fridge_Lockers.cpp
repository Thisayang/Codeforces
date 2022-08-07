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
		vector<int> a(n);
		FOR(i, 0, n) {
			cin >> a[i];
		}
		if (n > m || n <= 2) {
			cout << -1 << endl;
		} else {
			sort(a.begin(), a.end());
			int res = 0;
			FOR(i, 0, n) {
				res += a[i] * 2;
			}
			res += (m - n)*(a[0] + a[1]);
			cout << res << endl;
			FOR(i, 0, n - 1) cout << i + 1 << " " << i + 2 << endl;
			cout << n << " " << 1 << endl;
			FOR(i, n, m) cout << 1 << " " << 2 << endl;
		}
	}
	return 0;
}