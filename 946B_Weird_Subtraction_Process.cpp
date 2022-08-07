#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, m;
	cin >> n >> m;
	while (n >= 2 * m || m >= 2 * n) {
		if (m == 0 || n == 0) break;
		if (n >= 2 * m) {
			n -= (n / (m * 2) * 2) * m;
			continue;
		}
		if (m >= 2 * n) {
			m -= (m / (n * 2) * 2) * n;
			continue;
		}
		
	}
	cout << n << " " << m << endl;
	return 0;
}