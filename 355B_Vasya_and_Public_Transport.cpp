#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int c[4], n, m, ans;
	FOR(i, 0, 4) cin >> c[i];
	ans = min(c[2] * 2, c[3]);
	cin >> n >> m;
	int t = m * c[1] + c[2], p = n * c[1] + c[2];
	ans = min(ans, min(t, p));
	vector<int> a(n), b(m);
	t = 0, p = 0;
	int sum1 = 0, sum2 = 0;
	FOR(i, 0, n) {
		cin >> a[i];
		sum1 += a[i];
		t += min(a[i] * c[0], c[1]);
	}
	FOR(i, 0, m) {
		cin >> b[i];
		sum2 += b[i];
		p += min(b[i] * c[0], c[1]);
	}
	ans = min(ans, min(t + c[2], p + c[2]));
	ans = min(ans, t + p);
	cout << ans << endl;
	return 0;
}