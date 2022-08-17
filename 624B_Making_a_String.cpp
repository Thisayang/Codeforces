#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, a, ans = 0;
	map<ll, int> mp;
	set<ll> sett;
	cin >> n;
	FOR(i, 0, n) {
		cin >> a;
		mp[a] ++;
	}
	for (auto it = mp.begin(); it != mp.end(); ++ it) {
		for (int i = 0; i < it-> second; ++ i) {
			for (ll j = it -> first; j >= 0; -- j) {
				if (sett.find(j) == sett.end()) {
					sett.insert(j);
					ans += j;
					break;
				}
			}
		} 
	}
	cout << ans << endl;
	return 0;
}