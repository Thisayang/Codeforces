#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], ans = 0;
	cin >> n;
	FOR(i, 0, n) cin >> a[i];
	FOR(i, 0, n) {
		int tmp = a[i];
		ans = max(ans, tmp);
		FOR(j, i + 1, n) {
			tmp ^= a[j];
			ans = max(ans, tmp);
		}
	}
	cout << ans << endl;
	return 0;
}