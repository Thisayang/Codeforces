#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		if (n % 2 == 1 || n < 4) cout << -1 << endl;
		else {
			if (n % 12 == 0) cout << n / 6 << " " << n / 4 << endl;
			else if (n % 6 == 0) cout << n / 6 << " " << n / 4 << endl;
			else if (n % 4 == 0) cout << n / 6 + 1 << " " << n / 4 << endl;
			else cout << n / 6 + 1<< " " << n / 4 << endl;
		}
	}
	return 0;
}