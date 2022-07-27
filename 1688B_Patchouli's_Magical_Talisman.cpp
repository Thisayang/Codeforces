#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a;
	set<int> sett;
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt = 0, ans = 100;
		for (int i = 0; i < n; ++ i) {
			cin >> a;
			if (a % 2 == 1) cnt ++;
			else {
				int c = 0;
				while (a % 2 != 1) {
					a /= 2;
					c ++;
				}
				if (c < ans) ans = c;
			}
		}
		if (cnt == n) cout << 0 << endl;
		else if (cnt != 0) cout << n - cnt << endl;
		else if (cnt == 0) {
			cout << ans + n - 1 << endl;
		}
	}
	return 0;
}