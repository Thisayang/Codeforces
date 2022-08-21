#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		if (k & 1) {
			cout << "YES" << endl;
			FOR(i, 0, n / 2) cout << (i * 2 + 1) << " " << 2 * i + 2 << endl;
		} else if (k % 4 == 2) {
			cout << "YES" << endl;
			for (int i = 4; i <= n; i += 4) {
				cout << i - 1 << " " << i << endl;
			} 
			for (int i = 2; i <= n; i += 4) {
				cout << i << " " << i - 1 << endl;
			}
		} else cout << "NO" << endl;
	}
	return 0;
}