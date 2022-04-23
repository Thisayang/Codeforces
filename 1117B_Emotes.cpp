#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, k;
	vector<ll> a(200010);
	cin >> n >> m >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	sort(a.begin(), a.begin() + n);
	ll mx = a[n - 1], x = a[n - 2];
	cout << m / (k + 1) * (k * mx + x) + (m % (k + 1) * mx) << endl;
	return 0;
}