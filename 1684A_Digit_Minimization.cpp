#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		if (n < 100) cout << n % 10 << endl;
		else {
			int ans = 9;
			while (n > 0) {
				if (n % 10 < ans) ans = n % 10;
				n /= 10;
			}
			cout << ans << endl;
		}
	}
	return 0;
}