#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c, d;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c >> d;
		if (a + b + c + d == 0) cout << 0 << endl;
		else if (a + b + c + d == 4) cout << 2 << endl;
		else cout << 1 << endl;
	}
	return 0;
}