#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c;
		int mn = min(a, min(b, c));
		int sum = a + b + c;
		if (sum % 9 == 0 && mn >= sum / 9) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}