#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a1, a2, k1, k2, n;
	cin >> a1 >> a2 >> k1 >> k2 >> n;
	int ans = a1 * (k1 - 1) + a2 * (k2 - 1), mn, mx = a1 + a2;
	mn = min(a1 + a2, max(0, n - ans));
	ans = a1 * k1 + a2 * k2;
	if (ans > n) {
		if (k1 < k2) {
			int tmp = k1 * a1;
			if (tmp < n) {
				mx = a1 + (n - tmp) / k2;
			} else {
				mx = n / k1;
			}
		} else {
			int tmp = k2 * a2;
			if (tmp < n) {
				mx = a2 + (n - tmp) / k1;
			} else {
				mx = n / k2;
			}
		}
	}
	cout << mn << " " << mx << endl;
	return 0;
}