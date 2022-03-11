#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		ll sum = 0;
		if (n <= 6) sum = 15;
		else sum = ((n - 6) + 1) / 2 * 5 + 15;
		cout << sum << endl;
	}
	return 0;
}