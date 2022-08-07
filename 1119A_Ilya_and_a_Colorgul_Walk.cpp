#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	cin >> n;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	FOR(i, 1, n) {
		if (a[i] != a[0]) ans = max(ans, i);
	}
	FOR(i, 0, n) {
		if (a[i] != a[n - 1]) ans = max(ans, n - i - 1);
	}
	cout << ans << endl;
	return 0;
}