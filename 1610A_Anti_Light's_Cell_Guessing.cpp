#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		if (n == 1 && m == 1) cout << 0 << endl;
		else if (min(n, m) == 1) cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}