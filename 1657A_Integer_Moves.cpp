#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x, y;
	cin >> t;
	while (t --) {
		cin >> x >> y;
		if (x == 0 && y == 0) cout << 0 << endl;
		else if (sqrt(x * x + y * y) - int(sqrt(x * x + y * y)) == 0)cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}