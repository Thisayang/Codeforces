#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, mn = 2e9 + 10, ans = 0;
	cin >> n;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	FOR(i, 1, n) {
		if (mn > a[i] - a[i - 1]) {
			ans = 1;
			mn = a[i] - a[i - 1];
		} else if (mn == a[i] - a[i - 1]) {
			ans ++;
		}
	}
	cout << mn << " " << ans << endl;
	return 0;
}