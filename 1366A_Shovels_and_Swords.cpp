#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b;
	cin >> t;
	while (t --) {
		cin >> a >> b;
		int mn = min(a, b);
		int mx = max(a, b);
		if (mx / 2 >= mn) cout << mn << endl;
		else {
			int tmp = mx - mn;
			tmp += (mn - tmp) * 2 / 3;
			cout << tmp << endl;
		}
	}
	return 0;
}