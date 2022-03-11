#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[100010];
	cin >> t;
	while (t --) {
		cin >> n;
		ll sum = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
		}
		sort(a, a + n);
		if (a[n - 1] == 0) cout << 0 << endl;
		else if (a[n - 1] <= sum - a[n - 1] + 1) cout << 1 << endl;
		else cout << a[n - 1] - sum + a[n - 1] << endl;
	}
	return 0;
}