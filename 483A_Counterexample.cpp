#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll l, r;
	cin >> l >> r;
	if (r - l < 2) cout << "-1" << endl;
	else if (r - l == 2 && l % 2 == 1) cout << "-1" << endl;
	else {
		if (l % 2 == 1) cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
		else cout << l << " " << l + 1 << " " << l + 2 << endl;
	}
	return 0;
}