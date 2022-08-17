#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, n1, n2;
	double s1 = 0.0, s2 = 0.0;
	cin >> n >> n1 >> n2;
	vector<double> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int mn = min(n1, n2), mx = max(n1, n2);
	FOR(i, 0, mn) s1 += a[i];
	FOR(i, mn, mn + mx) s2 += a[i];
	printf("%.8lf\n", s1 / mn + s2 / mx);
	return 0;
}