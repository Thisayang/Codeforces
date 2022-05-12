#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
	cin >> t;
	while (t --) {
		cin >> n;
		int mn = 10000010, sum = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
			mn = min(mn, a[i]);
		}
		cout << sum - mn * n << endl;
	}
	return 0;
}