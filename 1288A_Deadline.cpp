#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, d;
	cin >> t;
	while (t --) {
		cin >> n >> d;
		if (d <= n) cout << "YES" << endl;
		else {
			int ans, flg = 0;
			for (int i = 1; i < n; ++ i) {
				if (d <= i + 1) ans = 1;
				else {
					ans = d / (i + 1);
					if (d % (i + 1) != 0) ans ++;
				}
				if (i + ans <= n) {
					flg = 1;
					break;
				}
			}
			cout << (flg == 1 ? "YES" : "NO") << endl;
		}
	}
	return 0;
}