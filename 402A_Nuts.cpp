#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, a, b, v, ans = 0;
	cin >> k >> a >> b >> v;
	while (a > 0) {
		ans ++;
		if (b + 1 >= k) {
			a -= k * v;
			b -= k - 1;
		} else {
			a -= (b + 1) * v;
			b = 0;
		}
	}
	cout << ans << endl;
	return 0;
}