#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c;
		if ((2 * b) - c > 0 && ((2 * b) - c) % a == 0) cout << "YES" << endl;
		else if ((a + c) % (2 * b) == 0) cout << "YES" << endl;
		else if ((2 * b) - a > 0 && ((2 * b) - a) % c == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}