#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int ans = 0;
		while (!is_sorted(a.begin(), a.end())) {
			for (int i = ans % 2; i + 1 < n; i += 2) {
				if (a[i] > a[i + 1]) {
					swap(a[i], a[i + 1]);
				}
			}
			ans += 1;
		}
		cout << ans << endl;
	}
	return 0;
}