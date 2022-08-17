#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, a, ans = 0;
	cin >> n;
	vector<int> b, c; 
	map<int, int> mpl, mpr;
	FOR(i, 0, n) {
		cin >> x >> a;
		if (x < 0) {
			mpl[abs(x)] = a;
		} else {
			mpr[x] = a;
		}
	}
	int i = 0, j = 0, l = mpl.size(), r = mpr.size();
	if (l > r) {
		for (auto it = mpl.begin(); it != mpl.end() && i < r + 1; ++ it, ++ i) {
			ans += it->second;
		}
		for (auto it = mpr.begin(); it != mpr.end() && j < r; ++ it, ++ j) {
			ans += it->second;
		}
	} else if (r > l) {
		for (auto it = mpl.begin(); it != mpl.end() && i < l; ++ it, ++ i) {
			ans += it->second;
		}
		for (auto it = mpr.begin(); it != mpr.end() && j < l + 1; ++ it, ++ j) {
			ans += it->second;
		}
	} else {
		for (auto it = mpl.begin(); it != mpl.end() && i < l; ++ it, ++ i) {
			ans += it->second;
		}
		for (auto it = mpr.begin(); it != mpr.end() && j < l; ++ it, ++ j) {
			ans += it->second;
		}
	}
	cout << ans << endl;
	return 0;
}