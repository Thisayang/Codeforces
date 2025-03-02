#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int l;
	int r;
	cin >> t;
	while (t--) {
		cin >> l >> r;
		int ans = 1;
		for (int i = 1, tmp = l; tmp + i <= r; ++i) {
			++ans;
			tmp += i;
		}
		cout << ans << endl;
	}
	return 0;
}