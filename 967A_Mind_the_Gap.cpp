#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, s, h, m, t, v = 0, x = 0, flg = 1;
	cin >> n >> s;
	cin >> h >> m;
	t = h * 60 + m;
	if (n == 1) {
		if (t >= s + 1) x = 0;
		else x = t + s + 1;
	} else {
		if (t >= s + 1) {
			flg = 0;
		} 
		FOR(i, 1, n) {
			cin >> h >> m;
			v = t;
			t = h * 60 + m;
			if (t - v > 2 * s + 1 && flg) {
				flg = 0;
				x = v + s + 1;
			}
		}
		if (flg == 1) x = t + s + 1;
	}
	cout << x / 60 << " " << x % 60 << endl;
	return 0;
}