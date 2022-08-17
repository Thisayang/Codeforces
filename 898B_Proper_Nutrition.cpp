#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b, flg = 0;
	cin >> n >> a >> b;
	int mx = max(a, b), mn = min(a, b);
	FOR(i, 0, n / mx + 1) {
		if (mx == mn && n % mx != 0) break;
		if ((n - i * mx) % mn == 0) {
			flg = 1;
			cout << "YES" << endl;
			if (mx == a) cout << i << " " << (n - i * mx) / mn << endl;
			else cout << (n - i * mx) / mn << " " << i << endl;
			break;
		}
	}
	if (flg == 0) cout << "NO" << endl;
	return 0;
}