#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, c, d;
	cin >> t;
	while (t --) {
		cin >> c >> d;
		if (abs(c - d) % 2 == 1) cout << -1 << endl;
		else if (c == d && c == 0) cout << 0 << endl;
		else if (c == d) cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}