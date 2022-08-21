#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int p[4], a, b, ans = 0;
	FOR(i, 0, 4) cin >> p[i];
	cin >> a >> b;
	FOR(i, a, b + 1) {
		int t = i;
		t %= p[0];
		if (t < i) continue;
		t %= p[1];
		if (t < i) continue;
		t %= p[2];
		if (t < i) continue;
		t %= p[3];
		if (t == i) ans ++;
	}
	cout << ans << endl;
	return 0;
}