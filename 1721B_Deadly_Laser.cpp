#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, sx, sy, d;
	cin >> t;
	while (t --) {
		cin >> n >> m >> sx >> sy >> d;
		if ((sx - d < 2 && sy - d < 2) || (sx + d >= n && sy + d >= m) 
			|| (sx - d < 2 && sx + d >= n) || (sy - d < 2 && sy + d >= m)) {
			cout << "-1" << endl;
		} else {
			cout << n + m - 2 << endl;
		}
	}
	return 0;
}