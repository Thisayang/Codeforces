#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int ans = 1e9;
		for (int i = 1; i * i <= n; ++ i) {
			ans = min(ans, i - 1 + ((n - i) + i - 1) / i);
		}
		cout << ans << endl;
	}
	return 0;
}