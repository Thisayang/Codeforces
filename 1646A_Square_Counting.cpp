#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		if (s < n * n) cout << 0 << endl;
		else cout << s / (n * n) << endl;
	}
	return 0;
}