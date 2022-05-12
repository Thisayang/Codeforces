#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, sum = 0, tmp;
	vector<ll> a(100010, 0);
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> tmp;
		a[i] += tmp;
		int x = 1;
		while (i + x < n) {
			x *= 2;
		}
		x /= 2;
		a[i + x] += a[i];
		if (i != 0) a[i] += a[i - 1];
		if (i < n - 1) {
			cout << a[i] << endl;
		}
	}
	return 0;
}