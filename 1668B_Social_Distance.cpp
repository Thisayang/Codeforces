#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	vector<ll> a(100010);
	cin >> t;
	while (t --) {
		cin >> n >> m;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		if (n >= m) cout << "NO" << endl;
		else {
			sort(a.begin(), a.begin() + n, cmp);
			ll sum = a[0] * 2 + 1;
			for (int i = 1; i < n - 1; ++ i) {
				sum += a[i] + 1;
			}
			sum += 1;
			if (sum <= m) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}