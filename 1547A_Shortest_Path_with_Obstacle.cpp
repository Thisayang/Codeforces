#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		int ans = abs(a - c) + abs(b - d);
		if (a == c && a == e && f > min(b, d) && f < max(b, d)) ans += 2;
		if (b == d && b == f && e > min(a, c) && e < max(a, c)) ans += 2;
		cout << ans << endl;
	}
	return 0;
}
