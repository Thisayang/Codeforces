#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x[5], y[5];
	cin >> n;
	FOR(i, 0, n) cin >> x[i] >> y[i];
	if (n == 1) cout << -1 << endl;
	else if (n == 2) {
		if (x[0] != x[1] && y[0] != y[1]) cout << abs(x[0] - x[1]) * abs(y[0] - y[1]) << endl;
		else cout << -1 << endl;
	} else {
		int mxx = 0, mxy = 0;
		FOR(i, 0, n) {
			FOR(j, 0, i) {
				mxx = max(mxx, abs(x[i] - x[j]));
				mxy = max(mxy, abs(y[i] - y[j]));
			}
		}
		cout << mxx * mxy << endl;
	} 
	return 0;
}