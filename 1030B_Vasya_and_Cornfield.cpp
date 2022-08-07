#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d, m, a, b;
	cin >> n >> d >> m;
	FOR(i, 0, m) {
		cin >> a >> b;
		if (a + b >= d && a + b <= 2 * n - d && a - b >= -d && a - b <= d) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}