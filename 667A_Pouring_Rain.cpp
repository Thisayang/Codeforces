#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	double d, h, v, e;
	cin >> d >> h >> v >> e;
	double vl = 3.1415926535897 * (d * d) / 4;
	double s = vl * h;
	if (v <= vl * e) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		cout << s / (v - (vl * e)) << endl;
	}
	return 0;
}