#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, x, n;
	cin >> t;
	while (t --) {
		cin >> x >> n;
		if (x % 2 == 0) {
			if (n % 4 == 1) cout << x - n << endl;
			else if (n % 4 == 2) cout << x + 1 << endl;
			else if (n % 4 == 3) cout << x + n + 1 << endl;
			else cout << x << endl;
		} else {
			if (n % 4 == 1) cout << x + n << endl;
			else if (n % 4 == 2) cout << x - 1 << endl;
			else if (n % 4 == 3) cout << x - 1 - n << endl;
			else cout << x << endl;
		}
	}
	return 0;
}