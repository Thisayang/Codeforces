#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b;
	cin >> t;
	while (t --) {
		cin >> a >> b;
		bool flg = 1;
		ll tmp = b, ans = 0;
		while (b) {
			ll x = b % 10;
			if (x != 9) flg = 0;
			++ ans;
			b /= 10;
		}
		if (!flg) -- ans;
		cout << 1ll * a * ans << endl;
	}
	return 0;
}