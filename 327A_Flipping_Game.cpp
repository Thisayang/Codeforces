#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, ans = 0, cnt = 0, c1 = 0, c2 = 0;
	cin >> n;
	FOR(i, 0, n) {
		cin >> a;
		if (a == 1) {
			c1 --;
			c1 = max(c1, 0);
			ans ++;
		} else {
			c1 ++;
			c2 = max(c1, c2);
		}
	}
	if (n == ans) ans -= 1;
	else ans += c2;
	cout << ans << endl;
	return 0;
}