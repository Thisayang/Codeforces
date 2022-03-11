#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		if (n >= 20) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			ll sum = 1;
			for (int i = 0; i < n; ++ i) {
				cout << sum << " ";
				sum = 3 * sum;
			}
			cout << endl;
		}
	}
	return 0;
}