#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x, a[3];
	cin >> t;
	while (t --) {
		cin >> x >> a[0] >> a[1] >> a[2];
		if (a[x - 1] == 0) cout << "NO" << endl;
		else if (a[a[x - 1] - 1] == 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}