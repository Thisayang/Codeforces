#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<ll> a(n);
		ll sum = 0, tmp = 1;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			while (a[i] % 2 == 0) {
				a[i] /= 2;
				tmp *= 2;
			}
		}
		sort (a.begin(), a.end());
		a[n - 1] *= tmp;
		for (int i = 0; i < n; ++ i) {
			sum += a[i];
		}
		cout << sum << endl;
	}
	return 0;
}