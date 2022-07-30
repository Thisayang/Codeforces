#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[310];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int ans = 0;
		FOR(i, 0, m) {
			cin >> a[i];
			FOR(j, 0, i) {
				if (a[i] > a[j]) ans ++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}