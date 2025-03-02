#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int a;
		int ans = 0;
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a;
			if (a >= k) {
				ans += a;
			} else if (a == 0 && ans > 0) {
				--ans;
				++cnt;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}