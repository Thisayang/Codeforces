#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		if (n % 2 != k % 2) cout << "NO" << endl;
		else {
			if (n >= k * k) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}