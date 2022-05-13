#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int tmp = 0, x, ans = 0;
		while (n > 1) {
			for (int i = 1; tmp < n; ++ i) {
				tmp = 2 * i + (i * i - i) * 3 / 2;
				if (tmp == n) {
					ans ++;
					n = 0;
					break;
				} else if (tmp > n) {
					n -= x;
					ans ++;
					tmp = 0;
					break;
				}
				x = tmp;
			}
		}
		cout << ans << endl;
	}
	return 0;
}