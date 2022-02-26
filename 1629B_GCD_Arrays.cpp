#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, l, r ,k;
	cin >> t;
	while (t --) {
		cin >> l >> r >> k;
		if (l == 1 && r == 1) cout << "NO" << endl;
		else if (l == r) cout << "YES" << endl;
		else {
			int cnt = (r - l + 1) / 2 + (l % 2 && r % 2);
			cout << (cnt <= k ? "YES" : "NO") << endl;
		}
	}
	return 0;
}