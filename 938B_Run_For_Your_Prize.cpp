#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, mx = 1, mn = 1e6;
	cin >> n;
	FOR(i, 0, n) {
		cin >> a;
		if (a <= 5e5) mx = max(mx, a);
		else mn = min(mn, a);
	}
	cout << max(mx - 1, int(1e6 - mn)) << endl;
	return 0;
}