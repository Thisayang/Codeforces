#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<ll> a(200010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		if (n == 1) {
			cout << a[0] << endl;
		} else {
			sort (a.begin(), a.begin() + n);
			ll res = a[0];
			for (int i = 1; i < n; ++ i) {
				res = max<ll> (res, a[i] - a[i - 1]);
			}
			cout << res << endl;
		}
	}
	return 0;
}