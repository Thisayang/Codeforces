#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll l, r;
	cin >> l >> r;
	cout << "YES" << endl;
	for (ll i = 0; i < (r - l + 1) / 2; ++ i) {
		cout << l + i * 2 << " " << l + i * 2 + 1 << endl;
	}
	return 0;
}