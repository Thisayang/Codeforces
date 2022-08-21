#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, flg = -1, x, y, a, b, c, d;
	cin >> n;
	FOR(i, 0, 4) {
		cin >> a >> b >> c >> d;
		if (flg == -1) {
			if (min(a, b) + min(c, d) <= n) {
				flg = i + 1;
				x = min(a, b);
				y = n - x;
			}
		}
	}
	cout << flg << " ";
	if (flg != -1) cout << x << " " << y;
	cout << endl;
	return 0;
}