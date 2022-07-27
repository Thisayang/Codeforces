#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[110];
	cin >> t;
	while (t --) {
		int sum = 0;
		cin >> n >> m;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
		}
		if (m >= sum) cout << 0 << endl;
		else cout << sum - m << endl;
	}
	return 0;
}