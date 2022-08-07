#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c, mx, mn;
	cin >> a >> b >> c;
	mx = max(a, b);
	mn = min(a, b);
	int cnt = c / mx, flg = 0;
	FOR(i, 0, cnt + 1) {
		if ((c - mx * i) % mn == 0) {
			flg = 1;
		}
	}
	cout << (flg == 1 ? "YES" : "NO") << endl;
	return 0;
}