#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	int ans = min(a[0], a[n - 1]);
	FOR(i, 1, n - 1) {
		if (a[i] <= ans && a[i + 1] <= ans) ans = max(a[i], a[i + 1]);
	}
	cout << ans << endl;
	return 0;
}