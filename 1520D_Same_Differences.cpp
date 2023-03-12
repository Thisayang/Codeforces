#include <bits\stdc++.h>
#define ll long long
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, tmp;
	cin >> t;
	while (t --) {
		cin >> n;
		map<int, ll> mp;
		ll ans = 0;
		FOR(i, 0, n) {
			cin >> tmp;
			mp[tmp - i] ++;
		}
		for (auto it = mp.begin(); it != mp.end(); ++ it) {
			ans += (it->second - 1) * (it->second) / 2;
		}
		cout << ans << endl;
	}
	return 0;
}
