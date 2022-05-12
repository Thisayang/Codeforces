#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c, x, y;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c >> x >> y;
		if (a + c >= x && b + c >= y && a + b + c >= x + y) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}