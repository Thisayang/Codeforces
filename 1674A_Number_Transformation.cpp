#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x, y;
	cin >> t;
	while (t --) {
		cin >> x >> y;
		if (y % x != 0) cout << 0 << " " << 0 << endl;
		else cout << 1 << " " << y / x << endl;
	}
	return 0;
}