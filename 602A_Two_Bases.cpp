#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, bx, m, by, flg = 1, s1 = 0, s2 = 0;
	cin >> n >> bx;
	vector<int> x(n);
	FOR(i, 0, n) cin >> x[i];
	ROF(i, n - 1, -1) {
		s1 += flg * x[i];
		flg *= bx;
	}
	flg = 1;
	cin >> m >> by;
	vector<int> y(m);
	FOR(i, 0, m) cin >> y[i];
	ROF(i, m - 1, -1) {
		s2 += flg * y[i];
		flg *= by;
	}
	if (s1 > s2) cout << ">" << endl;
	else if (s1 < s2) cout << "<" << endl;
	else cout << "=" << endl;
	return 0;
}