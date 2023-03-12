#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x, tmp;
	cin >> t;
	while (t --) {
		cin >> n >> x;
		int sum = 0, l, r, cnt = 0,flg = 0, ans;
		FOR(i, 0, n) {
			cin >> tmp;
			if (tmp % x == 0) cnt ++;
			else if (flg == 0) l = i, flg = 1;
			else r = i;
			sum += tmp;
		}
		if (cnt == n) ans = -1;
		else if (sum % x != 0) ans = n;
		else ans = max(n - l - 1, r);
		cout << ans << endl;
	}
	return 0;
}