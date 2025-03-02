#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int x;
	int y;
	int cnt = 15;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		int ans = (y + 1) / 2;
		x = x - (ans * cnt - y * 4);
		if (x > 0) {
			ans += (x + cnt - 1) / cnt;
		}
		cout << ans << endl;
	}
	return 0;
}