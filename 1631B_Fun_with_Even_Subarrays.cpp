#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n + 1);
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i];
		}
		vector<int> b = a;
		reverse(a.begin() + 1, a.end());
		int ans = 0, x = 1;
		while (x < n) {
			if (a[x + 1] == a[1]) {
				x ++;
				continue;
			}
			ans ++;
			x *= 2;
		}
		cout << ans << endl;
	}
	return 0;
}