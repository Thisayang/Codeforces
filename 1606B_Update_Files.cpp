#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		ll n, k, mx = 1, ans = 0;
		cin >> n >> k;
		while (mx < k) {
			mx *= 2;
			ans ++;
		}
		if (mx < n) ans += (n - mx + k - 1) / k;
		cout << ans << endl;
	}
	return 0;
}