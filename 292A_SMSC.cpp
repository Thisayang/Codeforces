#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b, x, sum = 0, ans = 0;
	cin >> n >> a >> b;
	sum += b, x = a;
	ans = max(ans, sum);
	FOR(i, 1, n) {
		cin >> a >> b;
		sum = sum - a + x;
		if (sum < 0) sum = 0;
		sum += b;
		ans = max(ans, sum);
		x = a;
	}
	cout << x + sum << " " << ans << endl;
	return 0;
}