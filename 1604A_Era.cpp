#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int ans = 0;
		for (int i = 1; i <= n; ++ i) {
			int k;
			cin >> k;
			ans = max(ans, k - i);
		}
		cout << ans << endl;
	}
	return 0;
}