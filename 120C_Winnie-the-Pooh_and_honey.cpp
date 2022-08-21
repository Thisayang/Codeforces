#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w",stdout);
	int n, k, ans = 0;
	cin >> n >> k;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
		if (a[i] >= 3 * k) a[i] -= 3 *k;
		else if (a[i] >= 2 * k) a[i] -= 2 * k;
		else if (a[i] >= k) a[i] -= k;
		ans += a[i];
	}
	cout << ans << endl;
	return 0;
}