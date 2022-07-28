#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, l, r, mn = 1e9 + 7, mx = 0, ans = -1;
	cin >> n;
	vector<pair<int, int>> a;
	FOR(i, 0, n) {
		cin >> l >> r;
		mn = min(mn, l);
		mx = max(mx, r);
		a.push_back(make_pair(l, r));
	}
	FOR(i, 0, n) {
		if (a[i].first == mn && a[i].second == mx) {
			ans = i + 1;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}