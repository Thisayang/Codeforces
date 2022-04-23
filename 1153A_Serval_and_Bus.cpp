#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, t, a, b, mn = 100001, ans = 1;
	cin >> n >> t;
	for (int i = 0; i < n; ++ i) {
		cin >> a >> b;
		if (a >= t && a - t < mn) {
			mn = a - t;
			ans = i + 1;
		} else if (t > a ) {
			if ((t - a) % b == 0) {
				mn = 0;
				ans = i + 1;
			} else if (b - ((t - a)% b) < mn) {
				mn = b - ((t - a)% b);
				ans = i + 1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}