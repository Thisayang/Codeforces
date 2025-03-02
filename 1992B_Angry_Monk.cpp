#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int a[k];
		int ans = 0;
		for (int i = 0; i < k; ++i) {
			cin >> a[i];
		}
		sort(a, a + k);
		for (int i = 0; i < k - 1; ++i) {
			ans += a[i] * 2 - 1;
		}
		cout << ans << endl;
	}
	return 0;
}