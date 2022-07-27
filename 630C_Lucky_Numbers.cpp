#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	ll ans = 0, m = 2;
	FOR(i, 0, n) {
		ans += m;
		m *= 2;
	}
	cout << ans << endl;
	return 0;
}