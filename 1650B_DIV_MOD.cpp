#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, l, r, a;
	cin >> t;
	while (t --) {
		cin >> l >> r >> a;
		int ans = r / a * a - 1;
		if (ans < l) ans = r;
		if (r % a == a - 1) ans = r;
		cout << ans / a + ans % a << endl;
	}
	return 0;
}