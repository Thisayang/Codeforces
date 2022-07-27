#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x, a[210];
	cin >> t;
	while (t --) {
		cin >> n >> x;
		FOR(i, 0, 2 * n) {
			cin >> a[i];
		}
		sort(a, a + 2 * n);
		int flg = 0;
		FOR(i, 0, n) {
			if (a[i + n] - a[i] < x) {
				flg = 1;
				break;
			}
		}
		cout << (flg == 1 ? "NO" : "YES") << endl;
	}
	return 0;
}