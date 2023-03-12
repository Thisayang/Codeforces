#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d, ans = 0;
	cin >> n >> d;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int tmp = n;
	FOR(i, 0, n) {
		if (d / a[i] + 1 <= tmp) {
			ans ++;
			tmp -= (d / a[i] + 1);
		} else break;
	}
	cout << ans << endl;
	return 0;
}