#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
	cin >> t;
	while (t --) {
		cin >> n;
		int ans = 0;
		FOR(i, 0,  n) {
			cin >> a[i];
		}
		FOR(i, 0, n) {
			ans += (i + 1) * (n - i);
			if (a[i] == 0) {
				ans += (i + 1) * (n - i);
			}
		}
		cout << ans << endl;
	}
	return 0;
}