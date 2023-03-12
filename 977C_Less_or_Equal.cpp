#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a;
	cin >> n >> k;
	map<int, int> mp;
	FOR(i, 0, n) {
		cin >> a;
		mp[a] ++;
	}
	ll cnt = 0, ans = 0;
	if (k == 0) {
		if (mp.begin()->first == 1) ans = -1;
		else ans = mp.begin()->first - 1;
	} else {
		for (auto it = mp.begin(); it != mp.end(); ++ it) {
			cnt += it->second;
			if (cnt > k) {
				ans = -1;
				break;
			} else if (cnt == k) {
				ans = it->first;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}