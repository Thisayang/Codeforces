#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		int ans = 0;
		int a;
		for (int i = 0; i < n; ++i) {
			cin >> a;
			if (a > 0) {
				ans += a;
			} else {
				ans -= a;
			}
		}
		cout << ans << endl;
	}
	return 0;
}